#include <stdio.h>

int main() {
    int num1;

    scanf("입력: %d", &num1);

    if (num1 == 10) {
        printf("10입니다\n");
    } else {
        printf("10이 아닙니다\n");
    }
    return 0;
}