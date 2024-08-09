package main

import "fmt"

func findSquareSum(x int){
	var sum,num int
	if x > 0 {
		fmt.Scanf("%d", &num)
		if num > 0 {
			sum = num * num
		}
		findSquareSum(x-1)
	}
	fmt.Println(sum)
}

func readTest(x int){
	var input int
	if x > 0{
		fmt.Scanf("%d", &input)
		//fmt.Println(input)
		findSquareSum(input)
		fmt.Println("--------")
		readTest(x-1)
	}
}

func main() {
	var test int

	fmt.Scanf("%d", &test)
	fmt.Println("cases are: ", test)

	readTest(test)
}
