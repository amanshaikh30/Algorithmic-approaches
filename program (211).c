/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    main                                        
//  Description :       Accept Filename from user and display the size of that file.
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

    fd = open(Name,O_RDWR);

    write(fd,"Display All Data of file.",25);

    printf("File size is %d\n",sizeof(Name));

    return 0;
}