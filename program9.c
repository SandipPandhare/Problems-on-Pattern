#include<stdio.h>
void display(int iRow,int iCol)
{
    for(int i=1;i<=iRow;i++)
    {
        for(int j=1;j<=iCol;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
int main()
{
    int iValue1=0,iValue2=0;
    printf("Enter no of rows : ");
    scanf("%d",&iValue1);
    printf("Enter no of column : ");
    scanf("%d",&iValue2);

    display(iValue1,iValue2);

    return 0;
}