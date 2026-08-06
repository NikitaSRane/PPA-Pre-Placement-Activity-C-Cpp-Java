#include<stdio.h>

int main()
{
    int Arr[4]={11,21,51,101};
    printf("%d \n",sizeof(Arr)); //16 bytes
    printf("%d \n", sizeof(Arr[1])); // 4 bytes
    printf("%d \n",Arr[2]); //51
    printf("%d \n",2[Arr]); //51
    printf("%d \n",&Arr[3]-2);//112-2*4=112-8=104
    printf("%d \n",Arr[2]-2);//51-2=49
    printf("%d \n",Arr); //100 base address of 1st element
    printf("%d \n",&Arr); //100 address of whole array
    printf("%d \n",Arr+1);//104 //=100+1*(int)=100+1*4=100+4=104
    printf("%d \n",Arr+sizeof(Arr));//100+16=116
    printf("%d \n",&Arr[0]+1);//104 =100+1*size of datatype(ie.int)=100+1*4=104
    printf("%d \n",&Arr+1);//116 //=100+1*(size of array*no of elements)=100+1*16=116
    printf("%d \n",Arr[2]+2); //53=51+2=53
    printf("%d \n",&Arr[2]+2); //116=108+2*4=108+8=116

    return 0;
}