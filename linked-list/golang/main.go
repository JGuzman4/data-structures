package main

import "fmt"

func main() {
	list := newLinkedList()
	list.insert(1)
	list.insert(7)
	list.insert(8)
	list.insert(4)
	list.insert(6)

	fmt.Println("BEFORE:")
	list.print()
	list.remove(8)
	fmt.Println("AFTER:")
	list.print()
}
