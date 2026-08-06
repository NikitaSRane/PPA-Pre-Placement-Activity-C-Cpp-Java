#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[5]={'a','b','c','d','\0'};
    char Brr[5]="abcd";
    char Crr[]="abcd";

    printf("Arr is %s \n",Arr);
    printf("Brr is %s \n",Brr);
    printf("Crr is %s \n",Crr);

    printf("Size of Arr %d \n",sizeof(Arr));
    printf("Size of Brr %d \n",sizeof(Brr));
    printf("Size of Crr %d \n",sizeof(Crr));

    printf("Length of Arr %d \n",strlen(Arr));
    printf("Length of Brr %d \n",strlen(Brr));
    printf("Length of Brr %d \n",strlen(Crr));

    int icnt=0;
    char Drr[]="Hello";
    char *ptr=Drr;

    while(*ptr !='\0')
    {
        icnt++;
        ptr++;
    }
    printf("%d \n",icnt);
    printf("%d",ptr);

    return 0;
}