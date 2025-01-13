#include <stdio.h>
#include <string.h>

// bubblesort


int main() {
    
    int array[] = {1,5,412,32,3123124,423,2145,5464,55,4};
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 9; j++){
            if(array[j+1] < array[j]){
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
    
    
    
    for(int i = 0; i< 10; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}
