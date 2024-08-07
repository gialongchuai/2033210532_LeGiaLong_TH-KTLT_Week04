/*
	Tìm số Fibonaci thứ n. Biết rằng: 
𝐹𝑖𝑏𝑜𝑛𝑎𝑐𝑖(𝑛) thỏa
	- 1 𝑣ớ𝑖 𝑛 ≤ 2
	- 𝐹𝑖𝑏𝑜𝑛𝑎𝑐𝑖(𝑛 − 1) + 𝐹𝑖𝑏𝑜𝑛𝑎𝑐𝑖(𝑛 − 2) 𝑣ớ𝑖 𝑛 > 2*/#include <stdio.h>
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

int main() {
	int n;

	// Nhap vao so n
	printf("Nhap so n: ");
	scanf("%d", &n);

	// Xuat ket qua
	printf("So Fibonacci thu %d la: %d\n", n, fibonacci(n));

	system("pause");
	return 0;
}
