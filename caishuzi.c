#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 0;

    // 初始化随机数种子
    srand(time(0));
    target = rand() % 100 + 1; // 生成 1 到 100 之间的随机数

    printf("欢迎来到猜数字游戏！\n");
    printf("我已经想好了一个 1 到 100 之间的数字。\n");

    // 游戏循环
    do {
        printf("请输入你的猜测: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > target) {
            printf("太高了！再试一次。\n");
        } else if (guess < target) {
            printf("太低了！再试一次。\n");
        } else {
            printf("恭喜你！猜对了！\n");
            printf("你总共猜了 %d 次。\n", attempts);
        }
    } while (guess != target);

    return 0;
}
