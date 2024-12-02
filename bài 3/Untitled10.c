#include <stdio.h>

int main() {
    int arr[100], n, a;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap %d phan tu:\n", n);
    int i;
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Nhap vi tri muon xoa (1 -> %d): ", n);
    scanf("%d", &a);
    if (a < 1 || a > n) {
        printf("Vi tri khong dung!\n");
        return 1;
    }
    for (i = a - 1; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;  

    printf("Mang sau khi bi xoa: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
