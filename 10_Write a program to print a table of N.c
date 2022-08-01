#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a number : ");
    scanf("%d",&a);

    for(i=1;i<=10;i++)
    {
        printf("%d\n",a*i);
    }

    return 0;
}