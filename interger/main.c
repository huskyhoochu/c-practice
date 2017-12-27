#include <stdio.h>

int main() {


    char num1 = -30;
    short num2 = 30000;
    int num3 = -1234567890;
    long num4 = 1234567890;
    long long num5 = -1234567890987654321;

    int size1, size2, size3, size4, size5;

    size1 = sizeof(num1);
    size2 = sizeof(num2);
    size3 = sizeof(num3);
    size4 = sizeof(num4);
    size5 = sizeof(num5);

    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

    printf("%d %d %d %d %d\n", size1, size2, size3, size4, size5);

    return 0;
}