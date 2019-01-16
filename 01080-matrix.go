package main

import "fmt"

var N int
var M int
var tmp int
var cnt int
var matrix [2][50][50]int

func GetInput() {
	fmt.Scanf("%d %d", &N, &M)

	for r := 0; r < 2; r++ {
		for i := 0; i < N; i++ {
			for j := 0; j < M; j++ {
				fmt.Scanf("%c", &tmp)
				matrix[r][i][j] = tmp - '0'
			}
			fmt.Scanf("%c", &tmp) // Ignore \n
		}
	}
}

func CheckIsSameMatrix() bool {
	for i := 0; i < N; i++ {
		for j := 0; j < M; j++ {
			if matrix[0][i][j] != matrix[1][i][j] {
				return false
			}
		}
	}
	return true
}

func PrintMatrix() {

	fmt.Println("")

	for r := 0; r < 2; r++ {
		for i := 0; i < N; i++ {
			for j := 0; j < M; j++ {
				fmt.Printf("%d", matrix[r][i][j])
			}
			fmt.Println("")
		}
	}

	fmt.Println("")
}

func ChangeMatrixSomePart(x int, y int) {
	for i := y; i < y+3; i++ {
		for j := x; j < x+3; j++ {
			matrix[0][i][j] = 1 - matrix[0][i][j]
		}
	}
}

func ChangeMatrix() {
	for i := 0; i < N-2; i++ {
		for j := 0; j < M-2; j++ {
			if matrix[0][i][j] != matrix[1][i][j] {
				ChangeMatrixSomePart(j, i)
				PrintMatrix()
				cnt++
			}
		}
	}
}

func CheckAndPrintAvailable() {
	if CheckIsSameMatrix() {
		fmt.Printf("%d", cnt)
	} else {
		fmt.Printf("%d", -1)
	}
}

func main() {
	GetInput()
	ChangeMatrix()
	CheckAndPrintAvailable()
}
