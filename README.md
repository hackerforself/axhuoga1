#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // 设置随机数种子
    std::srand(static_cast<unsigned int>(std::time(0)));
    int numberToGuess = std::rand() % 100 + 1; // 随机生成1到100之间的数字
    int playerGuess = 0;                       // 玩家猜测的数字
    int attempts = 0;                           // 玩家尝试次数

    std::cout << "欢迎来到猜数字游戏！我想好了一个1到100之间的数字。\n";
    std::cout << "你能猜出来吗？请输入你的猜测：";

    while (true) {
        std::cin >> playerGuess; // 玩家输入数字
        attempts++;

        if (playerGuess < numberToGuess) {
            std::cout << "太小了，请再试一次：";
        } else if (playerGuess > numberToGuess) {
            std::cout << "太大了，请再试一次：";
        } else {
            std::cout << "恭喜你，猜对了！这个数字是 " << numberToGuess << "。\n";
            std::cout << "你总共猜了 " << attempts << " 次。\n";
            break; // 猜对了，游戏结束
        }
    }

    return 0
