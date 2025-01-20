/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountCapital                                      
//  Description :       Accept Filename from the user and return the count of Capital letters of that file.
//  Input :             string 
//  Output :            string
//  Author :            Aman Shaikh    
//  Date:               11/01/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h> 

int CountCapital(char FName[])
{
    int fd = 0, i = 0, iCnt = 0;
    char Arr[30] = {'\0'};

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file!");
        return -1;
    }
    else
    {
        read(fd,Arr,30);

        for(i = 0; i < strlen(Arr); i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                iCnt++;
            }
        }
        close(fd);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Name[30];

    printf("Enter the Filename : \n");
    scanf("%s", Name);

    iRet = CountCapital(Name);

    printf("Number of Capital letters are : %d\n",iRet);

    return 0;
}
