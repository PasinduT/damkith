#include <stdio.h>
#include <string.h>

void convertToUpperCase(const char* source, char * destination){
    // For Loop counter
    int i;
    // Size of the source string
    size_t length = strlen(source);

    // Loop through every character
    for (i=0; i<length; i++){

        // Get every character to a temporary char variable
        char temp = source[i];

        // Check if the character is simple. i.e: 'a' to 'z' where 'a' in ascii = 97 and 'z' = 122
        if (temp > 96 && temp < 123){

            /*  Convert the character to uppercase  
                first find the character:
                    for example 'd':
                    'd' in ascii is 100
                    'D' in ascii is 68
                    hence 'd' should decrease by 32

                    therefore:
                        temp = temp - 32
            */
            temp = temp - 32;
            // Add the character to the destination
            destination[i] = temp;
        }
        else{
            // If its not a simple letter then just put it to the destination
            destination[i] = temp;
        }
    }
}

int main(){

    // Declare an array containing the address
    char address [] = "SLIIT, New Kandy Road, Malabe";
    // Declare an array to store the changed address
    char destination [100] = {0};

    convertToUpperCase(address, destination);

    // Print the original address followed by the changed one
    printf("%s\n", address);
    printf("%s\n", destination);

    return 0;
}