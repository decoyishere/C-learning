#include <stdio.h>

// Array reverser

void reverser(int *a, int length){
    
    for(int i = 0; i < length/2; i++){
        int temp = a[i];
        a[i] = a[length-1-i];
        a[length-1-i] = temp;
    }
    
}

int main() {
    
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    
    reverser(a, 10);
    
    for(int i = 0; i < 10; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}
