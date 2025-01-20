/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    CountChar                                      
//  Description :       Accept Filename and one character from the user and return the count of that character from that file.
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

int CountChar(char FName[], char ab)
{
    int fd = 0, i = 0, iCnt = 0;
    char Arr[30] = {'\0'};

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file!\n");
        return -1;
    }
    else
    {
        read(fd,Arr,30);

        for(i = 0; i < strlen(Arr); i++)
        {
            if(Arr[i] == ab) 
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
    char ch = {'\0'};

    printf("Enter the Filename : \n");
    scanf("%s",Name);

    printf("Enter the Character : \n");
    scanf(" %c",&ch);

    iRet = CountChar(Name,ch);

    printf("Number of occurences are : %d\n",iRet);

    return 0;
}
