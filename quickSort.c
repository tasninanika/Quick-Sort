#include<stdio.h>


void quickSort(int arr[], int l, int h){
    if(l<h){
       int j = partition(arr, l, h);
        quickSort(arr, l, j-1);
        quickSort(arr, j+1, h);
    }
}

int partition(int arr[], int l, int h){

    int pivot = arr[l];
    int i = l;
    int j = h;
    int temp;

    while(i<j){
        while(arr[i]<=pivot && i<h){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;

    return j;

}

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

   quickSort(arr, 0, n-1);

    printf("Sorted array: ");
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
