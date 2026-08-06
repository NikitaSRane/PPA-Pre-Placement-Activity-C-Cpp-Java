#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int ino)
{
    if((ino%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int ivalue=0;

    printf("Enter the number: \n");
    scanf("%d",&ivalue);

    bool bRet=false; //0
                                     
    bRet=CheckEven(ivalue);

    if(bRet==true)                
    {
        printf("It is even number.");
    }
    else{
        printf("It is odd number.");
    }
    return 0;
}