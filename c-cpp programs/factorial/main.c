#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, fact;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1,fact=1;i<=n;i++){
        fact = fact * i;
    }
    printf("Factorial of this number is %d\n", fact);
    getchar();
}
