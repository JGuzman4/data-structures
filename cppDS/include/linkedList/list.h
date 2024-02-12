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

#ifndef LIST_H
#define LIST_H


class List {
  public:
    List(){ m_head = NULL; }
    void push_back(int key);
    void push_front(int key);
    void remove(int key);
    void print();

  private:
    class Node {
      public:
        Node(int key) { m_key = key; m_prev = NULL; m_next = NULL; }
        int m_key;
        Node *m_prev;
        Node *m_next;
    };
    Node *m_head;

};

#endif
