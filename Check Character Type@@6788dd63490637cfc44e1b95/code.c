// #include <stdio.h>
// int main(){
//     char as;
//     scanf("%d",&as);
//     if('a'<=as && 'z'>=as){
//         if(as=='a' || as=='e' ||  as=='i'  || as=='o'  || as=='u'){
//             printf("Vowel");
//         }else{
//             printf("Consonant");
//         }
//     }

//     else if(as>=1 && as<=9){
//         printf("Digit");
//     }

//     else printf("Special Character");
//     return 0;
// }
#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);  // Using %c to read a character

    if (ch >= 'a' && ch <= 'z') {  // Check for lowercase letters
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {  // Check for vowels
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else if (ch >= '0' && ch <= '9') {  // Check if character is a digit
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }

    return 0;
}
