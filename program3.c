//4
//4 3 2 1
#include<stdio.h>
void Display(int iNo)
{
    int i=0;
    for(i=iNo;i>=1;i--)
    {
        printf("%d ",i);
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