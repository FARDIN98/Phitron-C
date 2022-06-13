#include<stdio.h>
int main(){
    int n,m;
    int count = 0;
    scanf("%d %d", &n,&m);
    for (int i = 1; i <=n; i++){
        if (i%2==1){
            for (int j = 1; j <=m; j++){
                printf("#");
            }    
        }
        else{
            if (count%2==0){
                for (int j = 1; j<=m-1; j++){
                    printf(".");
                }
                printf("#");
            }

            else{
                printf("#");
                for (int j = 1; j <= m-1; j++){
                    printf(".");
                }    
            }
            count++;
        }
        printf("\n");
    }
    return 0;
}