#include<stdio.h>
int main(){
    int n; 
    int Anton = 0;
    int Danik = 0;
    scanf("%d", &n);
    getchar();

    char a[n + 1];     // a = [6 + 1] = 7

    // we use n loop for taking input in an array.
    for (int j = 0; j < n; j++)
    {
        scanf("%c", &a[j]); //a[j] takes input of every character [ADAAAA]
    }
    
    //we use n loop to read the expected character
    for (int j = 0; j < n; j++){
        if (a[j]=='A')
        {
            //if 'n' character found in input then Anton value will be increased by 1
            Anton++;
        }
        else{
            //otherwise Danik value will be increased by 1
            Danik++;
        }        
    }
    if (Anton > Danik){
        //if Anton value is greater than Danik value then Anton value will be printed
        printf("Anton");
    }
    else if(Danik > Anton){
        //if Danik value is greater than Anton value then Danik will be printed
        printf("Danik");
    }
    else{
        //if any of above condition didn't match then Friendship will be printed
        printf("Friendship");
    }
    return 0;
    
}