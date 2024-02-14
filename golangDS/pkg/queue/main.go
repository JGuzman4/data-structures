package queue

import "fmt"

type queue struct {
	front *node
	back  *node
}

type node struct {
	next  *node
	prev  *node
	value int
}

func NewQueue() queue {
	return queue{
		front: nil,
		back:  nil,
	}
}

func (q *queue) Enqueue(val int) {
	if q.front == nil {
		q.front = &node{
			next:  nil,
			prev:  nil,
			value: val,
		}
		q.back = q.front
	} else {
		prevBack := q.back
		q.back = &node{
			next:  prevBack,
			prev:  nil,
			value: val,
		}
		prevBack.prev = q.back
	}
}

func (q *queue) Dequeue() int {
	prevFrontVal := q.front.value
	q.front = q.front.prev
	q.front.next = nil
	return prevFrontVal
}

func (q *queue) Print() {
	if q.back == nil {
		return
	}
	runner := q.back
	fmt.Print(runner.value, " ")
	for runner.next != nil {
		runner = runner.next
		fmt.Print(runner.value, " ")
	}
	fmt.Println()
}
