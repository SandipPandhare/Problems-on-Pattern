//5
//a b c d e
#include<stdio.h>
void display(int iNo)
{
    char ch='a';       //97
    for(int i=1;i<=iNo;i++)
    {
        printf("%c ",ch);
        ch++;
    }
}
int main()
{
    int iValue=0;
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}