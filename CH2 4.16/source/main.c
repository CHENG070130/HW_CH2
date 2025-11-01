#include <stdio.h>

int main() {
    int n = 10; // 三角形高度

    for (int i = 1; i <= n; i++) {
        // Pattern 1: 左上直角三角形
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = i + 1; j <= n; j++)
            printf(" "); // 填充空格對齊

        printf("  "); 

        // Pattern 2: 左下直角三角形
        for (int j = n; j >= i; j--)
            printf("*");
        for (int j = 1; j < i; j++)
            printf(" ");

        printf("  "); 

        // Pattern 3: 右下直角三角形
        for (int j = 1; j < i; j++)
            printf(" ");
        for (int j = n; j >= i; j--)
            printf("*");

        printf("  "); 

        // Pattern 4: 右上直角三角形
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
