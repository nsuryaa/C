#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5)
        //break; //1 2 3 4 
        //continue;//1 2 3 4 6 7 8 9 10
        printf("%d ",i);
    }
    printf("\nEnded");
}