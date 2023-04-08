#include <stdio.h>
#include <string.h>

int main() {
    unsigned int var1 = 0x46c6f48;
    unsigned char var2 = 0xff;
    unsigned int var3 = 0;
    
    char password[5]; // password buffer
    
    // generate password based on var1, var2, and var3
    for (int i = 0; i < 4; i++) {
        password[i] = ((var1 >> (8 * i)) & 0xff) ^ ((var3 >> (8 * i)) & 0xff) ^ var2;
    }
    password[4] = '\0'; // terminate the string
    
    // print the final ASCII value of var1 to the console
    printf("Final ASCII value of var1: ");
    for (int i = 0; i < 4; i++) {
        printf("%c", (var1 >> (8 * i)) & 0xff);
    }
    printf("\n"); // add a newline character to the end of the output
    return (0);
}
