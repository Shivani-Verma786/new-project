#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number = ");
    scanf("%d",&n);
    printf("\n\n");
    /*for(i=n/2 ; i<=n ; i+=2)
    {
        for(j=1 ; j<=n-i ; j+=2)
        { printf(" "); }
        for(j=1 ; j<=i ; j++)
        { printf("*"); }
        for(j=1 ; j<=n-i ; j+=2)
        { printf("  "); }
        for(j=1 ; j<=i ; j++)
        { printf("*"); }
        for(j=1 ; j<=n-i ; j+=2)
        { printf("  "); }
        for(j=1 ; j<=i ; j++)
        { printf("*"); }
        for(j=1 ; j<=n-i ; j+=2)
        { printf("  "); }
        for(j=1 ; j<=i ; j++)
        { printf("*"); }
        printf("\n");
    }*/

    for(i=1 ; i<=n ; i++)
    {
        printf("                              ");
        for(j=1 ; j<=n-i ; j++)
        { printf(" "); }
        for(j=1 ; j<=(i*2)-1 ; j++)
        { printf("*"); }
        printf("\n");
    }

for(i=4 ; i<=n ; i++)
    {
        printf("                              ");
        for(j=1 ; j<=n-i ; j++)
        { printf(" "); }
        for(j=1 ; j<=(i*2)-1 ; j++)
        { printf("*"); }
        printf("\n");
    }

    for(i=4 ; i<=n ; i++)
    {
        printf("                              ");
        for(j=1 ; j<=n-i ; j++)
        { printf(" "); }
        for(j=1 ; j<=(i*2)-1 ; j++)
        { printf("*"); }
        printf("\n");
    }
    for(i=1 ; i<=n ; i++)
    {
        printf("                                       ");
        for(j=6 ;j<=n-3; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    printf("\n\n\n\n\n               ------------ S A N D S H I  V E R M A ------------");
    printf("\n\n\n\n\n\n\n\n\n");
    return 0;
}
