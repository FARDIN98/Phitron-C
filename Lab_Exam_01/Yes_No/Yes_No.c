#include<stdio.h>
int main(){
    int num[3], a = 0, b = 0;
    for (int i = 0; i < 3; i++)
    {
        // Taking input
        scanf("%d",&num[i]);

        if (num[i]==5)
        {
            a++;
        }
        if (num[i] == 7)
        {
            b++;
        }    
    }
    if (a==2 && b == 1)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}