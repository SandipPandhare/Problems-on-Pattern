//5
//2 4 6 8 10
#include<stdio.h>
void Display(int iNo)
{
    // int i=0;
    // for(i=1;i<=iNo;i++)
    // {
    //     printf("%d ",i*2);
    // }
     int i=0;
    for(i=2;i<=2*iNo;i=i+2)
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