#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFFER_SIZE 1024          //Buffer size equal to the size of file given to the perticular file

int Frequency(char Fname[])
{
    int fd = 0, iRet = 0, iCnt= 0 ,iCapCount = 0;

    char Buffer[BUFFER_SIZE] = {'\0'};  
    fd = open(Fname,O_RDONLY);       // open file in read mode using System call

    if(fd == -1)
    {
        printf("Enable to open the file\n");   
    }

    while((iRet = read(fd,Buffer,BUFFER_SIZE))!=0)
        {
          
           for(iCnt = 0; iCnt < iRet;iCnt++)
           {
        
            if((Buffer[iCnt]>='A')&&(Buffer[iCnt] <= 'Z'))
            iCapCount++;
           }
        }
        return iCapCount;

        
        close(fd);
   
}
int main()
{
    char Fname[20] = {'\0'};
    int iRet = 0;
    printf("Enter the filename u want to open:\n");
    scanf("%s",Fname);

    iRet = Frequency(Fname);
    printf("Capital characters are : %d\n",iRet);
    return 0;
}