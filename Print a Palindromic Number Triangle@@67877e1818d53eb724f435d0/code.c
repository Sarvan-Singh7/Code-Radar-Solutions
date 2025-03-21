#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",a);
            a++;
        }
        a--;
        for(int l=1;l<=i-1;l++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
}