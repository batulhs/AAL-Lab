
#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i;
    for (i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[100],i,n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionSort(arr, n);
    printf("Sorted array:\n");
    for (i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
