#include<stdio.h>
int main(){
    int num[2],total;
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &num[i]);
    }
    total = num[0] + num[1];
    if (total >= 10)
    {
        printf("error\n");
    }
    else{
        printf("%d\n",total);
    } 
}