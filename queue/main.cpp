/*
 * Jeff Guzman
 * Implementation of a queue.
 *
 *
 *
 *
 */
#include<iostream>
#include<vector> 
#include<string> 
using namespace std;

#include "queue.h"


int main(int argc, char* argv[]){


  int i = 0;
  Queue queue;

  while (cin >> i)
    queue.enqueue(i);


  cout << endl;
  cout << "length is " << queue.length() << endl;
  queue.print();

  return 0;
} 

