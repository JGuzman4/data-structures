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

#include "stack.h"

void Stack::push(int key){
  if (empty()){
    m_top = new Node(key);
    return;
  }

  Node *tmp = m_top;
  m_top->m_prev = new Node(key);
  m_top = m_top->m_prev;
  m_top->m_next = tmp;

}

int Stack::pop(){
  if (empty())
    return 0;
  int i = m_top->m_key;

  Node *tmp = m_top;
  m_top = m_top->m_next;
  delete tmp;
  return i;
}

int Stack::length(){
  if (empty())
    return 0;
  int i = 1;

  Node *tmp = m_top;
  while (tmp->m_next != NULL){
    i++;
    tmp = tmp->m_next;
  }

  return i;
}

void Stack::print(){
  if (m_top == NULL)
    return;

  Node *tmp = m_top;

  while (tmp->m_next != NULL){
    cout << tmp->m_key << endl;
    tmp = tmp->m_next;
  }
  cout << tmp->m_key << endl;

}

bool Stack::empty(){
  if (m_top == NULL)
    return true;

  return false;
}
