#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 30  // small buffer to force overflow

int main() {
char *buf1, *buf2;

// two chunks of memory on the heap
buf1 = (char *)malloc(sizeof(char) * BUFSIZE);
buf2 = (char *)malloc(sizeof(char) * BUFSIZE);

printf("Enter a string to overwrite  the second buffer): ");
gets(buf1);  // buffer overflow

printf("You entered: %s\n", buf1);
printf("Buffer 2 content: %s\n", buf2);

free(buf1);
free(buf2);
return 0;
}

