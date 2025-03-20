#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);  // 연도 입력

    // 윤년 판별 조건
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("1\n");  // 윤년이면 1 출력
    } else {
        printf("0\n");  // 윤년이 아니면 0 출력
    }

    return 0;
}