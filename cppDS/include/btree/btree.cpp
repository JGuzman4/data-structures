#include "btree.h"



void Btree::insert(int key){
  Node *z = new Node(key);
  Node *y = NULL;
  Node *x = m_root;

  while (x != NULL){
    y = x;
    if (key < x->m_key)
      x = x->m_left;
    else
      x = x->m_right;
  }
  z->m_parent = y;
  if (y == NULL)
    m_root = z;
  else if (z->m_key < y->m_key)
    y->m_left = z;
  else
    y->m_right = z;
}

void Btree::print(){

  if (m_root == NULL)
    return;

  else {
    cout << "Depth first:" << endl;
    printInOrder(m_root);
    cout << endl << "Breadth first:" << endl;
    Queue q;
    Node *tmp = m_root;

    q.enqueue(tmp);

    while (!q.empty()) {

      tmp = q.dequeue();

      cout << tmp->m_key << " ";

      if (tmp->m_left != NULL)
        q.enqueue(tmp->m_left);
      if (tmp->m_right != NULL)
        q.enqueue(tmp->m_right);
    }
    cout << endl;
  }

}

void Btree::printInOrder(Node *n){
  if (n != NULL){
    printInOrder(n->m_left);
    cout << n->m_key <<  " ";
    printInOrder(n->m_right);
  }
}

Btree::Node *Btree::search(Node *n, int key){
  if (n == NULL){
    return NULL;
  }
  else if (n->m_key == key){
    return n;
  }
  else if (key < n->m_key)
    return search(n->m_left, key);
  else
    return search(n->m_right, key);
}

Btree::Node *Btree::min(Node *n){
  Node *tmp = n;
  while (tmp->m_left != NULL)
    tmp = tmp->m_left;
  return tmp;
}

int Btree::max(){
  if (m_root == NULL) 
    return 0;

  Node *n = m_root;
  while (n->m_right != NULL)
    n = n->m_right;
  return n->m_key;
}

void Btree::transplant(Node *u, Node *v){

  if (u->m_parent == NULL)
    m_root = v;
  else if (u == u->m_parent->m_left)
    u->m_parent->m_left = v;
  else
    u->m_parent->m_right = v;

  if (v != NULL)
    v->m_parent = u->m_parent;

}


void Btree::treeDelete(int key){

  if (m_root == NULL){
    cout << "tree is already empty." << endl;
    return;
  }

  Node *z = search(m_root, key);

  if (z->m_left == NULL)
    transplant(z, z->m_right);
  else if (z->m_right == NULL)
    transplant(z, z->m_left);
  else {
    Node *y = min(z->m_right);
    if (y->m_parent != z){
      transplant(y, y->m_right);
      y->m_right = z->m_right;
      y->m_right->m_parent = y;
    }
    transplant(z, y);
    y->m_left = z->m_left;
    y->m_left->m_parent = y;
  }

}

void Btree::Queue::enqueue(Node *key){
  if (empty()){
    m_front = new QueueNode(key);
    return;
  }

  QueueNode *tmp = m_front;
  while (tmp->m_prev != NULL)
    tmp = tmp->m_prev;
  tmp->m_prev = new QueueNode(key);
  tmp->m_prev->m_next = tmp;

}

Btree::Node *Btree::Queue::dequeue(){
  if (empty())
    return 0;

  QueueNode *tmp = m_front;

  Node *i = tmp->m_key;
  m_front = m_front->m_prev;


  delete tmp;
  return i;
}

int Btree::Queue::length(){
  if (empty())
    return 0;
  int i = 1;

  QueueNode *tmp = m_front;
  while (tmp->m_prev != NULL){
    i++;
    tmp = tmp->m_prev;
  }

  return i;
}

void Btree::Queue::print(){
  if (m_front == NULL)
    return;

  QueueNode *tmp = m_front;

  while (tmp->m_prev != NULL){
    cout << tmp->m_key->m_key << " ";
    tmp = tmp->m_prev;
  }
  cout << tmp->m_key->m_key << endl;

}

bool Btree::Queue::empty(){
  if (m_front == NULL)
    return true;

  return false;
}
