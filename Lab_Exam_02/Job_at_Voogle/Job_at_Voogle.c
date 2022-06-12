#include<stdio.h>
#include<stdbool.h>
int main(){
    int a,b;
    float z;
    scanf("%d %d %f", &a, &b, &z);
    z +=.5;
    bool work;
    if (b < a)
    {
        work = z >= a && z <=24;
        work = work || (z >=0 && z <= b);
    }
    else{
        work = z>=a && z<=b;
    }
    if (work)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
    
}