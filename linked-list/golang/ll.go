package main

import "fmt"

type linkedList struct {
	head *node
}

type node struct {
	next  *node
	value int
}

func newLinkedList() linkedList {
	ll := linkedList{}
	ll.head = nil
	return ll
}

func (ll *linkedList) insert(val int) {
	if ll.head == nil {
		n := node{
			next:  nil,
			value: val,
		}
		ll.head = &n
		return
	}
	runner := ll.head
	for runner.next != nil {
		runner = runner.next
	}
	runner.next = &node{
		next:  nil,
		value: val,
	}
}

func (ll *linkedList) remove(val int) {
	if ll.head.value == val {
		ll.head = ll.head.next
	}
	runner := ll.head
	for runner.next != nil {
		if runner.next.value == val {
			runner.next = runner.next.next
			return
		} else {
			runner = runner.next
		}
	}
}

func (ll linkedList) print() {
	if ll.head == nil {
		return
	}
	runner := ll.head
	fmt.Print(runner.value, " ")
	for runner.next != nil {
		runner = runner.next
		fmt.Print(runner.value, " ")
	}
	fmt.Println()
}
