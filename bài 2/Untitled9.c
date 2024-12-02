#include <stdio.h>

int main() {
    int arr[100], n, a, b;

    printf("Nhap vao so phan tu trong mang: ");
    scanf("%d", &n);
    
    printf("Nhap %d phan tu:\n", n);
    int i;
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vao vi tri can sua (1 -> %d): ", n);
    scanf("%d", &a);

    if (a < 1 || a > n) {
        printf("Vi tri khong dung !\n");
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &b);

    arr[a - 1] = b;

    printf("Mang sau khi sua: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
