#include <stdio.h>

int main() {
    double principal = 5000.0;
    int years = 15;

    printf("本金: $%.2f, 年數: %d\n\n", principal, years);

    // 利率從 10.0% 到 12.0%，每次增加 0.5%
    for (double rate = 10.0; rate <= 12.0; rate += 0.5) {
        double amount = principal;
        printf("利率: %.1f%%\n", rate);
        printf("年份\t金額\n");

        for (int year = 1; year <= years; year++) {
            amount = amount * (1 + rate / 100); // 複利計算
            printf("%d\t$%.2f\n", year, amount);
        }

        printf("\n");
    }

    return 0;
}
