#include <stdio.h>

int main() {

    int num1 = 5;
    int num2;

//  삼항 연산자
//  num1이 참이면 num2에 100을 할당, 거짓이면 200을 할당
    num2 = num1 == 5 ? 100 : 200;


    printf("%d\n", num2);

//  함수 안에서 삼항 연산자 사용하기
    int num3 = 5;
    printf("%s\n", num3==10?"10입니다":"10이 아닙니다");

    return 0;
}