#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Creating memory storage place*/
int* arr(int size){
return malloc(size * sizeof(int));
}

int main(void){
int i ;
int highestNumber = 0; /*place holder*/
int *array = arr(5); /*memory for array of 5 int*/

printf("Enter 5 integers, followed by a comma: \n");
fflush(stdout);
if(scanf("%d,%d,%d,%d,%d", &array[0], &array[1], &array[2], &array[3], &array[4]) == 5){
//warning for extra ints//
char extraChar;
if(scanf("%c", &extraChar) == 1 && extraChar != '\n'){
printf("Error, over 5 integers, it will only read the forst five. \n");
while(getchar() != '\n') //clearing from the buffer//
}

//loops for highest from the first 5 ints//
for(i=1; i <5; i++){
if(array[i] > highestNumber){
highestNumber = array[i]; /*Finding the highest number and placing it to highestNumber value*/
}
}

printf("Highest number :%d \n", highestNumber);
} else {
printf("Error, over 5 integers. \n");
}

free(array); /*Freeing the memory*/
return 0; 
}

 
