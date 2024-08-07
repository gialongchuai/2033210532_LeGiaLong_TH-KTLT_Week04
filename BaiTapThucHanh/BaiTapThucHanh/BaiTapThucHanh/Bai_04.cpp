/*
	. Cho dãy số An theo các công thức quy nạp như sau, hãy viết chương trình tính số 
	hạng thứ n, với n là số nguyên dương
*/

#include <stdio.h>

#include <stdlib.h>
// Function for part a
int sequence_a(int n) {
	if (n == 0) return 1;
	if (n == 1) return 0;
	if (n == 2) return -1;
	return 2 * sequence_a(n - 1) - 3 * sequence_a(n - 2) - sequence_a(n - 3);
}

// Function for part b
int sequence_b(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3) return 3;
	return 2 * sequence_b(n - 1) + sequence_b(n - 2) - 3 * sequence_b(n - 3);
}

int main() {
	int n;

	printf("Nhap so hang thu n (a): ");
	scanf("%d", &n);
	printf("So hang thu %d cua day so (a) la: %d\n", n, sequence_a(n));

	printf("Nhap so hang thu n (b): ");
	scanf("%d", &n);
	printf("So hang thu %d cua day so (b) la: %d\n", n, sequence_b(n));

	system("pause");
	return 0;
}
