/*Initializes everything to 0 or false*/
void Game::initialize(Player *A){
    A->mIsMovingUp = A->mIsMovingDown = A->mIsMovingRight = A->mIsMovingLeft = false;
    A->frameCounter = 0, A->switchFrame = 100, A->frameSpeed = 500;
    A->movement.x=0.f;
    A->movement.y=0.f;
}
