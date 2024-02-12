package main

import (
	"fmt"
	"golangDS/pkg/linkedList"
)

func main() {
	list := linkedList.NewLinkedList()
	list.Insert(1)
	list.Insert(7)
	list.Insert(8)
	list.Insert(4)
	list.Insert(6)

	fmt.Println("BEFORE:")
	list.Print()
	list.Remove(8)
	fmt.Println("AFTER:")
	list.Print()
}
