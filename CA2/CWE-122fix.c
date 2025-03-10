#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 30  // small buffer to prevent overflow

int main() {
char *buf1, *buf2;
buf1 = (char *)malloc(sizeof(char) * BUFSIZE);
buf2 = (char *)malloc(sizeof(char) * BUFSIZE);
// for memory allocation failure
if (buf1 == NULL || buf2 == NULL) {
printf("Memory allocation failed!\n");
return 1; // exit if memory allocation fails
}

printf("Enter a string to overwrite the second buffer: ");

// use fgets() to safely read input, preventing overflow
if (fgets(buf1, BUFSIZE, stdin) != NULL) {
// remove newline character if present
buf1[strcspn(buf1, "\n")] = '\0';
} else {
printf("Input error!\n");
free(buf1);
free(buf2);
return 1;  //if input error
}

printf("You entered: %s\n", buf1);
printf("Buffer 2 content: %s\n", buf2);

free(buf1);
free(buf2);

return 0;
}

