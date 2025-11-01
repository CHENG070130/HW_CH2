#include <stdio.h>

int main() {
    float principal, rate, interest;
    int days;

    printf("請輸入本金 (-1 結束): ");
    scanf_s("%f", &principal);

    while (principal != -1) {
        printf("請輸入年利率: ");
        scanf_s("%f", &rate);

        printf("請輸入貸款天數: ");
        scanf_s("%d", &days);

        // 計算單利
        interest = principal * rate * days / 365.0;

        printf("該筆貸款利息為: %.2f\n\n", interest);

        printf("請輸入本金 (-1 結束): ");
        scanf_s("%f", &principal);
    }

    printf("\n程式結束。\n");

    return 0;
}
