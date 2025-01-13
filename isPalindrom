#include <stdio.h>
#include <string.h>

// check if string is palindrom

int isPalindrom(char *s){
    
    int len = strlen(s);
    
    for(int i = 0; i < len/2; i++){
        if(s[i] != s[len-1-i])
            return 0;
    }
    
    return 1;
    
}

int main() {
    
    char s[] = "racecar";
    
    if(isPalindrom(s))
        printf("yes");
    else
        printf("no");

    return 0;
}
