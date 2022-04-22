#include<stdio.h>
int main(){
    int num,temp,cel=0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &temp);
        if (temp < 0){
            cel++;
        }
    }
    printf("%d\n", cel);
    return 0;   
}