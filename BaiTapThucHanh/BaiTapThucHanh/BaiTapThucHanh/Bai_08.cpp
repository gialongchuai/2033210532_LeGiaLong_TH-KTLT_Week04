/*
	Xuất dãy số Fibonaci mà giá trị các số nhỏ hơn m.
*/

#include <stdio.h>
#include <stdlib.h>
// Hàm tính số Fibonacci thứ n
int fibonacci(int n) {
	if (n <= 2) {
		return 1; // Fibonacci(1) và Fibonacci(2) đều bằng 1
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2); // Đệ quy tính số Fibonacci
	}
}

// Hàm in dãy số Fibonacci nhỏ hơn m
void printFibonacciLessThan(int m) {
	int i = 1;
	int fib;

	// In các số Fibonacci cho đến khi giá trị lớn hơn hoặc bằng m
	while ((fib = fibonacci(i)) < m) {
		printf("%d ", fib);
		i++;
	}
	printf("\n");
}

int main() {
	int m;

	// Nhap vao gia tri m
	printf("Nhap gia tri m: ");
	scanf("%d", &m);

	// Xuat dãy số Fibonacci nhỏ hơn m
	printf("Dai so Fibonacci nho hon %d la: ", m);
	printFibonacciLessThan(m);

	system("pause");
	return 0;
}
