#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    while(n<=i){
        int j=1;
        while(j<=i){
            printf("%d",j);
            j++;
        }
        i++;
    }

}