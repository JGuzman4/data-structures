package main

import (
	"golangDS/pkg/linkedList"
	"golangDS/pkg/stack"
)

func main() {
	list := linkedList.NewLinkedList()
	list.Insert(1)
	list.Insert(7)
	list.Insert(8)
	list.Insert(4)
	list.Insert(6)

	stck := stack.NewStack()
	stck.Push(1)
	stck.Push(2)
	stck.Push(3)
	stck.Push(4)

	list.Print()
	list.Remove(8)
	list.Print()

	stck.Print()
	stck.Pop()
	stck.Pop()
	stck.Print()
}
