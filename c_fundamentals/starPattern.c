#include<stdio.h>

int main()
{
    int i,j;
    int n;

    printf("\nEnter the number of lines :");
    scanf("%d",&n);
    
    // n = 5;

    for(i=1;i<=n;i++)
    {
        printf("\n");

        for(j=1;j<=(n-i);j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    }
}