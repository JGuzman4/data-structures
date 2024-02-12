#include <iostream>
using namespace std;

#include "include/linkedList/list.h"

int main(int argc, char *argv[]) {

  int i = 0;
  List list;

  while (cin >> i)
    list.push_back(i);

  list.remove(3);
  list.push_front(3);

  list.print();
  return 0;
}
