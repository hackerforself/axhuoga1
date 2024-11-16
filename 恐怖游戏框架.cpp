#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Horror Game");
    window.setFramerateLimit(60);

    // 加载背景图片
    sf::Texture texture;
    if (!texture.loadFromFile("dark_room.png")) {
        std::cerr << "Failed to load background image\n";
        return -1;
    }
    sf::Sprite background(texture);

    // 加载背景音乐
    sf::Music bgMusic;
    if (!bgMusic.openFromFile("eerie_ambience.ogg")) {
        std::cerr << "Failed to load background music\n";
        return -1;
    }
    bgMusic.setLoop(true);
    bgMusic.setVolume(50);
    bgMusic.play();

    // 加载恐怖音效
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("scream.wav")) {
        std::cerr << "Failed to load sound effect\n";
        return -1;
    }
    sf::Sound scream(buffer);

    // 游戏主循环
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // 模拟玩家触发惊吓点
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
            scream.play();
        }

        window.clear();
        window.draw(background);
        window.display();
    }

    return 0;
}
