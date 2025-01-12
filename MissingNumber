#include <stdio.h>

// Find the missing number from 1....n

int findMissingNumber(int *a, int length){
    
    int temp[length+1];
    
    for(int i = 0; i < length; i++){
        temp[a[i]] = 1;
    }
    
    for(int i = 1; i < length+1; i++){
        if(temp[i] == 0)
            return i;
    }
    
}

int main() {
   
    int a[] = {1,2,3,4,6,7,8,9,10};
    int length = 9;
    
    int number = findMissingNumber(a, length);
    
    printf("Missing Number is: %d\n", number);

    retu
