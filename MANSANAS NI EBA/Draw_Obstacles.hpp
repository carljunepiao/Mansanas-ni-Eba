
/*Draws/makes Grids and Obstacles*/
void Game::DrawBlocks(){
    int x,y;
    int i;

    sf::Vector2f size(55.f,58.f);

    //Grid
    for(x=0;x<16;x++){
        for(y=0;y<9;y++){
            blocks[x][y].setSize(size);
            blocks[x][y].setOutlineThickness(2);
            blocks[x][y].setFillColor(sf::Color::Black);
            blocks[x][y].setOutlineColor(sf::Color::White);
            blocks[x][y].setOrigin(0-(x*55),0-(y*58));
            blocks[x][y].isObstacle=false;
        }
    }


    //Obstacles
    blocks[1][0].isObstacle=true;
    blocks[1][0].setFillColor(sf::Color::White);
    blocks[5][0].isObstacle=true;
    blocks[5][0].setFillColor(sf::Color::White);
    blocks[8][0].isObstacle=true;
    blocks[8][0].setFillColor(sf::Color::White);
    blocks[12][0].isObstacle=true;
    blocks[12][0].setFillColor(sf::Color::White);
    blocks[3][1].isObstacle=true;
    blocks[3][1].setFillColor(sf::Color::White);
    blocks[10][1].isObstacle=true;
    blocks[10][1].setFillColor(sf::Color::White);
    blocks[1][2].isObstacle=true;
    blocks[1][2].setFillColor(sf::Color::White);
    blocks[3][2].isObstacle=true;
    blocks[3][2].setFillColor(sf::Color::White);
    blocks[5][2].isObstacle=true;
    blocks[5][2].setFillColor(sf::Color::White);
    blocks[6][2].isObstacle=true;
    blocks[6][2].setFillColor(sf::Color::White);
    blocks[7][2].isObstacle=true;
    blocks[7][2].setFillColor(sf::Color::White);
    blocks[8][2].isObstacle=true;
    blocks[8][2].setFillColor(sf::Color::White);
    blocks[10][2].isObstacle=true;
    blocks[10][2].setFillColor(sf::Color::White);
    blocks[12][2].isObstacle=true;
    blocks[12][2].setFillColor(sf::Color::White);
    blocks[3][3].isObstacle=true;
    blocks[3][3].setFillColor(sf::Color::White);
    blocks[4][3].isObstacle=true;
    blocks[4][3].setFillColor(sf::Color::White);
    blocks[9][3].isObstacle=true;
    blocks[9][3].setFillColor(sf::Color::White);
    blocks[10][3].isObstacle=true;
    blocks[10][3].setFillColor(sf::Color::White);
    blocks[1][4].isObstacle=true;
    blocks[1][4].setFillColor(sf::Color::White);
    blocks[4][4].isObstacle=true;
    blocks[4][4].setFillColor(sf::Color::White);
    blocks[6][4].isObstacle=true;
    blocks[6][4].setFillColor(sf::Color::White);
    blocks[9][4].isObstacle=true;
    blocks[9][4].setFillColor(sf::Color::White);
    blocks[12][4].isObstacle=true;
    blocks[12][4].setFillColor(sf::Color::White);
    blocks[0][5].isObstacle=true;
    blocks[0][5].setFillColor(sf::Color::White);
    blocks[2][5].isObstacle=true;
    blocks[2][5].setFillColor(sf::Color::White);
    blocks[11][5].isObstacle=true;
    blocks[11][5].setFillColor(sf::Color::White);
    blocks[13][5].isObstacle=true;
    blocks[13][5].setFillColor(sf::Color::White);
    blocks[3][6].isObstacle=true;
    blocks[3][6].setFillColor(sf::Color::White);
    blocks[5][6].isObstacle=true;
    blocks[5][6].setFillColor(sf::Color::White);
    blocks[8][6].isObstacle=true;
    blocks[8][6].setFillColor(sf::Color::White);
    blocks[10][6].isObstacle=true;
    blocks[10][6].setFillColor(sf::Color::White);
    blocks[1][7].isObstacle=true;
    blocks[1][7].setFillColor(sf::Color::White);
    blocks[6][7].isObstacle=true;
    blocks[6][7].setFillColor(sf::Color::White);
    blocks[7][7].isObstacle=true;
    blocks[7][7].setFillColor(sf::Color::White);
    blocks[12][7].isObstacle=true;
    blocks[12][7].setFillColor(sf::Color::White);
    blocks[11][2].isObstacle=true;
    blocks[11][2].setFillColor(sf::Color::White);
    blocks[2][2].isObstacle=true;
    blocks[2][2].setFillColor(sf::Color::White);
    blocks[7][4].isObstacle=true;
    blocks[7][4].setFillColor(sf::Color::White);
    blocks[7][7].isObstacle=true;
    blocks[7][7].setFillColor(sf::Color::White);

    for(i=0;i<=15;i++){
        blocks[i][8].isObstacle=true;
        blocks[i][8].setFillColor(sf::Color::White);
    }
    for(i=0;i<=8;i++){
        blocks[14][i].isObstacle=true;
        blocks[14][i].setFillColor(sf::Color::White);
    }
}
