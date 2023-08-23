#include <stdio.h>

int main()
{
    int i, j;
    for (i; i<=10; i=i+1){
        for(j=0;j<i;j=j+1){
            printf("*");
        }
        printf("\n");
    }
}