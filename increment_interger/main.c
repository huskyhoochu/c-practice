#include <stdio.h>

int main() {
// 정수에 증감 연산자 사용
    int num1 = 1;

    num1++;

    printf("%d\n", num1);

// 문자에 증감 연산자 사용
    char c1 = 'b';
    char c2 = 'c';

    c1++;
    c2--;

    printf("%c %c\n", c1, c2);


//  변수에 증감 연산자 사용
//  후위(postfix) 연산자: 증감 연산자를 변수 뒤에 사용한 것
    int num2 = 2;
    int num3 = 2;
    int num4;
    int num5;

    num4 = num2++;
    num5 = num3++;

//  할당이 먼저 이루어지고 나중에 값이 증가하므로 출력된 값은 처음 할당된 값과 같다
    printf("%d %d\n", num4, num5);

//  전위(prefix) 연산자: 증감 연산자를 변수 앞에 사용한 것
    int num6 = 2;
    int num7 = 2;
    int num8;
    int num9;

    num8 = ++num6;
    num9 = ++num7;

//  값이 증가한 뒤에 할당되므로 1씩 증가한 값이 출력된다
    printf("%d %d\n", num8, num9);
    return 0;
}