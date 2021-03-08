/*
  THEORY

  1) Structure can be defined as a collection of related data members under one name

  2) Those data members may be of similar or different type

  3) Structure is used for defining user defined data types
*/

#include <iostream>

using namespace std;

// right now, its not consuming any memory because it is just our definition
// if we create a variable with this type, only then it will be occupying 8 bytes of memory
// the size of a structure is the total amount of memory consumed by all its members which is 8 bytes for Rectangle
struct Rectangle { // takes 8 bytes of memory
  int length; // 4 bytes
  int breadth; // 4 bytes
};

// definition of Circle
struct Circle {
  int radius;
};

int main () {
  // declaration
  struct Rectangle r; // now, r will occupy memory space

  // declaration and initialization
  struct Circle c = {10};

  // modifying/accessing the members of a structure
  r.length = 15;
  r.breadth = 10;

  printf("Area of Rectangle is %d", r.length * r.breadth);

  struct Staff {
    int role; // 4 bytes
    char name[25]; // 25 bytes
    char dept[10]; // 10 bytes
    char address[50]; // 50 bytes
  };

  struct Staff s; // weirdly enough sizeof(s) becomes 92! google -> structure padding
  s.role = 10;
  s.name[0] = 'J';
  s.name[1] = 'o';
  s.name[2] = 'h';
  s.name[3] = 'n';
  s.name[4] = '\0';

  cout << endl << s.name;

  /*
    Card
    face : 2-10,J-A | 0 - 12
    shape : 0 = spade, 1 = heart, 2 = clover, 3 = diamond
    color : 0 = black, 1 = red
  */
  struct Card {
    int face; // 4 bytes
    int shape; // 4 bytes
    int color; // 4 bytes
  };

  struct Card cd;
  cd.face = 12; // Ace
  cd.shape = 0; // Spade
  cd.color = 0; // Black

  // or, struct Card c = {12, 0, 0};

  // deck of cards
  struct Card deck[52]; // 624 bytes

  // or, struct Card deck[52] = {{0, 0, 0}{1, 0, 0}...{12, 3, 1}};
  // access card members using index, eg:- deck[0].face;
}
