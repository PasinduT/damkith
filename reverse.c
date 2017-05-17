#include <stdio.h>
#include <string.h>
int main (void){
	
	char array[20];
	char b[20] = {0};
	int i, z, a;

	// Must initialize z to 0
	z = 0;

	printf("Input the word ");

	// scanf("%c", &array);  -- correct format given below
	scanf("%s", array);

	a = strlen(array);
	for(i = a - 1;i >= 0;i--){
		b[z] = array[i];
		z++;
		
		// This statement is not nessacary
		printf("%c", b[z]);
	
	}
	// printf("%c", array); -- correct format given below
	// array holds the correct version and you should print reverse hence print b not array
	printf("%s\n", b);
	
return 0;
}
