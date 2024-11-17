#include "Scene.h"
#include <iostream>

Scene::Scene() {
    if (!bgTexture.loadFromFile("assets/dark_room.png")) {
        std::cerr << "Failed to load background image\n";
    }
    bgSprite.setTexture(bgTexture);
}

void Scene::update() {
    // 在这里处理场景变化和事件触发
}

void Scene::draw(sf::RenderWindow &window) {
    window.draw(bgSprite);
}
