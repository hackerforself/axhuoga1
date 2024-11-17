#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    do {
        printf("请输入密码：");
        scanf("%s", password);
    } while (strcmp(password, "12345") != 0);

    printf("密码正确，欢迎进入系统！\n");
    return 0;
}
