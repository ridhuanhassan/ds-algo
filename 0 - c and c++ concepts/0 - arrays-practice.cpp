#include <iostream>

using namespace std;

int main() {
  int A[5]; // how much memory this array will take? it depends on the size of the integer
  // latest compilers take 4 bytes for an integer

  A[0] = 12;
  A[1] = 15;
  A[2] = 25;

  // initialize array
  int B[5] = {2, 4, 6, 8, 10};

  // initialize array, skip size
  int C[] = {3, 4, 9}; // size of an array depends on how many elements you have mentioned

  // element less than size of an array
  // if you have initialized few elements, then the rest of the elements will become 0 by default
  int D[10] = {2, 4, 6, 8, 10, 12, 14};

  // one element initialized as zero and the rest of the elements will be zero
  int E[10] = {0}; 

  // size of array
  cout << "A" << endl;
  cout << sizeof(A) << endl; // 20 bytes
  cout << A[1] << endl; // 15 
  printf("%d\n", A[2]); // 25

  cout << "B" << endl;
  cout << sizeof(B) << endl; // 20 bytes
  cout << B[1] << endl; // 4
  printf("%d\n", B[2]); // 6


  cout << "C" << endl;
  cout << sizeof(C) << endl; // 12 bytes
  cout << C[1] << endl; // 4
  printf("%d\n", C[2]); // 9

  cout << "D" << endl;
  cout << sizeof(D) << endl; // 40 bytes
  cout << D[8] << endl; // 0
  printf("%d\n", D[9]); // 0

  cout << "E" << endl;
  cout << sizeof(E) << endl; // 40 bytes
  cout << E[8] << endl; // 0
  printf("%d\n", E[9]); // 0

  for (int i = 0; i < 10; i++) {
    cout << E[i] << endl; // 0
  }

  // c++ for each loop
  for (int x:D) { // take some element x from D, we can use auto instead of int
    cout << x << endl;
  }

  // taking input from user
  int n;
  cout << "Enter Size";
  cin >> n;
  int F[n]; // cannot initialize array with dynamic size, but you can create it
  // some compiler doesn't throw warning when we try to initialize dynamic-sized array, but it will not work

  for (int x:F) {
    cout << x << endl; // garbage value because we can't initialize the array earlier
  }

  // lets assigns some values to array F
  F[0] = 2;
  
  for (auto x:F) {
    cout << x << endl; // only value at index 0 not garbage
  }

  return 0;
}
