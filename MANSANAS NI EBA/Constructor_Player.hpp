/*Default constructor for player*/
Player::Player(){
    mIsMovingUp = mIsMovingDown = mIsMovingRight = mIsMovingLeft = false;
    frameCounter = 0, switchFrame = 100, frameSpeed = 500;
    obstacleUp = obstacleDown = obstacleLeft = obstacleRight = false;
    movement.x=0.f;
    movement.y=0.f;
}
