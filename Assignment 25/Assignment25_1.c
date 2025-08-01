#include<stdio.h>

void StrlwrX(char *Arr)
{
    if((*Arr >='a')&&(*Arr <= 'z'))
    {
        printf("Enter a valid string containing uppercase letters only.\n");
    }
    while(*Arr !='\0')
    {
        if((*Arr >= 'A') && (*Arr <= 'Z'))
        {
            printf("%c", *Arr+32);
        }
        else if(((*Arr == ' ')))
        {
            printf(" ");
        }   
    
    *Arr++;
    }
    }
        


int main()

{
    char Arr[20];
    printf("Enter a string: \n");
    scanf("%[^\n]s", Arr);
    StrlwrX(Arr);
    return 0;
}