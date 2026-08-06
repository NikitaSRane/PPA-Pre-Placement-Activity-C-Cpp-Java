#include<stdio.h>

int main()
{
    char ch='A';
    switch(ch)
    {
        case 'A':
            printf("A");
        case "B":
            printf("B");
    }
}