#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//bai1
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);
	int t[N];
	
	if(N < 2) {
		printf("Vui long nhap lai N: ");
		scanf("%d", &N);
	} else {
		for(int i = 0; i < N; i++) {
			printf("Nhap t[%d] = ", i);
			scanf("%d", &t[i]);
		}
		
		printf("Danh sach ban dau: ");
		for(int i = 0; i < N; i++) {
			printf("%d ", t[i]);
		}
		
		printf("\nDanh sach nguoc: ");
		for(int i = N - 1; i >= 0; i--) {
			printf("%d ", t[i]);
		}
	}
	
	//bai2
	printf("\n==========");
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);
	int a[n];
	int b[n];
	int i, j;
	
	if(n < 2) {
		printf("Vui long nhap lai n: ");
		scanf("%d", &n);
	} else {
		for(i = 0; i < n; i++) {
			printf("Nhap a[%d] = ", i);
			scanf("%d", &a[i]);
		}
		
		printf("Danh sach ban dau: ");
		for(i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}
		
		i = n;
		
		for(j = 0; j < n; j++) {
			i--;
			b[j] = a[i];
		}
		
		j = 0;
		
		for(i = 0; i < n; i++) {
			a[i] = b[j];
			j++;
		}
		
		printf("\nMang a nguoc: ");
		for(i = 0; i < n; i++) {
			printf("%d ", a[i]);
		}
	}
	return 0;
}
