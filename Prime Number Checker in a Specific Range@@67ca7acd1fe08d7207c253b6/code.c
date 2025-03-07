

#include <stdio.h>
int prime(int i){
    int a=0;
    for(int j=2;j<i;j++){
        if(i%j==0){
            a=1;
            break;
        }
    }
    if(a==0) return i;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=a;i<=b;i++){
        if(prime(i)!=0){
            printf("%d",prime(i));
        }
    }
    return 0;
}

