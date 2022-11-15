#include <stdio.h>
int main() {
    double number, sum = 0;
    int i = 1;
    do {
        printf("Enter a number %d :" ,i );++i;
        scanf("%lf", &number);
        sum += number;
    }
    while(i <= 5);
    printf("Sum = %.2lf",sum);
    return 0;
}