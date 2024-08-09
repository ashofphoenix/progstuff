package main

import "fmt"

func factorial(x int) int {
	if x == 1{
		return 1
	}
	return x * factorial(x -1)
}

func square(x int) int {
	if x == 0{
		return 0
	}
	if x == 1{
		return 1
	} else {
		return square(x-1) + 2*x -1 
	}
	
}

func main() {
	fmt.Println("factorial of 4 is:", factorial(4))
	fmt.Println("square of 4 is:",square(4))
}
