#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a number : ");
    scanf("%d",&a);

    for(i=10;i>=a;i--)
    {
        printf("%d\n",i*2-1);
    }

    return 0;
}