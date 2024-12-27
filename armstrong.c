// To check whether a number is armstrong or not
#include<stdio.h>
#include<math.h>

int main() {
    int s = 0, n, r, x;
    printf("Enter a number to check whether it is Armstrong or not:\n");
    scanf("%d", &n);
    x = n;

    while (n > 0) {
        r = n % 10;
        s = s + pow(r, 3);
        n = n / 10;
    }

    if (x == s) {
        printf("%d is an Armstrong number.\n", x);
    } else {
        printf("%d is not an Armstrong number.\n", x);
    }
    
    return 0;
}

