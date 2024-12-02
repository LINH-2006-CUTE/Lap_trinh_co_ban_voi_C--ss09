#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[10];
    int size = 0; 
    int choice, num, count, sum;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so luong phan tu: ", 8);
                scanf("%d", &size);
                if (size > 8) {
                    printf("Loi\n");
                    size =8;
                }
                printf("Nhap cac phan tu:\n");
                for (int i = 0; i < size; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2: 
                printf("Gia tri cac phan tu: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3: 
                sum = 0;
                printf("Cac phan tu chan: ");
                for (int i = 0; i < size; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sum);
                break;

            case 4: 
                if (size > 0) {
                    int max = arr[0];
                    int min = arr[0];
                    for (int i = 1; i < size; i++) {
                        if (arr[i] > max) 
						max = arr[i];
                        if (arr[i] < min) 
						min = arr[i];
                    }
                    printf("Gia tri lon nhat: %d\n", max);
                    printf("Gia tri nho nhat: %d\n", min);
                } else {
                    printf("Loi\n");
                }
                break;

            case 5: 
                sum = 0;
                printf("Cac phan tu la so nguyen to: ");
                for (int i = 0; i < size; i++) {
                    if (arr[i]) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu la so nguyen to: %d\n", sum);
                break;

            case 6: 
                printf("Nhap mot so: ");
                scanf("%d", &num);
                count = 0;
                for (int i = 0; i < size; i++) {
                    if (arr[i] == num) {
                        count++;
                    }
                }
                
            while("Chon lai"); 
             
