#include<iostream>
#include<vector>
using namespace std;

#include "btree.h"


int main(int argc, char* argv[]){

  Btree btree;

  btree.insert(15);
  btree.insert(6);
  btree.insert(18);
  btree.insert(3);
  btree.insert(8);
  btree.insert(17);
  btree.insert(20);
  btree.insert(2);
  btree.insert(4);
  btree.insert(7);
  btree.insert(9);


  
  //btree.print();
  //cout << endl;
  btree.treeDelete(6);
  btree.print();

  return 0;
}
