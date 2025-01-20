/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountSmall                                      
//  Description :       Accept Filename from the user and return the count of Small letters of that file.
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

int CountSmall(char FName[])
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
            if(Arr[i] >= 'a' && Arr[i] <= 'z') 
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

    iRet = CountSmall(Name);

    printf("Number of Small letters are : %d\n",iRet);

    return 0;
}
