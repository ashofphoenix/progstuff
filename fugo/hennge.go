package main

import "fmt"

func findSquareSum(x int, a []int, iteration int) {
	var num int
	if x > 0 {
		fmt.Scanf("%d", &num)
		if num > 0 {
			a[iteration-1] += num * num
		}
		findSquareSum(x-1, a, iteration)
	}
}

func readTest(x int, a []int){
	var input int
	if x > 0{
		fmt.Scanf("%d", &input)
		findSquareSum(input,a,x)
		readTest(x-1,a)
	}
}

func printResult(x int, a []int){
	if (x > 0){
		fmt.Println(a[x-1])
		printResult(x-1,a)
	}
}

func main() {
	var test int

	fmt.Scanf("%d", &test)

	a := make([]int, test)

	readTest(test,a)
	
	printResult(test,a)
}
