/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    DisplayN                                      
//  Description :       Accept Filename and one count from the user and read that no. of character from starting position from that file.
//  Input :             string 
//  Output :            string
//  Author :            Aman Shaikh    
//  Date:               11/01/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h> 

void DisplayN(char FName[], int iNum)
{
    int fd = 0;
    char Arr[30] = {'\0'};

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file!\n");
        return;
    }
    else
    {
        read(fd,Arr,iNum);

        printf("%s\n",Arr);
        close(fd);
    }
}

int main()
{
    int iRet = 0;
    char Name[30];
    int iNo = 0;

    printf("Enter the Filename : \n");
    scanf("%s",Name);

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    DisplayN(Name,iNo);

    return 0;
}
