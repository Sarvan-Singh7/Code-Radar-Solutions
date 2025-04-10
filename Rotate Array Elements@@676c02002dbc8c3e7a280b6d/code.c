void transpose(int *arr,int n,int si,int ei){// transpose 
    for(int i=si,j=ei;i<=j;i++,j--){
        int temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
#include <stdio.h>
int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%10;
    transpose(arr,n,0,n-1);
    transpose(arr,n,0,k-1);
    transpose(arr,n,k,n-1);

    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    
}