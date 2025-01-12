#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// find substring 

char *subString(char *s, char* sub){
    
    if(sub == NULL || s == NULL)
        return NULL;
        
    int Lsub = strlen(sub);
    int Ls = strlen(s);
    
    for(int i = 0; i < Ls; i++){
        
        bool found = true;
        
        for(int j = 0; j < Lsub; j++){
            
            if(s[i+j] != sub[j])
                found = false;
            
        }
        
        if(found) return s+i;
        
    }
    
    return NULL;
    
}

int main() {
   
    char *s = "Guten Morgen";
    char *sub = "Morge";
    
    char *where = subString(s, sub);
    if(where == NULL)
        printf("s doesnt contain sub");
    else
        printf("sub in s at: %d", where-s);
    

    return 0;
}
