////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    RectArea
//  Description :       Accept height and width from user and 
//                      Calculate the area of the Rectangle. 
//  Input :             float
//  Output :            double
//  Author :            Aman Shaikh    
//  Date:               28/10/2024
// 
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fHeight, float fWidth)
{
    double dArea = 0.0; 

    dArea = fHeight * fWidth;

    return dArea;
}


int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0f;

    printf("Enter height : ");
    scanf("%f",&fValue1); 

    printf("Enter width : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of the Rectangle is : %lf",dRet);

    return 0;
}