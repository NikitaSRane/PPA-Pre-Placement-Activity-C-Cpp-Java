#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int size=0;
    int *Arr=NULL;
    printf("Enter the size of array ");
    scanf("%d",&size);

    Arr=(int*)malloc(4*size);
    printf("Size of array is %d",sizeof(Arr));
    //use memory
    free(Arr);
    return 0;
}