#include <stdio.h>

int main() {
    float grossSales, earnings;
    const float BASE_PAY = 200.0;   // 每週固定薪水
    const float COMMISSION_RATE = 0.09; // 9% 佣金

    printf("請輸入業務員本週銷售總額 (-1 結束): ");
    scanf_s("%f", &grossSales);

    while (grossSales != -1) {
        // 計算收入
        earnings = BASE_PAY + COMMISSION_RATE * grossSales;

        // 顯示收入
        printf("該業務員本週收入為: $%.2f\n\n", earnings);

        // 讀取下一位業務員的銷售額
        printf("請輸入業務員本週銷售總額 (-1 結束): ");
        scanf_s("%f", &grossSales);
    }

    printf("\n程式結束。\n");

    return 0;
}
