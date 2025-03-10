#include <stdio.h>
#include <string.h>

#define BUFSIZE 256 // Size of the buffer

int main() {
char buf[BUFSIZE];

printf("Enter Strings: ");

// Use fgets to avoiding the stack buffer overflow
if (fgets(buf, BUFSIZE, stdin)) {
// Remove the newline character that fgets may leave
	buf[strcspn(buf, "\n")] = '\0';
        printf("You Entered: %255s\n", buf);
    } else {
        printf("Error reading input\n");
        return 1;
    }

    return 0;
}
