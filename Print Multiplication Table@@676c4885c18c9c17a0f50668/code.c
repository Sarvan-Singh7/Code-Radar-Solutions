#include <stdio.h>
int main(){
   int n; 
   scanf("%d",&n);
   a=n;
   for(int i=1;i<=n;i++){
    printf("%d x %d = %d",n,i,a);
    a=a+n;
   }


    return 0;
}