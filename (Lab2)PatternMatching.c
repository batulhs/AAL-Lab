#include<stdio.h>
#include <stdlib.h>
int main(){
    int a[100],p[100],n,m,i,j,x,c=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter size of the pattern: ");
    scanf("%d",&m);
    printf("Enter array elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the pattern: ");
    for (i=0;i<m;i++){
        scanf("%d",&p[i]);
    }
    for (i=0;i<n-m+1;i++){
        x=0;
        for (j=0;j<m;j++){
            if (a[i+j]==p[j]){
                x++;
            }
            else{
                break;
            }
        }
        if (x==m){
            c++;
        }
    }
    if (c>0){
        printf("Pattern found %d times",c);
    }
    else{
        printf("Pattern not found");
    }
}

