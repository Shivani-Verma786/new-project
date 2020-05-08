#include<stdio.h>
int main()
{
    int i,j,n;
    printf("\nEnter number = ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++)
    {   printf("                 ");
        for(j=1;j<=n;j++)
        {
            if((i==1 || i==n || j==1 || j==n || i==2 || i==n-1 || j==2 || j==n-1 ) || (i>=8 && i<=n-7) && (j>=8 && j<=n-7))
            {
                printf("*");
            }
             else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n\n........................ S A N D S H I  V E R M A ..............................\n\n\n\n");
    return 0;
}
