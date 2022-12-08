#include "prototypes.h"

void encrypt(char s1[]){
    int i = 0;
    while(s1[i] != '\0'){

        switch(s1[i]){
            case 'A':
                s1[i] = 'X';
                break;
                
            case 'a':
                s1[i] = 'x';
                break;

            case 'B':
                s1[i] = 'Y';
                break;
                
            case 'b':
                s1[i] = 'y';
                break;

            case 'C':
                s1[i] = 'Z';
                break;
                
            case 'c':
                s1[i] = 'z';
                break;

            //case for handle numbers and symbols on string
            //case range is a gcc extension not a C standard
            case '0' ... '9': case ' ' ... '/': 
            case ':' ... '@': case '[' ... '`':
            case '{' ... '~':
                s1[i] = s1[i];
                break;

            case 'd' ... 'z': case 'D' ... 'Z':
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
                
            case 'x':
                s1[i] = 'a';
                break;

            case 'Y':
                s1[i] = 'B';
                break;
                
            case 'y':
                s1[i] = 'b';
                break;

            case 'Z':
                s1[i] = 'C';
                break;
                
            case 'z':
                s1[i] = 'c';
                break;

            case '0' ... '9': case ' ' ... '/': 
            case ':' ... '@': case '[' ... '`':
            case '{' ... '~':
                s1[i] = s1[i];
                break;

            case 'a' ... 'w': case 'A' ... 'W':
                s1[i] += 3;
                break;   
        }
        i++;
    }

}
