
//Checks which key on the keyboard is pressed
void Game::handlePlayerInput(sf::Keyboard::Key key, bool isPressed){
    if (key == sf::Keyboard::W)
        player.mIsMovingUp = isPressed;
    else if (key == sf::Keyboard::S)
        player.mIsMovingDown = isPressed;
    else if (key == sf::Keyboard::A)
        player.mIsMovingLeft = isPressed;
    else if (key == sf::Keyboard::D)
        player.mIsMovingRight = isPressed;
    else if (key == sf::Keyboard::Up)
        player2.mIsMovingUp = isPressed;
    else if (key == sf::Keyboard::Down)
        player2.mIsMovingDown = isPressed;
    else if (key == sf::Keyboard::Left)
        player2.mIsMovingLeft = isPressed;
    else if (key == sf::Keyboard::Right)
        player2.mIsMovingRight = isPressed;

}
