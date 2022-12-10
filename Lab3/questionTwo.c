#include <stdio.h>
#include <string.h>
void anagram(char one[], char two[]){
	int length1 = strlen(one);
	int length2 = strlen(two);
	int found,i,j,not_found;
    if (length1 == length2){  
        for ( i = 0; i < length1; i++){  
            found = 0;  
            for ( j = 0; j < length1; j++){  
                if (one[i] == two[j]){  
                    found = 1;  
                    break;  
                }  
            }    
            if (found == 0){  
                not_found = 1;  
                break;  
            }  
        }  
        if (not_found == 1)  
            printf (" \n The %s is not an anagram of the %s. ",one,two);  
        else  
            printf (" \n The %s is an anagram of the %s. ",one,two);     
    }  
    else  
        printf (" \n Both string must contains same number of character to be the anagram of string. ");  
          
}  

void mainTwo(){
	anagram("dil","lid");
}
