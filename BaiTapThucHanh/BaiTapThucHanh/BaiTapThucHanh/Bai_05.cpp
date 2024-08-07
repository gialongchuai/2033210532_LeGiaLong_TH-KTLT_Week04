/*
	Cho dãy số xn, Viết hàm đệ quy tính xn với 𝑛 ≥ 0.
*/

#include <stdio.h>
#include <stdlib.h>

// Recursive function to calculate xn
int calculate_xn(int n) {
	if (n == 0) return 1;
	if (n == 1) return 2;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (n - i) * calculate_xn(i);
	}
	return sum;
}

int main() {
	int n;

	printf("Nhap so hang thu n: ");
	scanf("%d", &n);
	printf("So hang thu %d cua day so la: %d\n", n, calculate_xn(n));
	system("pause");

	return 0;
}
