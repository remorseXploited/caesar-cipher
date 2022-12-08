#include <stdio.h>
#include "prototypes.h"
#define MAX_LIMIT 50


int main(){

    char sentence[MAX_LIMIT];
    printf("Enter the sentence to encrypt: ");
    fgets(sentence, MAX_LIMIT, stdin);
    
    convertToUpper(sentence);
    printf("This is the sentence to encrypt: %s\n", sentence);    
    encrypt(sentence);
    printf("This is the sentence encrypted: %s\n", sentence);
    decrypt(sentence);
    printf("This is the sentence decrypted: %s\n", sentence);

}