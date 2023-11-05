#include <stdio.h>

int main(){
    char ch;
    printf("Enter the value of the character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <='z'){
        printf("Lower case characters");
    }
    else if (ch >= 'A' && ch <='Z'){
        printf("Upper case characters");
    }
    else{
        printf("Numberic values or symbols");
    }
    
    return 0;
}