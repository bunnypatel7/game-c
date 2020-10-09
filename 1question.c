#include<stdio.h>

main(){
    int n, i;
    printf("enter the integer: ");
    scanf("%d",&n);
    for ( i = 10; i; i--)
    {
        printf("%d * %d = %d \n", n, i , n*i);
    }
    

    return 0;
}