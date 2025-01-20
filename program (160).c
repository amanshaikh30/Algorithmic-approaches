////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    ToggleBitRange
//  Description :       Accept one Integer and two positions from users and Toggles bits in that range of positions. 
//  Input :             int 
//  Output :            int
//  Author :            Aman Shaikh    
//  Date:               06/12/2024
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int ToggleBitRange(int iNo, int iPos1, int iPos2) 
{
    int iMask = 0, iResult = 0;
    
    for (int i = iPos1; i <= iPos2; i++) 
    {
        iMask |= (1 << (i - 1));
    }

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    int iValue = 0, iLoc1 = 0, iLoc2 = 0;
    int iRet = 0;

    printf("Enter the Value : ");
    scanf("%d", &iValue);

    printf("Enter the range of positions : ");
    scanf("%d%d", &iLoc1, &iLoc2);

    iRet = ToggleBitRange(iValue, iLoc1, iLoc2);

    printf("Output : %d\n", iRet);

    return 0;
}
