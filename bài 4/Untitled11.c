#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, i, a, b;

    while (1) {
        printf("\nMENU\n1. Nhap vao mang\n2. Hien thi mang\n3. Them phan tu\n4. Sua phan tu\n5. Xoa phan tu\n6. Thoat\nLua chon: ");
        scanf("%d", &choice);

        if (choice == 1) { 
            printf("Nhap so phan tu: ");
            scanf("%d", &n);
            printf("Nhap %d phan tu:\n", n);
            for (i = 0; i < n; i++) scanf("%d", &arr[i]);
        } else if (choice == 2) { 
            for (i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } else if (choice == 3) {
            printf("Vi tri them (1->%d): ", n + 1);
            scanf("%d", &a);
            printf("Gia tri them: ");
            scanf("%d", &b);
            for (i = n; i >= a; i--) arr[i] = arr[i - 1];
            arr[a - 1] = b;
            n++;
        } else if (choice == 4) { 
            printf("Vi tri can sua (1->%d): ", n);
            int ind;
            scanf("%d", &ind);
            printf("dien vao gia tri moi: ");
            scanf("%d", &b);
            arr[a - 1] = b;
        } else if (choice == 5) { 
            printf("Vi tri can xoa (1->%d): ", n);
            scanf("%d", &a);
            for (i = a - 1; i < n - 1; i++) arr[i] = arr[i + 1];
            n--;
        } else if (choice == 6) break; 
        else printf("Lua chon khong phu hop!\n");
    }

    return 0;
}
