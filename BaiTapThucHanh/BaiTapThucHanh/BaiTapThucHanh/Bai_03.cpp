/*
	 Viết hàm tìm giá trị phần tử thứ n của cấp số cộng có hạng đầu là a, công sai là r:
𝑈𝑛 = thỏa 2 điều kiện
	- 𝑎 , 𝑛ế𝑢 𝑛 = 1
	- 𝑈𝑛−1 + 𝑟, 𝑛ế𝑢 𝑛 > 1
*/

#include <stdio.h>

#include <stdlib.h>
// Ham de quy tim gia tri phan tu thu n cua cap so cong
int timGiaTriUn(int a, int r, int n) {
	if (n == 1) {
		return a;
	}
	else {
		return timGiaTriUn(a, r, n - 1) + r;
	}
}

int main() {
	int a, r, n;

	// Nhap gia tri a, r va n tu ban phim
	printf("Nhap gia tri cua a: ");
	scanf("%d", &a);
	printf("Nhap gia tri cua r: ");
	scanf("%d", &r);
	printf("Nhap gia tri cua n: ");
	scanf("%d", &n);

	// Goi ham de quy va in ket qua
	int ketQua = timGiaTriUn(a, r, n);
	printf("Gia tri cua phan tu thu %d cua cap so cong la: %d\n", n, ketQua);

	system("pause");
	return 0;
}
