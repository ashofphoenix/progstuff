package main

import "fmt"
import "math"

func main() {
	//var i int;
	i := math.Pow(10,7)
	fmt.Println(i)
	fmt.Printf("i is of type %T\n", i)

	var a [5]int
	fmt.Printf("a is of type %T\n",a)
	fmt.Printf("a len=%d cap=%d %v\n", len(a), cap(a), a)
	a[0] = 1
	fmt.Printf("a len=%d cap=%d %v\n", len(a), cap(a), a)
}

