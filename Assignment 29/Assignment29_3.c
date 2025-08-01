#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024
int CountSpace(char Fname[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, i = 0, SpCount = 0;
    int fd = 0;

    fd = open (Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Enable to open the file\n");
    }
   while((iRet = read(fd,Buffer,BUFFER_SIZE))!=0)
    {
        for(i = 0; i < iRet; i++)
        {
            if((Buffer[i] == ' ')) 
            SpCount ++;
        }
    }

    return SpCount;
    close(fd);
}
int main()
{
    char FileName[20] = {'\0'};
    int iRet = 0;

    printf("Enter the filename:\n");
    scanf("%s",FileName);

    iRet = CountSpace(FileName);
    printf("Number of white Spaces in the given file are :%d",iRet);
    return 0;

}
