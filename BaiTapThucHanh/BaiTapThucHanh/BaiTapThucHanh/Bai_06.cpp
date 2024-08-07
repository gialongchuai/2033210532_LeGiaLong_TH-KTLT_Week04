/*
	Đếm số chữ số nguyên dương n.
*/

#include <stdio.h>
#include <stdlib.h>

// Ham de quy de dem so chu so cua mot so nguyen duong
int DemChuSo(int n) {
	// Dieu kien dung: neu n nho hon 10 thi chi co 1 chu so
	if (n < 10)
		return 1;
	// Goi de quy: chia n cho 10 va cong 1 vao ket qua
	else
		return 1 + DemChuSo(n / 10);
}

int main() {
	int n;

	// Yeu cau nguoi dung nhap so nguyen duong
	printf("Nhap mot so nguyen duong: ");
	scanf("%d", &n);

	// Kiem tra neu so n la so nguyen duong
	if (n <= 0) {
		printf("Vui long nhap mot so nguyen duong!\n");
	}
	else {
		// Goi ham de quy va hien thi ket qua
		int soChuSo = DemChuSo(n);
		printf("So chu so cua so da nhap la: %d\n", soChuSo);
	}

	system("pause");
	return 0;
}
