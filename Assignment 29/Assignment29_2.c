#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024
int CountSmall(char Fname[])
{
    int fd = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};
    int iRet = 0, i = 0 , SmCount = 0;
    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Enable to open the file\n");

    }
    while((iRet = read(fd,Buffer,BUFFER_SIZE))!=0)
    {
        for(i = 0; i < iRet; i++)
        {
            if((Buffer[i] >= 'a')&&(Buffer[i]<='z')) 
            SmCount ++;

        }
    }
    return SmCount;
    close(fd);

}
int main()
{ 
    char FileName[20] = {'\0'};
    int iRet = 0;

    printf("Enter the file name :\n");
    scanf("%s",FileName);
    
    iRet = CountSmall(FileName);
    printf("Number of Small character in the given file are: %d\n",iRet);

    return 0;
}