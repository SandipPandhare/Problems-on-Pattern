//5
//a b c d e
#include<stdio.h>
void display(int iNo)
{
    char ch='\0';       
    for(int iCnt=1,ch='a';iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c ",ch);
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