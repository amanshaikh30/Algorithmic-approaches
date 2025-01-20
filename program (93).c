////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    Pattern
//  Description :       Accept 'N' number of rows and column from user and display the below pattern. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               17/11/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'a';

    for(i = 1; i <= iRow; i++) 
    {
        ch = 'a';       
        for(j = 1; j <= iCol;j++)
        {
            if((i % 2) != 0 ) 
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",j); 
            }
        }   
        
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter the number of Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}