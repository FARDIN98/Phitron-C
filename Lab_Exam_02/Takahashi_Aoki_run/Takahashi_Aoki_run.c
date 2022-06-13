#include<stdio.h>
int main(){
    int a,b,c,d,e,f,x;
    scanf("%d%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f,&x);

    int block = a + c;

    int chunk = x/block;
    int rest =  x%block;
    if(rest >= a){
        rest = a;
    }
    int takahashi = chunk * a * b + rest *b;

    block = d + f;
    chunk = x/block;
    rest = x % block;
    if(rest >= d){
        rest = d;
    }

    int aoki = chunk*d*e + rest*e;

    if(aoki > takahashi){
        printf("Aoki");
    }
    else if (aoki < takahashi){
        printf("Takahashi");
    }
    else{
        printf("Draw");
    }
    return 0;
    
}