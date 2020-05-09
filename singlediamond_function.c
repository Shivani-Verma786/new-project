#include<stdio.h>
void top(int);
void bottom(int);
int main()
{
    int num;
    printf("num= ");
    scanf("%d",&num);
    top(num);
    bottom(num);
    return 0;
}
void top(int num)
{
    for(int i=1;i<=num;i++)
    {   printf("               ");
        for(int s=1;s<=num-i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ",i);
        }
        printf("\n");
    }
}
void bottom(int num)
{
    for(int i=num-1;i>=1;i--)
    {  printf("               ");
        for(int s=1;s<=num-i;s++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("* ",i);
        }
        printf("\n");
    }
}
