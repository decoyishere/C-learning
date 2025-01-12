#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// Integer to binary

char *integerToBinary(int x){
    
    char *s = malloc(sizeof(char) * 33);
    s[32] = '\0';
    
    for(int i = 0; i < 32; i++){
        
        if((unsigned int)x & (1U << 31-i)){
            s[i] = '1';
        }else{
            s[i] = '0';
        }
        
    }
    
    return s;
  
}


int main() {
   
    printf("%s", integerToBinary(33));

    return 0;
}
