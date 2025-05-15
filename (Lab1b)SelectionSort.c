#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j,a[200],temp,x;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of the array: ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        x=i;
        for (j=i+1;j<n;j++){
            if (a[j]<=a[x]){
                x=j;
            }
        }
        temp=a[i];
        a[i]=a[x];
        a[x]=temp;
    }
    printf("Sorted array:\n");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

