/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    main                                        
//  Description :       Accept Filename from user and read all the data from that file and display all its contents.
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
    char Arr[30] = {'\0'};

    printf("Enter the Filename : \n");
    scanf("%[^'\n']s",&Name);

    fd = open(Name,O_RDWR);

    write(fd,"Display All Data of file.",25);

    fd = open(Name,O_RDONLY);

    read(fd,Arr,25);

    printf("%s\n",Arr);

    return 0;
}