package main

import "fmt"

func main() {
	var test int
	fmt.Scanf("%d",&test)
	fmt.Println(test)

	for i := 0;i < test;i++ {
		var sum,input int
		fmt.Scanf("%d",&input)
		for j := 0;j < input;j++ {
			var num int
			fmt.Scanf("%d",&num)
			if num > 0 {
				sum += num * num
			}
		}
		fmt.Println("sum of sq is:",sum)
	}
}
