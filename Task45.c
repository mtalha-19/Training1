#include<stdio.h>
#define SIZE 5 // Symbolic constant
int main (void) {
int s [SIZE] = {0};
// Fill array with even numbers : 2 , 4 , 6 , 8 , 10
for (int j = 0; j < SIZE ; ++j ) {
s [j] = 2 * j ;
 }

 // Print array
 for (int j = 0; j < SIZE ; ++j ) {
 printf ("s[%zu] = %d\n", j , s [j]) ;
 }

 return 0;
}