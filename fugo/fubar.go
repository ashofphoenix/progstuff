package main

import (
	"fmt"
	// "math/rand"
	"os"
)

func main() {
	d := []byte{115, 111, 109, 102, 10}
	f, _ := os.Create("/tmp/dat2")

	_, err := f.Write(d)

	if (err != nil){
		panic(err)
	}

	d1 := []byte("hello\ngo\n")
	fmt.Println(d1)
}