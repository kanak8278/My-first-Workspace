package main

import (
	"fmt"
)

func main() {
	fmt.Println("Hello, playground")
	arr := [10]float64{0, 1, 2, 3, 4, 5, 6}

	slice1 := arr[0:5];

	fmt.Println(slice1)

	//slice2:= append(slice1, arr)
	//fmt.Println(slice1, slice2)
	slice3 := make([]float64, 2)

	copy(slice3, slice1)
	fmt.Println(slice3)

	months:=[12]string{1:"Jan", 2:"Feb", 3:"March", 6:"June", 4:"April", 5:"May" }
	fmt.Println(months)
	winter:= months[1:3]
	for i, v:= range winter{
		fmt.Println(i, v)
	}
}
