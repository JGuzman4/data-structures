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


void List::push_back(int key){
  if (m_head == NULL){
    m_head = new Node(key);
    return;
  }
  else {
    Node *tmp = m_head;

    while (tmp->m_next != NULL)
      tmp = tmp->m_next;

    tmp->m_next = new Node(key);
    tmp->m_next->m_prev = tmp;
  }
}

void List::push_front(int key){
  if (m_head == NULL){
    m_head = new Node(key);
    return;
  }
  Node *tmp = m_head;
  m_head = new Node(key);
  m_head->m_next = tmp;

}

void List::remove(int key){
  if (m_head == NULL)
    return;

    Node *tmp = m_head;
    while (tmp->m_next != NULL){
      if (tmp->m_key == key){
        tmp->m_prev->m_next = tmp->m_next;

        delete tmp;
        return;
      }
      tmp = tmp->m_next;
    }
}

void List::print(){
  if (m_head == NULL)
    return;

  Node *tmp = m_head;

  while (tmp->m_next != NULL){
    cout << tmp->m_key << " ";
    tmp = tmp->m_next;
  }
  cout << tmp->m_key << endl;

}
