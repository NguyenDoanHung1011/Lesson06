#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);
	int t[N];
	
	for(int i = 0; i < N; i++) {
		printf("Nhap t[%d] = ", i);
		scanf("%d", &t[i]);
	}
	
	int tg;
    
	for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if(t[i] < t[j]){
                tg = t[i];
                t[i] = t[j];
                t[j] = tg;        
            }
        }
    }
    printf("\nMang da sap xep la: ");
    for(int i = 0; i < N; i++){
        printf("%d ", t[i]);
    }
		
	return 0;
}
