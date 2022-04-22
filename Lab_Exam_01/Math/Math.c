#include<stdio.h>
int main(){
    int num;
    float x,y,z=0;
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        scanf("%f %f",&x,&y);

        z+=x*y;
    }
    printf("%.3f\n",z);
    return 0;  
}