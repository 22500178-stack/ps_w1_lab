#include <stdio.h>

int main() {
    int size;
    int stars, blank1, blank2;
    int i, j;

    // 1. 크기 입력
    scanf("%d", &size);

    // 2. 상단 V자 부분
    for (i = 0; i < size; i++) {
        blank1 = i;
        blank2 = (size - 1 - i) * 2;
        
        for (j = 0; j < blank1; j++) printf(" ");
        printf("*");
        for (j = 0; j < blank2; j++) printf(" ");
        printf("*\n");
    }

    // 3. 중단 직사각형 부분 (size + 1 줄)
    for (i = 0; i < size + 1; i++) {
        for (j = 0; j < size * 2; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 4. 중단 역삼각형 부분 (size - 1 줄)
    for (i = 1; i < size; i++) {
        blank1 = i;
        stars = (size - i) * 2;
        
        for (j = 0; j < blank1; j++) printf(" ");
        for (j = 0; j < stars; j++) printf("*");
        printf("\n");
    }

    // 5. 하단 받침대 부분
    for (i = 0; i < size * 2; i++) {
        printf("*");
    }
    printf("\n");

    return 0;


}