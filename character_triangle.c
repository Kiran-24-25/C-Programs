#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=65;i<n;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}


