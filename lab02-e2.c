#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
char name[11]= "Dave"; /*default*/

if (argc > 1){ /*If theres something*/
strncpy(name, argv[1], sizeof(name) -1);
name[sizeof(name) - 1] = '\0'; /*Null terminate*/
}

printf("Hell0 %s\n", name);

return 0;
}
