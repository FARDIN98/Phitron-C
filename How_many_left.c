#include<stdio.h>
int main(){
    int H,h,W,w;
    scanf("%d %d\n %d %d", &H, &h, &W, &w);
    int result = (H-h)*(W-w);
    printf("%d", result);
    return 0;
}