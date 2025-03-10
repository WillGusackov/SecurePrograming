#include <stdio.h>
#include <string.h>

int main() {
    int secret_num = 0x8badf00d; 

char name[34] = {0};
    // fgets to safely read input, avoiding buffer overflow
printf("Enter name: ");
fgets(name, sizeof(name), stdin);
printf("Hello %34s\n ", name);   
    return 0;
}
