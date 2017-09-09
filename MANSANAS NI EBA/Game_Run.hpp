/*Main game*/
void Game::run(){
    sf::Event event;
    //Loads sound from files
    sf::SoundBuffer p1,p2,main,game;
    game.loadFromFile("Music/Ingame.ogg");
    main.loadFromFile("Music/Menu Theme.ogg");


    b6a.setPosition(event.mouseMove.x,event.mouseMove.y);

    sf::Sound Player1(p1),Player2(p2),Main(main),Game(game);

    int winner;
    int choice=1;

        while (Window.isOpen()){


            Main.play();
            Main.setLoop(true);

            //Main
            while(choice==1){
                    sf::Event event;

                    //Displays sprite: Main menu
                    Window.draw(b1a);
                    //sprite for START Button
                    b6a.setPosition(320,35);
                    Window.draw(b6a);
                    //sprite for EXIT Button
                    b8a.setPosition(320,100);//488,135
                    Window.draw(b8a);
                    //sprite for HOW TO PLAY BUTTON

                    Window.display();

                    while (Window.pollEvent(event))
                    {
                        switch(event.type)
                        {
                            //To check the coordinates
                            case sf::Event::MouseMoved:
                                cout<<event.mouseMove.x<<" "<<event.mouseMove.y<<endl;
                                break;
                            //To be able to change the graphics from time to time
                            case sf::Event::MouseButtonPressed:

                                    //Checks the coordinates (x,y) where the pointer is clicked
                                    if (event.mouseButton.x>=320&&event.mouseButton.x<=490 && event.mouseButton.y>=35&&event.mouseButton.y<=70)
                                        choice = 3;
                                    else if (event.mouseButton.x>=320&&event.mouseButton.x<=488 && event.mouseButton.y>=100&&event.mouseButton.y<=135)
                                    {
                                        Main.stop();
                                        Window.close();
                                    }
                                    break;
                        }
                    }
                }
                if(choice==6)
                {
                    while(choice==6)
                    {
                        //Displays sprite: Instructions
                        Window.draw(b5a);
                        Window.display();

                        sf::Event event;
                        while (Window.pollEvent(event))
                        {
                            switch(event.type)
                            {
                                case sf::Event::MouseMoved:
                                    cout<<event.mouseMove.x<<" "<<event.mouseMove.y<<endl;
                                    break;
                                case sf::Event::MouseButtonPressed:
                                        //Changes to Window 2 (Main Game)
                                        if (event.mouseButton.x>=526&&event.mouseButton.x<=766 && event.mouseButton.y>=33&&event.mouseButton.y<=113)
                                            choice = 1;
                                            break;
                            }
                        }
                    }
                }

                //How to play
                if(choice==3){
                    while(choice==3){
                        //Displays sprite: Instructions
                        Window.draw(b2a);
                        b7a.setPosition(320,420);//488,135
                        Window.draw(b7a);
                        Window.display();


                        sf::Event event;
                        while (Window.pollEvent(event)){
                            switch(event.type){
                                case sf::Event::MouseButtonPressed:
                                    //Changes to Window 2 (Main Game)
                                    if (event.mouseButton.x>=320&&event.mouseButton.x<=490 && event.mouseButton.y>=420&&event.mouseButton.y<=450)
                                        choice = 2;
                                    break;
                        }
                    }
                  }
                }
                //player 1 wins
                if (choice==4){
                    while(choice==4){
                        Main.stop();
                        //Displays sprite:player 1 wins
                        Window.draw(b3a);
                        Window.display();

                        sf::Event event;
                        while (Window.pollEvent(event)){
                            switch(event.type){
                                case sf::Event::MouseButtonPressed:
                                    //Changes to Window 1: Main Menu
                                    if (event.mouseButton.x>=518&&event.mouseButton.x<=748 && event.mouseButton.y>=444&&event.mouseButton.y<=490)
                                        choice = 1;
                                    break;
                        }
                    }
                  }
                }

                //Player 2 wins
                if (choice==5){
                    while(choice==5){
                        Main.stop();
                        //Displays sprite: Player 2 Wins
                        Window.draw(b4a);
                        Window.display();

                        sf::Event event;
                        while (Window.pollEvent(event)){
                            switch(event.type){
                                case sf::Event::MouseButtonPressed:
                                        //Changes to Window 1: Main Menu
                                        if (event.mouseButton.x>=518&&event.mouseButton.x<=748 && event.mouseButton.y>=444&&event.mouseButton.y<=490)
                                            choice = 1;
                                        break;
                            }
                        }
                    }
                }

                if(choice==2){

                        sf::Texture texture1;
                        texture1.loadFromFile("Resources/appel.gif");
                        sf::Sprite apple;

                        sf::Texture texture2;
                        texture2.loadFromFile("Resources/appel.gif");
                        sf::Sprite apple2;

                        apple.setTexture(texture1);
                        apple.setPosition(340,10);

                        apple2.setTexture(texture2);
                        apple2.setPosition(390,10);

                    //Stops the background music from the main
                    Main.stop();
                    //Starts the background music for the game
                    Game.play();
                    Game.setLoop(true);

                    winner=2;

                    //Restarts Elapsed Time
                    Clock2.restart();

                    //For players
                    if(!player.pTexture.loadFromFile("Characters/001-Fighter01.png"))
                        cout<<"could not load image"<<endl;
                    player.PlayerImage.setTexture(player.pTexture);
                    player.PlayerImage.setPosition(15,415);
                    if(!player2.pTexture.loadFromFile("Characters/002-Fighter02.png"))
                        cout<<"could not load image"<<endl;
                    player2.PlayerImage.setTexture(player2.pTexture);
                    player2.PlayerImage.setPosition(740,415);


                    //Initialization of players
                    initialize(&player);
                    initialize(&player2);

                    //Game
                    while(1)//Clock2.getElapsedTime().asSeconds()<=30)
                    {
                            time2=Clock2.getElapsedTime();
                            //cout<<time2.asSeconds()<<endl;

                            //Checks intersection of players to apple sprite
 //COLLIDE
                            if(player.PlayerImage.getGlobalBounds().intersects(apple.getGlobalBounds()) || player.PlayerImage.getGlobalBounds().intersects(apple2.getGlobalBounds()))
                            {

                                Game.stop();
                                Player1.play();

                                winner=1;
                                break;

                            }

                            if(player2.PlayerImage.getGlobalBounds().intersects(apple2.getGlobalBounds())||player2.PlayerImage.getGlobalBounds().intersects(apple2.getGlobalBounds()))
                            {
                                Game.stop();
                                Player2.play();

                                winner=2;
                                break;
                            }
                            else{
                                processEvents();
                                update();
                                TimeCtr=static_cast<int>(time2.asSeconds());
                                render();
                            }
                        }

                    //Checks winner
                    if(winner==1)
                        choice=4;
                    if(winner==2){
                        Game.stop();
                        Player2.play();
                        choice=5;
                    }
                    Clock2.restart();
                }
        }
}
