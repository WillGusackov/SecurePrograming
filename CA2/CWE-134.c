#include <stdio.h>
#include <unistd.h>

int main() {
    int secret_num = 0x8badf00d;

    char name[34] = {0};
    read(0, name, 34);
    printf("Hello ");
    printf(name);
    return 0;
}
