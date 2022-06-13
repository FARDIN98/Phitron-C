#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int newbie, pupil, specialist, expert ;
    if(newbie = x >= 0 && x<40){
        printf("%d", 40-x);
    } 
    else if(pupil = x>=40 && x<70){
        printf("%d", 70-x);
    }
    else if(specialist = x>=70 && x < 90){
        printf("%d", 90-x);
    }
    else{
        printf("expert");
    }
    return 0;
}