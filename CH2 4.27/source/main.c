#include <stdio.h>

int main() {
    int side1, side2, hypotenuse;

    printf("所有邊長不大於500的畢氏三元組:\n");

    // 從1開始，避免0長度
    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = side1; side2 <= 500; side2++) { // side2 >= side1 避免重複組合
            for (hypotenuse = side2; hypotenuse <= 500; hypotenuse++) {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    printf("%d\t%d\t%d\n", side1, side2, hypotenuse);
                }
            }
        }
    }

    return 0;
}
