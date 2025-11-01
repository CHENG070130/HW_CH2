#include <stdio.h>
#include <string.h>

int main() {
    int num_employees;
    printf("請輸入員工數量: ");
    scanf_s("%d", &num_employees);
    getchar(); // 清掉換行符

    for (int i = 0; i < num_employees; i++) {
        char name[50];
        float hours_worked, hourly_rate, gross_pay;

        printf("\n員工 %d:\n", i + 1);
        printf("請輸入員工姓名: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0; // 去掉換行符

        printf("請輸入本週工作時數: ");
        scanf_s("%f", &hours_worked);
        printf("請輸入時薪: ");
        scanf_s("%f", &hourly_rate);
        getchar(); // 清掉換行符，避免下一輪 fgets 出錯

        if (hours_worked <= 40)
            gross_pay = hours_worked * hourly_rate;
        else
            gross_pay = 40 * hourly_rate + (hours_worked - 40) * hourly_rate * 1.5;

        printf("%s 的總薪資為: %.2f\n", name, gross_pay);
    }

    return 0;
}
