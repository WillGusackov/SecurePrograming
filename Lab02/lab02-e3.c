#include <stdio.h>
#include <string.h>
#define STRING_MAX 10
/*max 10 length*/
int main(int argc, char *argv[]){
char name[STRING_MAX + 1]= "Dave"; /*default*/
/*plus one is for the null pointer*/

if (argc > 1){ /*If theres something*/
/*Basically if its more then 11 do this:*/
if(strlen(argv[1]) > STRING_MAX){
printf("Warning, string is over 10 charecters, it will be truncated \n");
strncpy(name, argv[1], STRING_MAX); /*Gives warning*/
printf("Hello %10s \n",name);

name[STRING_MAX] = '\0';
return 1; /*If its true*/

} else {

strncpy(name, argv[1], STRING_MAX);
name[STRING_MAX] = '\0'; /*Null terminate*/
}
}
printf("Hell0 %10s\n", name); /*Truncate to 10 which will not be used but just incase*/

return 0;
}
