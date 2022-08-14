#include <stdio.h>
#include <stdlib.h>
void selection(int*, int);
int main()
{
    int i;
    int arr [7] = {2, 5, 3, 9, 7, 1, 11};
    for(i=0; i<7; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
    selection(arr, 7);
    for(i=0; i<7; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}
void selection(int *arr, int size){
    int i, j, temp;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
