#include <stdio.h>

int main(){
char name[11] = "Dave"; /* Default name and has to be 10 char or less*/
printf("Enter your name: ");
fflush(stdout);
if(scanf("%10s", name) == 1 /*1 meaning true*/){
printf("Hello %s \n", name); 
}else{
printf("Hello %s \n", name);
} 
return 0;
}

