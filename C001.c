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


}