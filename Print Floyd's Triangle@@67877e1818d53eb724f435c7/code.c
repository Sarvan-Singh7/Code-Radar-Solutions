#include <stdio.h>// try it once again
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    int a=1;
    while(i<=n){
        int j=1;
        
        while(j<=i){
            printf("%d ",a);
            a++;
            j++;
        }
        i++;
        printf("\n");
    }

}