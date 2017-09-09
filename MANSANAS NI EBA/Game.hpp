
//Declaration of sprites

class Game {
public:
    Game();
    Player player;
    Player player2;
    void run();
    void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);
    sf::RenderWindow Window;
    sf::Texture bTexture,b1,b2,b3,b4,b5,b6,b7,b8,b9;
    sf::Sprite background,b1a,b2a,b3a,b4a,b5a,b6a,b7a,b8a,b9a;
    sf::Texture Time0a, Time1a, Time2a, Time3a, Time4a, Time5a, Time6a, Time7a, Time8a, Time9a, Time10a, Time11a, Time12a, Time13a, Time14a, Time15a, Time16a, Time17a, Time18a, Time19a, Time20a,Time21a,Time22a,Time23a,Time24a,Time25a,Time26a,Time27a,Time28a,Time29a,Time30a;
    sf::Sprite Time0, Time1, Time2, Time3, Time4, Time5, Time6, Time7, Time8, Time9, Time10, Time11, Time12, Time13, Time14, Time15, Time16, Time17, Time18, Time19, Time20, Time21, Time22, Time23, Time24, Time25, Time26, Time27, Time28, TIme29, Time30;
    sf::Time time1,time2;
    sf::Clock Clock1,Clock2;
    int TimeCtr;
    Blocks blocks[16][9];
    void DrawBlocks();
    void initialize(Player*);
    sf::Vector2i getIndex(sf::Vector2f);
private:
    void processEvents();
    void update();
    void render();
};
