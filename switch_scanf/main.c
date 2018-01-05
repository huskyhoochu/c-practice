#include <stdio.h>

int main() {
    int num1;

    printf("값을 입력해주세요 : ");
    scanf("%d", &num1);

//    switch 문: if를 쓰지 않고 조건을 구현할 때
    switch (num1) {
        case 1:
            printf("1입니다.\n");
            break;
        case 2:
            printf("2입니다.\n");
            break;
        default:
            printf("디폴트\n");
            break;
    }

    return 0;
}