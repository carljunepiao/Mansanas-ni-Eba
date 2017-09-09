/*Handles user's input*/
void Game::processEvents(){
    sf::Event event;

    while (Window.pollEvent(event)){
        switch(event.type){
            //if key is pressed
            case sf::Event::KeyPressed:
                handlePlayerInput(event.key.code, true);
                break;
            //if key is released
            case sf::Event::KeyReleased:
                handlePlayerInput(event.key.code, false);
                break;
        }
    }
}
