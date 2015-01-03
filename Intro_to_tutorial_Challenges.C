#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int size_of_array=0 , number_to_be_searched=0 , i , array[100];
    scanf("%d",&number_to_be_searched);
    scanf("%d",&size_of_array);
    for(i = 0;i < size_of_array; i++ )
        {
        scanf("%d",&array[i]);
    }
    for(i = 0;i< size_of_array;i++)
        {
        if(array[i] == number_to_be_searched)
           {
            printf("%d",i);
            break;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
