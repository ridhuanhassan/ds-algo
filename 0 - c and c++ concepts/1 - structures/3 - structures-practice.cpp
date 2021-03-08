#include <stdio.h>
#include <iostream>

using namespace std;

// definition does not consume memory
// describe how the rectangle will look like
struct Rectangle {
  int length;
  int breadth;
  char x; // allocating 4 bytes for char but we will be using only 1 byte out of it
  // google -> structure padding
};

// directly declare r1, r2, r3
/* struct Rectangle {
  int length;
  int breadth;
} r1, r2, r3; */

// we can do like this too
// struct Rectangle r1, r2, r3

int main () {
  struct Rectangle r1 = {10, 5};
  r1.length = 15;
  r1.breadth = 7;

  printf("%lu\n", sizeof(r1)); // 12 bytes
  cout << r1.length << endl; // 15
  cout << r1.breadth << endl; // 7

  return 0;
}