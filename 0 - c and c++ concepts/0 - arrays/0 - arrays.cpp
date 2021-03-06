/*
  THEORY

  1) Array is collection of similar data elements

  2) If you have some set of integers or some set of floats, you can group them under one name as an array.

  3) Declaring an array

      int A[5];

      A       |   |   |   |   |   |
      index     0   1   2   3   4

  4) Assigning values to an array
      A[0] = 27;
      A[1] = 10;

      A       | 27 | 10 |   |   |   |
      index     0    1    2   3   4
*/

#include  <stdio.h>

int main () {
  // Declare an array
  int A[5]; // Array of integers with size of 5 will be created

  // Declare and initialize an array
  int B[5] = {2, 4, 6, 8, 10};

  // Accessing values in an array
  int i;
  for (i = 0; i < 5; i++) { // Scanning through the list of elements in an array
    printf("%d ", B[i]);
  }
}
