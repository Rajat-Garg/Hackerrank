#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
    int i,j,k=ar_size,inserted;
     inserted = ar[ar_size-1];
    for(i=0; i<k ; i++){
       if(ar[ar_size-2] > inserted){
         ar[ar_size-1] = ar[ar_size-2];
         for(j=0;j<k;j++)
             printf("%d ",ar[j]);
             printf("\n");
         --ar_size;  
       }
        else{
            ar[ar_size-1] = inserted;
         for(j=0;j<k;j++)
             printf("%d ",ar[j]);
           break; 
        }
    }
}
int main(void) {
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}
