#include<stdio.h>

int Addition(int iValue1, int iValue2)
{
    int iRet=0;

    iRet=iValue1+iValue2;

    return iRet;
}


int main()
{
    int iNo1=10;

    int iNo2=11;

    int iAns=0;

    iAns=Addition(iNo1,iNo2);

    printf("Addition is %d \n", iAns);


    return 0;
}