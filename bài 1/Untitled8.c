#include <stdio.h>

int main() {
    int arr[100], n, a, b;

    printf("moi ban nhap so luong phan tu vao day: ");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vao vi tri can chen (0 -> %d): ", n);
    scanf("%d", &a);
    printf("Nhap gia tri can chen vao: ");
    scanf("%d", &b);
    for (i = n; i > a; i--) {
        arr[i] = arr[i - 1];
    }
    arr[a] = b;

    printf("Mang sau khi chen: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
