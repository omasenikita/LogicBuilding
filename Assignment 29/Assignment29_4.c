#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024
int CountSpace(char Fname[], char ch)
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
        for(i = 0; i < iRet; i++)
        {
            if((Buffer[i] == ch)) 
            Count ++;
        }
    }

    return Count;
    close(fd);
}
int main()
{
    char FileName[20] = {'\0'};
    int iRet = 0;
    char cValue = '\0';

    printf("Enter the filename:\n");
    scanf("%s",FileName);

    printf("Enter the character u want to count the frequency of :\n");
    scanf(" %c",&cValue);

    iRet = CountSpace(FileName,cValue);

    printf("Number of times the %c  occures is :%d\n",cValue,iRet);
    return 0;

}
