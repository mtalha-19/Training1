 #include <stdio.h>
 #define SIZE 5 
 int main (void) {
 int a [SIZE] = {1 , 2 , 3 , 4 , 5};
 int total = 0; 
 // Sum all elements
 for (int i = 0; i < SIZE ; ++ i ) {
  total += a [i]; // total = total + a[i]
  }
 
  printf ("The total is %d\n", total ) ;
  // Output : The total is 15
 
  return 0;
}