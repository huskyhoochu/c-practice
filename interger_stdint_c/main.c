#include <stdio.h>
#include <stdint.h>
int main() {
    int8_t num1 = INT8_MAX;
    int8_t num2 = INT8_MIN;

    printf("8비트 정수 최대값: %d\n8비트 정수 최소값: %d\n", num1, num2);

    int16_t num3 = INT16_MAX;
    int16_t num4 = INT16_MIN;

    printf("16비트 정수 최대값: %d\n16비트 정수 최소값: %d\n", num3, num4);

    int32_t num5 = INT32_MAX;
    int32_t num6 = INT32_MIN;

    printf("32비트 정수 최대값: %d\n32비트 정수 최소값: %d\n", num5, num6);

    int64_t num7 = INT64_MAX;
    int64_t num8 = INT64_MIN;

    printf("64비트 정수 최대값: %lld\n64비트 정수 최소값: %lld\n", num7, num8);

    return 0;
}