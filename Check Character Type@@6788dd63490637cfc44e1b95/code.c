#include <stdio.h>
int main(){/////////////////////////////////good code try again;;;;;;;;;;;;;;;;;;;
    char as;
    scanf("%c",&as);
    if(('a'<=as && 'z'>=as) ||  'A'<=as && 'Z'>=as){
        if(as=='a' || as=='e' ||  as=='i'  || as=='o'  || as=='u' || as=='O'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }

    else if(as>='1' && as<='9'){
        printf("Digit");
    }

    else printf("Special Character");
    return 0;
}
