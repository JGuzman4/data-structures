/*
 * Jeff Guzman
 * Implementation of a linked list.
 *
 *
 *
 *
 */
#include<iostream>
#include<vector> 
#include<string> 
using namespace std;

#include "list.h"


int main(int argc, char* argv[]){


  int i = 0;
  List list;

  while (cin >> i)
    list.push_back(i);

  list.remove(3);
  list.push_front(3);
  

  list.print();
  return 0;
} 

