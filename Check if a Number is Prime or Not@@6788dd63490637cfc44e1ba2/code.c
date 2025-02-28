#include <stdio.h>
int main(){
    int n, a=0;
    scanf("%d",&n);
    for(int i=2;i<n-1;i++){
        if(i%2==0){
            a=1;
            break;
        }
    }
    if(a==0) printf("Prime");
    else if(a==1) printf("Not Prime");

    return 0;
}