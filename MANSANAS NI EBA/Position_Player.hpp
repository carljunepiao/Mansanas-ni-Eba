

/*Returns index of where player is on the grid, based on its position in window*/

sf::Vector2i Game::getIndex(sf::Vector2f position){

    //stores FLOAT x- and y- intercepts of the position of the player to INT
    int x = position.x;
    int y = position.y;
    sf::Vector2i index((x+16)/55,(y+32)/58); //adds certain value to x and y to shift the point of reference of rectangle of player
    return index; //index here is a vector, which means it stores the x- and y- intercepts of the POSITION OF PLAYER ON THE GRID
}

