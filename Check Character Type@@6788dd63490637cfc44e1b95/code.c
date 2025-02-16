#include <stdio.h>
int main(){
    char as;
    scanf("%d",&as);
    if('a'<=as && 'z'>=as){
        if(as=='a' || as=='e' ||  as=='i'  || as=='o'  || as=='u'){
            printf("Vowel");
        }}else{
            printf("Consonant");
        }
    

    else if(as>=1 && as<=9){
        printf("Digit");
    }

    else printf("Special Character");
    return 0;
}