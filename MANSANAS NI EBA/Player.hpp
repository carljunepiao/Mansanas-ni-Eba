
//Declaration of player object

class Player {
public:
    Player();
    sf::Texture pTexture;
    sf::Sprite PlayerImage;
    bool mIsMovingUp, mIsMovingDown, mIsMovingRight, mIsMovingLeft;
    bool obstacleUp, obstacleDown, obstacleRight, obstacleLeft;
    sf::Vector2f movement;
    float frameCounter, switchFrame, frameSpeed;
    sf::Clock playerClock;
};

