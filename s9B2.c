#include <stdio.h>

int main(){
	int index, num;
	int arr[100] = {1, 3, 7, 8 ,9, 11 };
	
	printf("Phan tu ban dau: ");
	for ( int i = 0; i< 6; i++){
		printf( "\n%d", arr[i]);
	}
	
	printf("\nPhan tu muon sua: ");
	scanf("%d", &index);
	
	if ( index > 6 || index < 0){
		printf("Vi tri khong hop le!");
		return 1;
	}
	
	printf("Gia tri muon sua: ");
	scanf("%d", &num);
	
	arr[index-1] = num;
	
	printf("\nPhan tu moi: ");
	for ( int i = 0; i<6 ; i++){
		printf("\n%d", arr[i]);
	}
	
	return 0;
}



 
