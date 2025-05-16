#include<stdio.h>
#include <stdlib.h>
int main(){
    int i,j,n,a[100],temp;
    printf("Enter size");
    scanf("%d",&n);
    printf("Enter elements");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    for (i=0;i<n;i++){
        for (j=0;j<n-i-1;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
        }
}

/*OUTPUT
Enter size5
Enter elements2
5
8
2
0
Sorted array:
0 2 2 5 8 */
