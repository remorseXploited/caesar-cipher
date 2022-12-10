#include <ctype.h>

#include "caesar.h"

void encrypt(char s1[], int key){
    
    int extra = 0;
    for(int i = 0; s1[i] != '\0'; i++){

        if(!isalpha(s1[i])) continue;

        if(islower(s1[i])){
            extra = s1[i] + key - 'z';
            extra > 0 ? (s1[i] = 'a' - 1 + extra) : (s1[i] += key);
        }else{
            extra = s1[i] + key - 'Z';
            extra > 0 ? (s1[i] = 'A' - 1 + extra) : (s1[i] += key);
        }
    }
}        
        
void decrypt(char s1[], int key){

    int extra = 0;
    for(int i = 0; s1[i] != '\0'; i++){

        if(!isalpha(s1[i])) continue;

        if(islower(s1[i])){
            extra = 'a' - s1[i] + key;
            extra > 0 ? (s1[i] = 'z' + 1 - extra) : (s1[i] -= key);
        }else{
            extra = 'A' - s1[i] + key;
            extra > 0 ? (s1[i] = 'Z' + 1 - extra) : (s1[i] -= key);
        }
    }
}
