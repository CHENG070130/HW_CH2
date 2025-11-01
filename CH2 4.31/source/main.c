#include <stdio.h>

int main() {
    int n = 5; // 苝ホいみ郴场︽计

    // 场
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");  // 
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");  // 琍腹
        printf("\n");
    }

    // 场
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");  // 
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");  // 琍腹
        printf("\n");
    }

    return 0;
}
