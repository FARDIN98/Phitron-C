#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    if(x==y){
        printf("1");
    }
    else if (x > y)
    {
        printf("0");
    }
    else{
        printf("%d", y-x+1);
    }
    return 0;
}