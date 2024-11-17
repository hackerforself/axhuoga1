#ifndef SCENE_H
#define SCENE_H

#include <SFML/Graphics.hpp>

class Scene {
public:
    Scene();
    void update();
    void draw(sf::RenderWindow &window);

private:
    sf::Texture bgTexture;
    sf::Sprite bgSprite;
};

#endif // SCENE_H
