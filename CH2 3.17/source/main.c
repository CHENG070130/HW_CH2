#include <stdio.h>

int main() {
    int accountNumber;
    float beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;
    printf("輸入帳號號碼(-1 to end): ");
    scanf_s("%d", &accountNumber);

    while (accountNumber != -1) {
        // Input the remaining data for this customer
        printf("輸入本月初的欠款金額: ");
        scanf_s("%f", &beginningBalance);

        printf("輸入本月消費總額: ");
        scanf_s("%f", &totalCharges);

        printf("輸入本月還款總額: ");
        scanf_s("%f", &totalCredits);

        printf("輸入信用額度: ");
        scanf_s("%f", &creditLimit);

        // Calculate new balance
        newBalance = beginningBalance + totalCharges - totalCredits;

        // Display the results
        printf("\n帳號:\t%d\n", accountNumber);
        printf("信用額度:\t%.2f\n", creditLimit);
        printf("新結餘:\t%.2f\n", newBalance);

        // Check if credit limit exceeded
        if (newBalance > creditLimit) {
            printf("*** 已超過信用額度. ***\n");
        }

        printf("\n輸入帳號號碼 (-1 to end): ");
        scanf_s("%d", &accountNumber);
    }

    printf("\n程式結束.\n");

    return 0;
}
