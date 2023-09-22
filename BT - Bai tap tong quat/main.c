#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dataList[10];
	int a = 1, x, index = 0, i, tg, n, count = 0, y, j;
		
	while(a != 6) {
		printf("\n1. Nhap vao so nguyen x ");
		printf("\n2. Sap xep theo thu tu tang dan");
		printf("\n3. Tim kiem phan tu trong mang");
		printf("\n4. Xoa phan tu trong mang");
		printf("\n5. Hien thi");
		printf("\n6. Thoat");
		printf("\nVui long lua chon: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &a);
		printf("\n");
			
		switch(a) {
			case 1:
				printf("Nhap phan tu vao mang: ");
				scanf("%d", &x);
				dataList[index++] = x;
				
				break;
			case 2:
				for(i = 0; i < index; i++) {
					for(j = i + 1; j < index; j++) {
						if(dataList[i] > dataList[j]) {
							tg = dataList[i];
							dataList[i] = dataList[j];
							dataList[j] = tg; 
						}
					}
				}
				printf("Mang da sap xep la: ");
				for(i = 0; i < index; i++) {
					printf("%d ", dataList[i]);
				}
				printf("\n");
				
				break;
			case 3:
				printf("Nhap so can tim: ");
				scanf("%d", &n);
				for(i = 0; i < index; i++) {
					if(dataList[i] == n) {
						count++;
					}
				}
				printf("\nSo phan tu co gia tri bang so can tim trong mang la: %d", count);
				printf("\n");
				
				break;	
			case 4:
				j = 0;
				printf("Nhap so muon xoa: ");
				scanf("%d", &y);
				int newdataList[100];
				for(i = 0; i < index; i++) {
					if(dataList[i] != y) {
						newdataList[j++] = dataList[i];
					}
				}
				index = j;
				for(i = 0; i < index; i++) {
					dataList[i] = newdataList[i];
				}
				
				break;
			case 5:
				printf("Mang moi la: ");
				for(i = 0; i < index; i++) {
					printf("%d ", dataList[i]);
				}
				
				break;
			case 6:
				printf("Thoat!");
				
				break;
			default:
				printf("Nhap sai. Vui long nhap lai");
				
				break;
		} 
	}
	return 0;
}
