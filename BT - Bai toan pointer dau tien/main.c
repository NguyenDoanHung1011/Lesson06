#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p, i, sum = 0;
	p = (int *) calloc (10, sizeof(int));
	
	for(i = 0; i < 10; i++) {
		printf("Nhap du lieu p[%d]: ", i);
		scanf("%d", p + i);
	}
	
	for(i = 0;i < 10; i++) {
		if(p[i] % 2 == 0) {
			sum += p[i];
		}
	}
	printf("Tong cac so chia het cho 2 trong p la %d", sum);
	return 0;
}
