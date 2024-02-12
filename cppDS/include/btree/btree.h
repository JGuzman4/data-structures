#include<iostream>
#include<vector>
using namespace std;

#ifndef BTREE_H
#define BTREE_H


class Btree {

  public:
    Btree() { m_root = NULL; }
    void insert(int key);
    void treeDelete(int key);
    void print();
    int min() { if (m_root == NULL) return 0; else { Node *m = min(m_root); return m->m_key; } }
    int max();
    void printInOrder() { printInOrder(m_root); }

  private:

    class Node {
      public:
        Node(int key) { m_key = key; m_parent = NULL; m_left = NULL; m_right = NULL; }
        int m_key;
        Node *m_parent;
        Node *m_left;
        Node *m_right;
    };

    class Queue {
      public:
        Queue(){ m_front = NULL; }
        void enqueue(Node *key);
        Node *dequeue();
        int length();
        void print();
        bool empty();

      private:
        class QueueNode {
          public:
            QueueNode(Node *key) { m_key = key; m_prev = NULL; m_next = NULL; }
            Node *m_key;
            QueueNode *m_prev;
            QueueNode *m_next;
        };
        QueueNode *m_front;

    };

    Node *m_root;
    Node *search(Node *n, int key);
    Node *min(Node *n);
    void max(Node *n);
    void transplant(Node *u, Node *v);
    void printInOrder(Node *n);
};


#endif
