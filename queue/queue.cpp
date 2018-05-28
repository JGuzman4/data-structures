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

void Queue::enqueue(int key){
  if (empty()){
    m_front = new Node(key);
    return;
  }

  Node *tmp = m_front;
  while (tmp->m_prev != NULL)
    tmp = tmp->m_prev;
  tmp->m_prev = new Node(key);
  tmp->m_prev->m_next = tmp;

}

int Queue::dequeue(){
  if (empty())
    return 0;

  Node *tmp = m_front;

  int i = tmp->m_key;
  m_front = m_front->m_prev;


  delete tmp;
  return i;
}

int Queue::length(){
  if (empty())
    return 0;
  int i = 1;

  Node *tmp = m_front;
  while (tmp->m_prev != NULL){
    i++;
    tmp = tmp->m_prev;
  }

  return i;
}

void Queue::print(){
  if (m_front == NULL)
    return;

  Node *tmp = m_front;

  while (tmp->m_prev != NULL){
    cout << tmp->m_key << " ";
    tmp = tmp->m_prev;
  }
  cout << tmp->m_key << endl;

}

bool Queue::empty(){
  if (m_front == NULL)
    return true;

  return false;
}
