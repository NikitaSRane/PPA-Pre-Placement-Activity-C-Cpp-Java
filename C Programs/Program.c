void DisplayConvert(char ch)
{
    int iNo=ch; // for ascii code

    if((iNo>=65)&&(iNo<=90)) // 65-90 A-Z
    {
        iNo=iNo+32;
        printf("%c",iNo);
    }
    else if((iNo>=97)&&(iNo<=122)) // 97-122 a-z
    {
        iNo=iNo-32;
        printf("%c",iNo);
    }
    else
    {
        printf("Invalid input");
        return;
    }
}

int main()
{
    char cValue='\0';

    printf("Enter character: ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    
    return 0;
}