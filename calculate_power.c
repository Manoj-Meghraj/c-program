// C program to calculate X^N (X to the power of N) using pow function
#include<stdio.h>
#include<math.h>
int main(){
    int x,n;
    float ans;
    printf("Enter the value of x and n");
    scanf("%d %d", &x, &n);
    ans=pow(x,n);
    printf("the value of %d to the power of %d is: %f\n", x, n, ans);
    return 0;

}
