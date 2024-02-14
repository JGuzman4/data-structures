package main

import (
	"golangDS/pkg/linkedList"
	"golangDS/pkg/queue"
	"golangDS/pkg/stack"
)

func main() {
	l := linkedList.NewLinkedList()
	l.Insert(1)
	l.Insert(7)
	l.Insert(8)
	l.Insert(4)
	l.Insert(6)

	s := stack.NewStack()
	s.Push(1)
	s.Push(2)
	s.Push(3)
	s.Push(4)

	q := queue.NewQueue()
	q.Enqueue(8)
	q.Enqueue(9)
	q.Enqueue(1)
	q.Enqueue(5)
	q.Enqueue(4)

	l.Print()
	l.Remove(8)
	l.Print()

	s.Print()
	s.Pop()
	s.Pop()
	s.Print()

	q.Print()
	q.Dequeue()
	q.Print()
}
