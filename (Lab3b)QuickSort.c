#include<stdio.h>
#include <stdlib.h>
void quicksort(int a[],int p,int q){
    if (p<q){
        int pivot=a[p];
        int i=p+1;
        int j=q;
        while(i<=j){
            while(i<=q && a[i]<pivot) i++;
            while(j>=p && a[j]>pivot) j--;
            if (i<j){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        int temp1=a[p];
        a[p]=a[j];
        a[j]=temp1;
        int pi=j;
        quicksort(a,p,pi-1);
        quicksort(a,pi+1,q);
    }
}
void main(){
    int i,n,a[100];
    printf("Enter array size: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("Sorted array:\n");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

/*OUTPUT
Enter array size: 5
Enter element: 3
Enter element: 6
Enter element: 98
Enter element: 23
Enter element: 5
Sorted array:
3 5 6 23 98 */
