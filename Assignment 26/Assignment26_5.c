#include<stdio.h>
void StrrevX(char *str)
{
    char *Start = NULL;
    char *End = NULL;
    char Temp = '\0'; 
    Start = str;
    End = str;
    while(*End != '\0')
    {
        End++;
    }
    End--;
    while(Start < End)
    {
        Temp = *Start;
        *Start = *End;
        *End = Temp;
        Start++;
        End--;
    }
}
int main()
{
    char Arr[20]={'\0'};

    printf("Enter a string\n");
    scanf("%[^'\n]s",Arr);

    StrrevX(Arr);
    printf("String  is %s",Arr);

    return 0;
}




