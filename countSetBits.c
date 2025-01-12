#include <stdio.h>
#include <stdint.h>

// count set bits to 1

int countBits(int i){
    
    int count = 0;
    
    for(int j = 0; j < 32; j++){
        if(0x1 & i)
            count++;
            
        i >>= 1;
    }
    
    return count;
    
}



int main() {
   
    int i = 29;
    printf("%d\n", countBits(i));

    return 0;
}
