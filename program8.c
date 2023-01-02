#include<stdio.h>
void display()
{
    int iRow=3;
    int iCol=4;

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
    display();
    return 0;
}