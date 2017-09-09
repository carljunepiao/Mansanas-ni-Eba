/*Default constructor for game*/
Game::Game(){
    //Creates window
    Window.create(sf::VideoMode(800,480)," MANSANAS NI EBA ",sf::Style::Titlebar);

    b1.loadFromFile("Resources/Maze.jpg");//For main menu
    b1a.setTexture(b1);
    b1a.scale(sf::Vector2f(0.5,0.5));

    b2.loadFromFile("Resources/HTP2_2.jpg");//For how to play
    b2a.setTexture(b2);

    b3.loadFromFile("Resources/Player 1 Wins.png");
    b3a.setTexture(b3);

    b4.loadFromFile("Resources/Player 2 Wins.png");
    b4a.setTexture(b4);

    b6.loadFromFile("Resources/start.png");
    b6a.setTexture(b6);

    b7.loadFromFile("Resources/start.png");
    b7a.setTexture(b7);

    b8.loadFromFile("Resources/quit_sel.png");
    b8a.setTexture(b8);

}
