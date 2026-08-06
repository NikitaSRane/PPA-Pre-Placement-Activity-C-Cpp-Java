//Demonstration of predefined preprocessor directive
#include<stdio.h>
//#define __CPLUSPLUS 1
#pragma option -C
int main()
{
    printf("File name is %s \n",__FILE__);
    printf("Line no is %d \n",__LINE__);
    printf("Date is %s \n",__DATE__);
    printf("Time is %s \n ",__TIME__);
    printf("Line no is %d ",__LINE__);
    printf("Version %d \n",__STDC_VERSION__);
    #line 400
    printf("Line no is %d n", __LINE__);
    if(__STDC__ ==1)
    {
        printf("supports");
    }
    else
    {
        printf("Not supports");
    }
    printf("line is %d \n",__LINE__);
    #line 500 "header.c"
    printf("Line is %d and file is %s \n",__LINE__,__FILE__);
    /*
    if (__CPLUSPLUS ==1)  hy5
    {
        /*
        printf("CPLUSPLUS");*/ 
    }
    else
    {
        printf("C");
    }
    */
    return 0;
}