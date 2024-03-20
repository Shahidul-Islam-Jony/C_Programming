#include<stdio.h>
#include<conio.h>

// finding max value of an array
int maxOfArray(int *arr, int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d value for an array : ",n);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){      //finding size of array; or use n;
        scanf("%d",&arr[i]);
    }

    int max = maxOfArray(arr,n);    //calling function and get max value of array;
    printf("Max num of array is = %d",max);
}
