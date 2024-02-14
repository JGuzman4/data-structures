package stack

import "fmt"

type stack struct {
	top *node
}

type node struct {
	next  *node
	value int
}

func NewStack() stack {
	return stack{
		top: nil,
	}
}

func (s *stack) Push(val int) {
	if s.top == nil {
		s.top = &node{
			value: val,
			next:  nil,
		}
		return
	}
	tmp := s.top
	s.top = &node{
		value: val,
		next:  tmp,
	}
}

func (s *stack) Pop() int {
	val := s.top.value
	s.top = s.top.next
	return val
}

func (s *stack) Peek() int {
	return s.top.value
}

func (s *stack) IsEmpty() int {
	if s.top == nil {
		return 0
	} else {
		return 1
	}
}

func (s stack) Print() {
	if s.top == nil {
		return
	}
	runner := s.top
	fmt.Print(runner.value, " ")
	for runner.next != nil {
		runner = runner.next
		fmt.Print(runner.value, " ")
	}
	fmt.Println()
}
