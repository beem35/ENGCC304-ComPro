#include <stdio.h>

int main() {
    printf("You hold a stock, and you want to know if its price is positive or negative. \n");
    printf("Enter the stock price: ");
    double stockPrice;
    scanf("%lf", &stockPrice);
    if (stockPrice < 0) {
        printf("The stock price is negative: %.2lf\n", stockPrice);
    } else if (stockPrice > 0) {
        printf("The stock price is positive: %.2lf\n", stockPrice);
    } else {
        printf("The stock price is zero.\n");
    }
    return 0;
}