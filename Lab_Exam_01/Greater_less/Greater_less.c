#include<stdio.h>
int main(){
    int num[3], a = 0, b = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    if (num[0] <= num[2] && num[2] <= num[1])
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;   
}