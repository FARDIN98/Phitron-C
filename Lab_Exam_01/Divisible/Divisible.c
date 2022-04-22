#include<stdio.h>
int main(){
    int num,a,b;
    scanf("%d %d %d", &a, &b, &num);
    for (int i = 1; i <= num; i++)
    {
        if (i%a == 0)
        {
            printf("Fizz");
        }
        if (i % b == 0)
        {
            printf("Buzz");
        }
        if (i % a!=0 && i % b !=0)
        {
            printf("%d", i);
        }      
        printf("\n");   
    }
    return 0;
}