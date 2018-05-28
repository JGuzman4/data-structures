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

#ifndef QUEUE_H
#define QUEUE_H


class Queue {
  public:
    Queue(){ m_front = NULL; }
    void enqueue(int key);
    int dequeue();
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
    Node *m_front;

};

#endif
