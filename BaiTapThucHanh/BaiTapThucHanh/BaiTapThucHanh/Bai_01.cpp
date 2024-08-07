/*

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// Ham de quy va khong de quy cho bieu thuc 1: S(n) = 1 + 2 + ... + n
int dequy_S1(int n) {
	if (n == 1) return 1;
	return n + dequy_S1(n - 1);
}

int khongdequy_S1(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

// Ham de quy va khong de quy cho bieu thuc 2: S(n) = sqrt(5 + sqrt(5 + ... + sqrt(5 + 5)))
double dequy_S2(int n) {
	if (n == 1) return sqrt(5.0);
	return sqrt(5.0 + dequy_S2(n - 1));
}

double khongdequy_S2(int n) {
	double sum = 5.0;
	for (int i = 1; i < n; i++) {
		sum = sqrt(5.0 + sum);
	}
	return sum;
}

// Ham de quy va khong de quy cho bieu thuc 3: S(n) = 1/2 + 2/3 + ... + n/(n+1)
double dequy_S3(int n) {
	if (n == 1) return 1.0 / 2.0;
	return ((double)n / (n + 1)) + dequy_S3(n - 1);
}

double khongdequy_S3(int n) {
	double sum = 0.0;
	for (int i = 1; i <= n; i++) {
		sum += (double)i / (i + 1);
	}
	return sum;
}

// Ham de quy va khong de quy cho bieu thuc 4: S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n+1)
double dequy_S4(int n) {
	if (n == 0) return 1.0;
	return 1.0 / (2 * n + 1) + dequy_S4(n - 1);
}

double khongdequy_S4(int n) {
	double sum = 0.0;
	for (int i = 0; i <= n; i++) {
		sum += 1.0 / (2 * i + 1);
	}
	return sum;
}

// Ham de quy va khong de quy cho bieu thuc 5: S(n) = 1.2 + 2.3 + 3.4 + ... + n.(n+1)
double dequy_S5(int n) {
	if (n == 1) return 1.2;
	return n * (n + 1) + dequy_S5(n - 1);
}

double khongdequy_S5(int n) {
	double sum = 0.0;
	for (int i = 1; i <= n; i++) {
		sum += i * (i + 1);
	}
	return sum;
}

int main() {
	int n, choice;
	printf("Nhap n: ");
	scanf("%d", &n);

	printf("Chon bieu thuc de tinh toan:\n");
	printf("1. S(n) = 1 + 2 + ... + n\n");
	printf("2. S(n) = sqrt(5 + sqrt(5 + ... + sqrt(5 + 5)))\n");
	printf("3. S(n) = 1/2 + 2/3 + ... + n/(n+1)\n");
	printf("4. S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n+1)\n");
	printf("5. S(n) = 1.2 + 2.3 + 3.4 + ... + n.(n+1)\n");
	printf("Nhap lua chon cua ban: ");
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		printf("Ket qua (de quy) bieu thuc 1: %d\n", dequy_S1(n));
		printf("Ket qua (khong de quy) bieu thuc 1: %d\n", khongdequy_S1(n));
		break;
	case 2:
		printf("Ket qua (de quy) bieu thuc 2: %.10f\n", dequy_S2(n));
		printf("Ket qua (khong de quy) bieu thuc 2: %.10f\n", khongdequy_S2(n));
		break;
	case 3:
		printf("Ket qua (de quy) bieu thuc 3: %.10f\n", dequy_S3(n));
		printf("Ket qua (khong de quy) bieu thuc 3: %.10f\n", khongdequy_S3(n));
		break;
	case 4:
		printf("Ket qua (de quy) bieu thuc 4: %.10f\n", dequy_S4(n));
		printf("Ket qua (khong de quy) bieu thuc 4: %.10f\n", khongdequy_S4(n));
		break;
	case 5:
		printf("Ket qua (de quy) bieu thuc 5: %.10f\n", dequy_S5(n));
		printf("Ket qua (khong de quy) bieu thuc 5: %.10f\n", khongdequy_S5(n));
		break;
	default:
		printf("Lua chon khong hop le.\n");
		break;
	}

	system("pause");
	return 0;
}
