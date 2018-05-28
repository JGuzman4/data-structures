/*
 * Jeff Guzman
 * Implementation of a stack.
 *
 *
 *
 *
 */
#include<iostream>
#include<vector> 
#include<string> 
using namespace std;

#include "stack.h"


int main(int argc, char* argv[]){


  int i = 0;
  Stack stack;

  while (cin >> i)
    stack.push(i);

  stack.pop();

  cout << endl;
  cout << "length is " << stack.length() << endl;
  stack.print();

  return 0;
} 

