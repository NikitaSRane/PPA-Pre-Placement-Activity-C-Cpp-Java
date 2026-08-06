/*Accept n numbers from user and perforn addition on n numbers.
Input 
value of n=5
values from user=10,20,30,40,50
output
addition is: 150 */

//Algorithm
/* Steps
1.Accept the number of element from user.
2.Allocate the memory to store that element
3. accepts the numbers from user
4.perform addition of all numbers
5.Display the addition
*/

#include<stdio.h> //for printf() and scanf()
#include<stdlib.h> //for malloc() and free()

/*Application: Addition of n numbers
Input:N numbers
output:addition
Author:nikita R
Date:05/03/2024*/

int main()
{
    int *Arr=NULL; //pointer to hold address of n numbers
    int isize=0; // variable to hold size of array
    int i=0; //loop counter
    int isum=0;
    printf("Please enter how many elements do you want:\n");
    scanf("%d",&isize); //allocate the memory for isize
    Arr=(int *)malloc(isize*sizeof(int));
    printf("Memory gets allocated.\n");
    printf("Please enter the elements:");
    for(i=0;i<isize;i++)
    {
        scanf("%d",&Arr[i]);
    }
    //perform addition
    for(i=0;i<isize;i++)
    {
        isum=isum+Arr[i];
    }
    printf("Addition is %d \n",isum);
    free(Arr);
    printf("Memory gets deallocated.\n");
    return 0;
}