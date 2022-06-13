#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);

    for (int i = 1; i <=x; i++)
    {
        printf("I ");
        if(i%2==1){
            printf("hate ");
        }
        else{
            printf("love ");
        }
        if(i==x){
            printf("it");
        }
        else{
            printf("that ");
        }
    }
    return 0;
}