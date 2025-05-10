# define TRUE  1
# define FALSE  0
int ChkVowel(char cVal)
{
    if((cVal =='A')||(cVal =='E')||(cVal =='I')||(cVal =='O')||(cVal =='U')||(cVal =='a')||
    (cVal =='e')||(cVal =='o')||(cVal =='i')||(cVal =='u'))

    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}