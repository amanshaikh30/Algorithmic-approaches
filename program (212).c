/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :    main                                      
//  Description :       Accept Filename and a string from the user and write that string at the end of the file.
//  Input :             string 
//  Output :            string
//  Author :            Aman Shaikh    
//  Date:               10/01/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h> 

int main()
{
    int fd = 0;
    char Name[30];
    char Arr[100]; 

    printf("Enter the Filename : \n");
    scanf("%s", Name);

    printf("Enter the String to append: \n");
    scanf(" %[^\n]s", Arr);

    fd = open(Name, O_RDWR);
    if (fd == -1) {
        perror("Error opening file");
        return -1;
    }

    lseek(fd, 0, SEEK_END);

    write(fd, Arr, strlen(Arr));

    printf("String appended successfully.\n");

    close(fd);

    return 0;
}
