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

#ifndef STACK_H
#define STACK_H


class Stack {
  public:
    Stack(){ m_top = NULL; }
    void push(int key);
    int pop();
    int length();
    void print();
    bool empty();

  private:
    class Node {
      public:
        Node(int key) { m_key = key; m_prev = NULL; m_next = NULL; }
        int m_key;
        Node *m_prev;
        Node *m_next;
    };
    Node *m_top;

};

#endif
