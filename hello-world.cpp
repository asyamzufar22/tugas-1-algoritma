#include <stdio.h>

int main(){
	int hargaBeli;
	int hargaJual;
	int profit;
	
	printf("Masukkan harga Beli\n");
	scanf("%d", &hargaBeli);
	printf("Masukkan harga Jual\n");
	scanf("%d", &hargaJual);

	profit = hargaJual - hargaBeli;
	if(profit < 0){
		printf("Rugi: ");
	}else{
		printf("Untung: ");
	}
	printf("%d", profit);
}
