package main

import (
	"fmt"
)

func main() {
	var x map[int]string
	x= make(map[int]string)
	x[11] = "Eleven"
	x[15] = "Fifteen"
	x[22] = "Twenty Two"
	fmt.Println(x[11])
	delete(x, 15)

	fmt.Println(x);


}