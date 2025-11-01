#include <stdio.h>

int main() {
    int length, breadth;

    printf("請輸入長度: ");
    scanf_s("%d", &length);
    printf("請輸入寬度: ");
    scanf_s("%d", &breadth);

    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= breadth; j++) {
            // 判斷是否為邊框
            if (i == 1 || i == length || j == 1 || j == breadth)
                printf("+");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
