#include <stdio.h>

#include <stdlib.h>

int main() {
    int arr[10];
    int choice, num , index;
	int size = 0; 
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Nhap so luong phan tu (toi da %d): ", 6);
                scanf("%d", &size);
                if (size > 6) {
                    printf("Loi\n");
                    size = 6;
                }
                printf("Nhap cac phan tu:\n");
                for (int i = 0; i < size; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2: 
                printf("Mang: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                if (size < 6) {
                    printf("Nhap phan tu can them: ");
                    scanf("%d", &num);
                    arr[size] = num;
                    size++;
                } else {
                    printf("Loi\n");
                }
                break;

            case 4: 
                printf("Nhap vi tri phan tu can sua (0 - %d): ", size - 1);
                scanf("%d", &index);
                if (index >= 0 && index < size) {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &arr[index]);
                } else {
                    printf("Vi tri khong hop le.\n");
                }
                break;

            case 5: 
                printf("Nhap vi tri phan tu can xoa : ", size - 1);
                scanf("%d", &index);
                if (index >= 0 && index < size) {
                    for (int i = index; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                } else {
                    printf("Vi tri khong hop le.\n");
                }
                break;

            case 6: 
                printf("Thoat\n");
                exit(0);
  
        }
    }
       while("chon lai\n");

    return 0;
}
