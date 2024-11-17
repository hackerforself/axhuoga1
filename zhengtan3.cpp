#include "Game.h"
#include <iostream>

Game::Game() : window(sf::VideoMode(800, 600), "Horror Detective Game") {
    window.setFramerateLimit(60);
    loadAssets();
}

void Game::loadAssets() {
    if (!bgMusic.openFromFile("assets/eerie_ambience.ogg")) {
        std::cerr << "Failed to load background music\n";
    }
    bgMusic.setLoop(true);
    bgMusic.setVolume(50);
    bgMusic.play();
}

void Game::run() {
    while (window.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
    detective.handleInput();
}

void Game::update() {
    detective.update();
    scene.update();
}

void Game::render() {
    window.clear();
    scene.draw(window);
    detective.draw(window);
    window.display();
}
