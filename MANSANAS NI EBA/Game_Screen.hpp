
//IF YOU WANT TO SEE THE BLOCKS, TO KNOW THE RIGHT WAY JUST FOLLOW BELOW, READ THE COMMENTED LINE :)

/*Renders game to screen*/
void Game::render(){
    sf::Texture texture1;
    sf::Texture texture2;

    texture1.loadFromFile("Resources/appel.gif");
    texture2.loadFromFile("Resources/appel.gif");

    sf::Sprite apple;
    sf::Sprite apple2;

    apple.setTexture(texture1);
    apple.setPosition(340,10);

    apple2.setTexture(texture2);
    apple2.setPosition(390,10);

    int x,y;
    Window.clear();
    DrawBlocks();

    //draws obstacle index
    for(x=0;x<14;x++){
        for(y=0;y<9;y++){
            //TO SEE THE BLOCKS JUST ERASE THE COMMENT BELOW:
            Window.draw(blocks[x][y]);
        }
    }

    //Draws sprite: Main Game
    Window.draw(player.PlayerImage);
    Window.draw(player2.PlayerImage);
    Window.draw(apple);
    Window.draw(apple2);
    Window.display();
}
