#include "Detective.h"
#include <iostream>

Detective::Detective() : speed(5.0f) {
    if (!texture.loadFromFile("assets/detective.png")) {
        std::cerr << "Failed to load detective texture\n";
    }
    sprite.setTexture(texture);
    sprite.setPosition(400, 300);
}

void Detective::handleInput() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        sprite.move(0, -speed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        sprite.move(0, speed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        sprite.move(-speed, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        sprite.move(speed, 0);
    }
}

void Detective::update() {
    // 可以在这里添加碰撞检测和与物品交互的逻辑
}

void Detective::draw(sf::RenderWindow &window) {
    window.draw(sprite);
}
