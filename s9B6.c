#include <stdio.h>
#include <stdlib.h>


int main() {
	int num; 
    int matrix[num][num];
    int row = 0, col = 0;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so hang: ");
                scanf("%d", &row);
                printf("Nhap so cot: ");
                scanf("%d", &col);

                printf("Nhap gia tri cho ma tran:\n");
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        printf("Phan tu [%d][%d]: ", i + 1, j + 1);
                        scanf("%d", &matrix[i][j]);
                    }
                }
                break;

            case 2: 
                printf("Gia tri cac phan tu cua ma tran:\n");
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < col; j++) {
                        printf("%d ", matrix[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3: 
                {
                    int sum = 0;
                    printf("Cac phan tu la le: ");
                    for (int i = 0; i < row; i++) {
                        for (int j = 0; j < col; j++) {
                            if (matrix[i][j] % 2 != 0) {
                                printf("%d ", matrix[i][j]);
                                sum += matrix[i][j];
                            }
                        }
                    }
                    printf("\nTong cac phan tu la le: %d\n", sum);
                }
                break;

            case 4:
                {
                    int val = 1;
                    int check= 1; 
                    printf("Cac phan tu nam tren duong bien: ");
                    for (int i = 0; i < row; i++) {
                        for (int j = 0; j < col; j++) {
                            if (i == 0 || i == row - 1 || j == 0 || j == col- 1) {
                                printf("%d ", matrix[i][j]);
                                val *= matrix[i][j];
                                check = 0;
                            }
                        }
                    }
                    if (check = 0) {
                        printf("Khong co phan tu nao tren duong bien.\n");
                    } else {
                        printf("\nTich cac phan tu nam tren duong bien: %d\n", val);
                    }
                }
                break;

            case 5: 
                printf("Cac phan tu nam tren duong cheo chinh: ");
                for (int i = 0; i < row && i < col; i++) {
                    printf("%d ", matrix[i][i]);
                }
                printf("\n");
                break;

            case 6: 
                printf("Cac phan tu nam tren duong cheo phu: ");
                for (int i = 0; i < row && i < col; i++) {
                         printf("%d ", matrix[i][col - 1 - i]);
                }
                printf("\n");
                break;

            case 7: 
                {
                    int maxSum = 0; 
                    int maxRow = 0; 

                  
                    for (int i = 0; i < row; i++) {
                        int rowSum = 0; 

                        for (int j = 0; j < col; j++) {
                            rowSum += matrix[i][j]; 
                        }

                        if (i == 0 || rowSum > maxSum) {
                            maxSum = rowSum; 
                            maxRow = i;
                        }
                    }

                    printf("Dong co tong gia tri lon nhat: ");
                    for (int j = 0; j < col; j++) {
                        printf("%d ", matrix[maxRow][j]); 
                    }
                    printf("\nTong gia tri: %d\n", maxSum); 
                }
                break;
            case 8: 
                printf("Thoat\n");
                break;

            default:
                printf("Chon lai.\n");
                break;
        }

    } while (choice != 8);

    return 0;
}
