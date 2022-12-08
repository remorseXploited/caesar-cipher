#include "prototypes.h"

void encrypt(char s1[], int key){
    
    int i = 0;
    int extra = 0;
    while(s1[i] != '\0'){
        
        switch(s1[i]){
            
            //Range in switch isn't part of C standard. It's a GCC extension
            case 'a' ... 'z':
                extra = (s1[i] + key) - 'z';
                if(extra > 0){
                    s1[i] = '`' + extra;
                }else{
                    s1[i] += key;
                }
                break;
            
            case 'A' ... 'Z':
                extra = (s1[i] + key) - 'Z';
                if(extra > 0){
                    s1[i] = '@' + extra;
                }else{
                    s1[i] += key;
                }   
                break;
            
            default:
                s1[i] = s1[i];
                break;
        }
        i++;
        
    }
    
}

void decrypt(char s1[], int key){

    int i = 0;
    int extra = 0;
    while(s1[i] != '\0'){

        switch(s1[i]){
            case 'a' ... 'z':
                extra = ('a' - s1[i]) + key;
                if(extra > 0){
                    s1[i] = '{' - extra;
                }else{
                    s1[i] -= key;
                }
                break;
                
            case 'A' ... 'Z':
                extra = ('A' - s1[i]) + key;
                if(extra > 0){
                    s1[i] = '[' - extra;
                }else{
                    s1[i] -= key;
                }
                break;

            default:
                s1[i] = s1[i];
                break;
                
             
        }
        i++;
    }

}
