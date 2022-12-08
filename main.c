#include <stdio.h>
#include "prototypes.h"
#include <stdlib.h>
#include <time.h>
#define MAX_LIMIT 50


int main(){

    srand(time(NULL));

    const int KEY = (rand() % 25) + 1;
    char sentence[MAX_LIMIT];
    printf("Enter the sentence to encrypt: ");
    fgets(sentence, MAX_LIMIT, stdin);
    
     
    encrypt(sentence, KEY);
    printf("\n\nThis is the sentence encrypted: %s\n", sentence);
    decrypt(sentence, KEY);
    printf("This is the sentence decrypted: %s\n", sentence);

}