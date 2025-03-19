#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],count;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
            printf("%d %d\n",i,count);


        }
    }
}