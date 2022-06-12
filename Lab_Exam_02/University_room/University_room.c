#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int p;
    int q;

    int room=0;

    for(int i=0;i<n;i++)
    {
       scanf("%d%d",&p,&q);
       q-=p;
       if(q>=2)
        room++;
    }

    printf("%d",room);

    return 0;
}