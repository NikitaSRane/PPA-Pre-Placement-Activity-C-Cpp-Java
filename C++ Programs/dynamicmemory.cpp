#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int *p=NULL;
    printf("%d \n",p);
    //using malloc
    //p=(int *)malloc(10*sizeof(int));
    //p=(int*)(NULL,sizeof(int));//malloc
    //using realloc as NULL already intialized as same as malloc
    //p=(int *)realloc(NULL,10*sizeof(int));
    p=(int *)realloc(p,10*sizeof(int)); //40 bytes //100 address
    printf("%d \n",p);

    int *q=p; // restore the address of p if reallocation fails.
    printf("%d \n",q);

    q=(int *)realloc(p,15*sizeof(int)); //60 bytes increase memory
    //q=NULL; // consider the failure.
    if(q==NULL)
    {
        q=p;
        printf("Allocates 40 bytes %d",p);
    }
    else
    {
        printf("Allocates 60 bytes");
    }
    free(q);
    return 0;
}