//* * * * *
#include<stdio.h>
void Display(int iNo)
{
    int i=0;
    for(i=1;i<=iNo;i++)
    {
        printf("* ");
    }
}
int main()
{
    int iValue=0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}