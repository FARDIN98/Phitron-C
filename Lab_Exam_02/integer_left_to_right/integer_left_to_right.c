#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int num = x;
    x += (num/100) + (num%100)*10;
    x += (num%10)*100 + (num/10);
    printf("%d", x);
    return 0;

}