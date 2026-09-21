#include <stdio.h>

int main() {
    char name[50];
    printf("Hello, CSIE!\n");
    printf("請輸入你的名字: ");
    if (scanf("%s", name) == 1) {
        printf("歡迎, %s!\n", name);
    }
    return 0;
}
