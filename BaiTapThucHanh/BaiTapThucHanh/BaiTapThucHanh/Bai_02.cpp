/*
	Bài 2. Viết hàm tìm ước chung lớp nhất của 2 số nguyên dương a, b.
	Gợi ý: Nếu a>b thì UCLN (a, b) = UCLN (b, a-b), 
	ngược lại UCLN (a, b) = UCLN (a, b-a)
*/

#include <stdio.h>
#include <stdlib.h>
// Ham tim UCLN cua hai so nguyen duong a va b
int tim_UCLN(int a, int b) {
	if (a == b)
		return a;
	if (a > b)
		return tim_UCLN(a - b, b);
	else
		return tim_UCLN(a, b - a);
}

int main() {
	int a, b;

	// Nhap hai so nguyen duong a va b
	printf("Nhap so nguyen duong a: ");
	scanf("%d", &a);
	printf("Nhap so nguyen duong b: ");
	scanf("%d", &b);

	// Kiem tra dieu kien dau vao
	if (a <= 0 || b <= 0) {
		printf("a va b phai la cac so nguyen duong.\n");
		return 1;
	}

	// Tim va in ra UCLN cua a va b
	int ucln = tim_UCLN(a, b);
	printf("UCLN cua %d va %d la: %d\n", a, b, ucln);

	system("pause");
	return 0;
}
