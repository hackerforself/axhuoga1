#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define GOAL_WIDTH 10 // 球门的宽度
#define FIELD_WIDTH 50 // 场地的宽度

// 显示球场和球门
void displayField(int ballPosition) {
    for (int i = 0; i < FIELD_WIDTH; i++) {
        if (i == (FIELD_WIDTH - GOAL_WIDTH) / 2) {
            printf("|");
        } else if (i == (FIELD_WIDTH + GOAL_WIDTH) / 2) {
            printf("|");
        } else if (i == ballPosition) {
            printf("O");
        } else {
            printf("-");
        }
    }
    printf("\n");
}

int main() {
    int angle, power;
    int ballPosition;
    srand(time(NULL));

    printf("欢迎来到踢足球游戏！\n");
    printf("球门在屏幕中央，你需要调整角度和力量来射门。\n");

    while (1) {
        // 显示初始球场
        ballPosition = 0;
        displayField(ballPosition);

        // 玩家输入角度和力量
        printf("请输入射门角度（-45 到 45 度）：");
        scanf("%d", &angle);
        if (angle < -45 || angle > 45) {
            printf("无效的角度，请输入有效范围内的角度。\n");
            continue;
        }

        printf("请输入射门力量（1 到 100）：");
        scanf("%d", &power);
        if (power < 1 || power > 100) {
            printf("无效的力量，请输入有效范围内的力量。\n");
            continue;
        }

        // 计算球的最终位置
        ballPosition = (int)(FIELD_WIDTH / 2.0 + tan(angle * M_PI / 180.0) * power / 10.0);
        
        // 显示球的运动结果
        displayField(ballPosition);

        // 判断是否进球
        if (ballPosition >= (FIELD_WIDTH - GOAL_WIDTH) / 2 && ballPosition <= (FIELD_WIDTH + GOAL_WIDTH) / 2) {
            printf("射门得分！球进啦！\n");
        } else {
            printf("射门未中！再试一次。\n");
        }

        // 询问是否再玩一次
        char playAgain;
        printf("是否继续游戏？(y/n): ");
        scanf(" %c", &playAgain);
        if (playAgain != 'y' && playAgain != 'Y') {
            break;
        }
    }

    printf("感谢你参与踢足球游戏！再见！\n");
    return 0;
}
