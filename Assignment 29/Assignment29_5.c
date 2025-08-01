#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

void DisplayN(char Fname[], int iNum)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, i = 0, Count = 0;
    int fd = 0;

    fd = open (Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Enable to open the file\n");
    }

    while((iRet = read(fd,Buffer,BUFFER_SIZE))!=0)
    {
        for(i = 0; i < iNum; i++)
        {
            printf("%c",Buffer[i]);
        }    
     }
     printf("\n");
    

    close(fd);
}
int main()
{
    char FileName[20] = {'\0'};
    int iValue = 0;;

    printf("Enter the filename:\n");
    scanf("%s",FileName);

    printf("Enter the character u want to count the frequency of :\n");
    scanf("%d",&iValue);

   DisplayN(FileName,iValue);

    return 0;

}
