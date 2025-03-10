#include <stdio.h>
#include <string.h>

#define BUFSIZE 256 //size of buffer

int main() {
char buf[BUFSIZE];

printf("Enter Strings: ");
scanf("%[^\n]", buf); //changed so I can input while running this code
printf("You Entered: %s\n", buf);
return 0;

}
