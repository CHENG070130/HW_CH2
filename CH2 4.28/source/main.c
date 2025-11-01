#include <stdio.h>

int main() {
    int paycode;
    double weeklyPay;

    while (1) {
        printf("\n請輸入員工的 paycode (1=經理, 2=時薪員工, 3=佣金員工, 4=計件員工, 0=結束): ");
        scanf_s("%d", &paycode);

        if (paycode == 0) {
            printf("程式結束。\n");
            break;
        }

        switch (paycode) {
        case 1: { // 經理
            double salary;
            printf("請輸入經理每週固定薪資: ");
            scanf_s("%lf", &salary);
            weeklyPay = salary;
            printf("經理每週薪資為: $%.2f\n", weeklyPay);
            break;
        }
        case 2: { // 時薪員工
            double hours, hourlyRate;
            printf("請輸入本週工作小時數: ");
            scanf_s("%lf", &hours);
            printf("請輸入時薪: $");
            scanf_s("%lf", &hourlyRate);

            if (hours <= 40)
                weeklyPay = hours * hourlyRate;
            else
                weeklyPay = 40 * hourlyRate + (hours - 40) * hourlyRate * 1.5;

            printf("時薪員工每週薪資為: $%.2f\n", weeklyPay);
            break;
        }
        case 3: { // 佣金員工
            double sales;
            printf("請輸入本週銷售總額: $");
            scanf_s("%lf", &sales);
            weeklyPay = 250 + sales * 0.057; // 5.7%
            printf("佣金員工每週薪資為: $%.2f\n", weeklyPay);
            break;
        }
        case 4: { // 計件員工
            int pieces;
            double payPerPiece;
            printf("請輸入本週生產件數: ");
            scanf_s("%d", &pieces);
            printf("請輸入每件金額: $");
            scanf_s("%lf", &payPerPiece);
            weeklyPay = pieces * payPerPiece;
            printf("計件員工每週薪資為: $%.2f\n", weeklyPay);
            break;
        }
        default:
            printf("無效的 paycode，請重新輸入。\n");
        }
    }

    return 0;
}
