#ifndef DETECTIVE_H
#define DETECTIVE_H

#include <SFML/Graphics.hpp>

class Detective {
public:
    Detective();
    void handleInput();
    void update();
    void draw(sf::RenderWindow &window);

private:
    sf::Texture texture;
    sf::Sprite sprite;
    float speed;
};

#endif // DETECTIVE_H
