#include <stdio.h>
#include <stdint.h>

// prime check

int isPrime(int x){
    
    for(int i = 2; i < x; i++){
        
        if(x % i == 0)
            return 0;
        
    }
    
    return 1;
    
}

int main() {
   
    int i = 1928739643;
    if(isPrime(i)){
        printf("%d is prime", i);
    }else{
        printf("%d is NOT prime", i);
    }
    

    return 0;
}
