/*Sprites animation*/
void Game::update(){
    //for the checking of obstacles
    player.obstacleUp=player.obstacleDown=player.obstacleLeft=player.obstacleRight=false;
    player2.obstacleUp=player2.obstacleDown=player2.obstacleLeft=player2.obstacleRight=false;
    sf::Vector2i index=getIndex(player.PlayerImage.getPosition());
    sf::Vector2i index2=getIndex(player2.PlayerImage.getPosition());

    //checks if there is an obstacle :

    //for player1
    if(blocks[index.x][index.y-1].isObstacle==true && blocks[index.x][index.y-1].getGlobalBounds().intersects(player.PlayerImage.getGlobalBounds()))
        player.obstacleUp=true;
    if(blocks[index.x-1][index.y].isObstacle==true && blocks[index.x-1][index.y].getGlobalBounds().intersects(player.PlayerImage.getGlobalBounds()))
        player.obstacleLeft=true;
    if(blocks[index.x][index.y+1].isObstacle==true && blocks[index.x][index.y+1].getGlobalBounds().intersects(player.PlayerImage.getGlobalBounds()))
        player.obstacleDown=true;
    if(blocks[index.x+1][index.y].isObstacle==true && blocks[index.x+1][index.y].getGlobalBounds().intersects(player.PlayerImage.getGlobalBounds()))
        player.obstacleRight=true;
    //for player2
    if(blocks[index2.x][index2.y-1].isObstacle==true && blocks[index2.x][index2.y-1].getGlobalBounds().intersects(player2.PlayerImage.getGlobalBounds()))
        player2.obstacleUp=true;
    if(blocks[index2.x-1][index2.y].isObstacle==true && blocks[index2.x-1][index2.y].getGlobalBounds().intersects(player2.PlayerImage.getGlobalBounds()))
        player2.obstacleLeft=true;
    if(blocks[index2.x][index2.y+1].isObstacle==true && blocks[index2.x][index2.y+1].getGlobalBounds().intersects(player2.PlayerImage.getGlobalBounds()))
        player2.obstacleDown=true;
    if(blocks[index2.x+1][index2.y].isObstacle==true && blocks[index2.x+1][index2.y].getGlobalBounds().intersects(player2.PlayerImage.getGlobalBounds()))
        player2.obstacleRight=true;

    //Movements of player 1:
    if (player.mIsMovingUp && player.PlayerImage.getPosition().y>=0 && player.obstacleUp!=true){// && blocks[a][b].isObstacle!=true){
        player.PlayerImage.move(0,-.5);
        player.movement.y = Up;
    }
    else if (player.mIsMovingDown && player.PlayerImage.getPosition().y<=480 && player.obstacleDown!=true){
        player.PlayerImage.move(0,.5);
        player.movement.y = Down;
    }
    else if (player.mIsMovingLeft && player.PlayerImage.getPosition().x>=0 && player.obstacleLeft!=true){
        player.PlayerImage.move(-.5,0);
        player.movement.y = Left;
    }
    else if (player.mIsMovingRight && player.PlayerImage.getPosition().x<=738 && player.obstacleRight!=true){
        player.PlayerImage.move(.5,0);
        player.movement.y = Right;
    }

    //Movements of player 2
    if (player2.mIsMovingUp && player2.PlayerImage.getPosition().y>=0&& player2.obstacleUp!=true) {
        player2.PlayerImage.move(0,-.5);
        player2.movement.y = Up;
    }
    else if (player2.mIsMovingDown && player2.PlayerImage.getPosition().y<=480 && player2.obstacleDown!=true){
        player2.PlayerImage.move(0,.5);
        player2.movement.y = Down;
    }
    else if (player2.mIsMovingLeft && player2.PlayerImage.getPosition().x>=0 && player2.obstacleLeft!=true){
        player2.PlayerImage.move(-.5,0);
        player2.movement.y = Left;
    }
    else if (player2.mIsMovingRight && player2.PlayerImage.getPosition().x<=738 && player2.obstacleRight!=true){
        player2.PlayerImage.move(.5,0);
        player2.movement.y = Right;
    }

    /*For speed of animation*/
    player.frameCounter += player.frameSpeed*player.playerClock.restart().asSeconds();
    if(player.frameCounter >= player.switchFrame){
        player.frameCounter = 0;
        player.movement.x++;

        //If greater than or equal to the width of the texture (Once it reaches the end of it)
        if(player.movement.x * 40>=player.pTexture.getSize().x)
            player.movement.x=0;
    }

    player2.frameCounter += player2.frameSpeed*player2.playerClock.restart().asSeconds();
    if(player2.frameCounter >= player2.switchFrame){
        player2.frameCounter = 0;
        player2.movement.x++;
        if(player2.movement.x * 32>=player2.pTexture.getSize().x)
            player2.movement.x=0;
    }

    //Amount of time since the program started
    time1 = Clock1.getElapsedTime();
    //Restarts time1
    time1 = Clock1.restart();
    //Restarts Clock1
    Clock1.restart();

    /*Size of Sprites to display*/
    player.PlayerImage.setTextureRect(sf::IntRect(player.movement.x*32,player.movement.y*48,32,48));
    player2.PlayerImage.setTextureRect(sf::IntRect(player2.movement.x*32,player2.movement.y*48,32,48));

}
