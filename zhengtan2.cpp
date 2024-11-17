#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Detective.h"
#include "Scene.h"

class Game {
public:
    Game();
    void run();

private:
    sf::RenderWindow window;
    sf::Music bgMusic;
    Detective detective;
    Scene scene;

    void processEvents();
    void update();
    void render();
    void loadAssets();
};

#endif // GAME_H
