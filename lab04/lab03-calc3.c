#include <stdio.h>
#include <string.h>
#include<stdlib.h>
//////////////////////PROTO-TYPES////////////////////////////////////////
void findMin(int arraySize, int * array); //declaring proto types
void findMax(int arraySize, int * array);
void findAbs(int arraySize, int * array);
int* arr(int size);
///////////////////////MAIN///////////////
int main(){
void inputNumbers(int arraySize, int * array);
void COperations(int arraySize, int * array);
////////////Number of Ints////////
int i, arraySize;
printf("Enter the number of integers: \n");
fflush(stdout);
scanf("%d", &arraySize); //inputs to array
int *array = arr(arraySize); //storage
////////////////////////////////////////////
inputNumbers(arraySize, array);
COperations(arraySize, array);
}
///////////// Storage //////////
int* arr(int size){
return malloc(size * sizeof(int)); }

/////////////////////////////////////////////////////////////
///////////////USER INPUT NUMBERS /////////////////////
void inputNumbers(int arraySize, int * array){
printf("Input %d integers: ", arraySize );
fflush(stdout);
int inputCount = 0, i;
for(i = 0; i < arraySize; i++){
if(scanf("%d,", &array[i]) == 1){//if true then count ints
inputCount++;
} else {
printf("Error, please try again \n"); //if there was an issue
return;
  }
 }
char extraNo; 
if (scanf("%c" , &extraNo) == 1 && extraNo != '\n') { //reads the input 
printf("you inputted too much integers. It will only count the first %d ", arraySize);

while (getchar() != '\n');
} //clears buffer
}
/////////////////////////////////////////////////////////////
////////////OPERATIONS/////////////////////////////////////

void COperations(int arraySize, int * array){
printf("What operations would you like to use?[abs,min or max] : \n");
char operation[4];
int operationInt=0;

if(scanf("%3s", operation)){ //reads 3 letter strings only
/////SWITCH////
switch(operation[0]){ // operation[0] for character comparison
case 'm': // max operation
if(strcmp(operation, "max") == 0){
operationInt = 1;
findMax(arraySize, array); }
break;
      
case 'i': // min operation
if(strcmp(operation, "min") == 0){
operationInt = 2;
findMin(arraySize, array); }
break;

case 'a': // abs operation
if(strcmp(operation, "abs") == 0){
operationInt = 3;
findAbs(arraySize, array); }
break;

default:
printf("Please enter only max, min, or abs.\n");
break;
}
 } else {
printf("Error\n");
}
}

////////////////////voids for switch statment////////////////
void findMax(int arraySize, int * array){
int highestNumber = array[0];
for(int i=1; i < arraySize; i++){
if(array[i] > highestNumber){
highestNumber = array[i]; //highest number at 1st position
}}
printf("Highest integer is : %d \n ", highestNumber);
}

void findMin(int arraySize, int * array){
int minNumber = array[0];
for(int i=1; i < arraySize; i++){ // -- for oposite of highest
if(array[i] < minNumber){ // oposite to get min, array needs to be smaller
minNumber = array[i];
}}
printf("Smallest integer is: %d \n ", minNumber);
}

void findAbs(int arraySize, int * array){
for(int i = 0; i < arraySize; i++){
array[i] = abs(array[i]); //update array
}
for(int i = 0; i < arraySize; i++){
printf("Absolute values: %d \n", array[i]);
}
}
//////////////////////////////////////////////////
