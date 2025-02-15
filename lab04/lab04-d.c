#include <stdio.h>

int main(){
int myArray[10] = {2,4,6,8,10,12,14,16,18,20};
int *p;

for (int i = 0; i <10 ; i++){
p = myArray + i; //assigning address of current array to p
printf("Array value %d is %d at address %p\n ", i ,*p, p);
printf("Memory address long: %ld\n",(long)(p));
// casting pointer to long ^^^^^^

char* byte = (char*) p; //char* to move byte by byte
printf("Memory address bytes: %p\n", byte);

}
return 0;
}
