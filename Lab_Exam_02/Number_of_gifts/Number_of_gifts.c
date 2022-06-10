#include<stdio.h>
int main(){
    int a,b,c;
    // taking input
    scanf("%d %d %d", &a, &b, &c);
    // decreasing the value of b by 1
    b--;
    // Storing the value of b in c. Also adding with c + b
    // c = c + b;
    c+=b;
    // initialize an integer named gift that stores c mod a;
    int gift = c%a;
    // If the value of gift is 0 then it goes inside the condition
    if(gift==0){
        // value of a stores in gift
        gift = a;
    }
    // printing the value of gift
    printf("%d", gift);
    return 0;
}