#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 函数声明
char getPlayerChoice();
char getGoalkeeperChoice();
void checkResult(char player, char goalkeeper);

int main() {
    printf("=== 欢迎来到踢足球小游戏 ===\n");
    printf("选择射门方向: 左 (L), 中 (C), 右 (R)\n");

    // 获取玩家的射门选择
    char playerChoice = getPlayerChoice();

    // 获取守门员的扑救选择
    char goalkeeperChoice = getGoalkeeperChoice();

    // 显示玩家和守门员的选择
    printf("你选择了射门方向: %c\n", playerChoice);
    printf("守门员选择了扑救方向: %c\n", goalkeeperChoice);

    // 检查射门结果
    checkResult(playerChoice, goalkeeperChoice);

    return 0;
}

// 获取玩家的射门方向
char getPlayerChoice() {
    char choice;
    while (1) {
        printf("请输入你的射门方向 (L, C, R): ");
        scanf(" %c", &choice);
        // 转换为大写字符
        choice = toupper(choice);
        if (choice == 'L' || choice == 'C' || choice == 'R') {
            return choice;
        } else {
            printf("无效输入，请重新输入。\n");
        }
    }
}

// 随机生成守门员的扑救方向
char getGoalkeeperChoice() {
    srand(time(0)); // 设置随机数种子
    int randChoice = rand() % 3; // 生成 0, 1, 2 之一的随机数
    switch (randChoice) {
        case 0: return 'L';
        case 1: return 'C';
        case 2: return 'R';
    }
    return 'C'; // 默认返回中间方向
}

// 检查射门是否得分
void checkResult(char player, char goalkeeper) {
    if (player == goalkeeper) {
        printf("很遗憾，守门员扑救成功！\n");
    } else {
        printf("进球了！你得分了！\n");
    }
}
