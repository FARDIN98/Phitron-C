#include<stdio.h>
int main(){
    int num[3],a,total;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
        if(i == 0 || num[i] > a){
            a = num[i];
        }
    }
    total = num[0] + num[1] + num[2] - a;
    printf("%d\n", total);
    return 0;
}