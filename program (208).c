/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    main                                        
//  Description :       Accept Filename from user and open that file in read mode.
//  Input :             string 
//  Output :            string
//  Author :            Aman Shaikh    
//  Date:               10/01/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Name[30];

    printf("Enter the Filename : \n");
    scanf("%[^'\n']s",&Name);

    fd = creat(Name,0777);

    fd = open(Name,O_RDONLY);

    if(fd == -1)
    {
        printf("File not opened!");
    }
    else
    {
        printf("File opened successfully!");

        close(fd);
    }

    return 0;
}