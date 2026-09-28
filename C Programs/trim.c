#include<stdio.h>

int strlenx(char *str)
{
    int iCount=0;
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

void trailspace(char *str) // work correct
{
    int iRet=0;
    int iCnt=0;
    iRet=strlenx(str);
    

    // logic of trailing while space
    for(iCnt=iRet-1;iCnt >=0;iCnt--)
    {
        if((str[iCnt] == ' ')||(str[iCnt]=='\t'))
        {
            str[iCnt]='\0';
        }
        else{
            break;
        }   
    }
}
//leadspace logic
void leadspace(char *str)
{
    char *start=str;
    int iCount=0;

    while(*start !='\0')
    {
        if((*start == ' ')||(*start == '\t'))
        {
            iCount++;
        }
        else
        {
            break;
        }
        start++;
    }
    while(*str != '\0')
    {
        *str=*start;
        str++;
        start++;
    }
    *str='\0';
}  
// logic of middle whitespaces work middle point

void midSpace(char *str)
{
    int iRet=0;
    int iCnt=0;
    int isize=0;
    int iCount=0;

    while(*str != '\0')
    {
        if((*str == ' ')||(*str == '\t'))
        {
            iCount++;
            if(iCount == 1)
            { 
                str[iCnt]=' ';
            }
            else if(iCount > 1)
            {
                /*
                isize=iCnt;
                while( str[isize] != '\0')
                {
                    str[isize]=str[isize+1];
                    isize++;
                }
                iCount--;
                */
                leadspace(str);
            }
        }
        else
        {
            iCount=0;
        }
        str++;
    }

}

void trim(char *str)
{
    trailspace(str);
    leadspace(str);
    midSpace(str);
}

int main()
{
    char Arr[20];
    printf("Enter string: ");
    scanf("%[^\n]s",Arr);
    printf("Before modified:%s\n",Arr);
    trim(Arr);
    printf("After modified:%s\n",Arr);
    printf("Length of string after mid %d\n",strlenx(Arr));

    return 0;
}