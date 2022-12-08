#include "prototypes.h"

void convertToUpper(char s1[]){
    int i = 0;
    while(s1[i] != '\0'){
        if(s1[i] >= 97 && s1[i] <= 122){
            s1[i] -= 32;
        }
        i++; 
    }
    
}

void encrypt(char s1[]){
    int i = 0;
    while(s1[i] != '\0'){

        switch(s1[i]){
            case 'A':
                s1[i] = 'X';
                break;

            case 'B':
                s1[i] = 'Y';
                break;

            case 'C':
                s1[i] = 'Z';
                break;

            //case for handle numbers and symbols on string
            //case range is a gcc extension not a C standard
            case '0' ... '9': case ' ' ... '/': 
            case ':' ... '@': case '[' ... '`':
            case '{' ... '~':
                s1[i] = s1[i];
                break;

            default:
                s1[i] -= 3;
                break;   
        }
        i++;
    }
}

void decrypt(char s1[]){

    int i = 0;
    while(s1[i] != '\0'){

        switch(s1[i]){
            case 'X':
                s1[i] = 'A';
                break;

            case 'Y':
                s1[i] = 'B';
                break;

            case 'Z':
                s1[i] = 'C';
                break;

            case '0' ... '9': case ' ' ... '/': 
            case ':' ... '@': case '[' ... '`':
            case '{' ... '~':
                s1[i] = s1[i];
                break;

            default:
                s1[i] += 3;
                break;   
        }
        i++;
    }

}
