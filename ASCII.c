#include <stdio.h>
#include <stdint.h>

// convert char into ASCII code

union converter{
    char c;
    uint8_t i;
};


int main() {
   
    union converter conv;
    
    conv.c = 'n';
    printf("%c as ASCII code: %d", conv.c, conv.i);

    return 0;
}
