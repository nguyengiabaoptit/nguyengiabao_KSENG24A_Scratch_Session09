#include <stdio.h>


bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void displayMenu() {
    cout << "\nMENU\n";
    cout << "1.  Nhap so phan tu va gia tri cac phan tu \n";
    cout << "2. in ra gia tri cua cac phan tu dang quan li \n";
    cout << "3. In ra giá tri cac phan tu chan va tinh tong \n";
    cout << "4. In ra gia tri lon nhat va nho nhat trong mang \n";
    cout << "5. In ra các phan tu la so nguyen to trong mang va tinh tong \n";
    cout << "6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do \n";
    cout << "7. Thêm mot phan tu vao vi tri chi dinh";
    cout << "8. Thoát\n";
    cout << "lua chon cua ban: ";
}


void inputArray(vector<int>& arr) {
    int n, value;
    cout << "nhap so phan tu: ";
    cin >> n;
    arr.clear();
    for (int i = 0; i < n; ++i) {
        cout << "Nhap phan tu thu? " << i + 1 << ": ";
        cin >> value;
        arr.push_back(value);
    }
}


void printArray(const vector<int>& arr) {
    if (arr.empty()) {
        cout << "Mang rong!\n";
        return;
    }
    cout << "Các phan tu trong mang: ";
    for (int value : arr) {
        cout << value << " ";
    }
    cout << endl;
}


void printEvenAndSum(const vector<int>& arr) {
    int sum = 0;
    cout << "Các phan tu chan: ";
    for (int value : arr) {
        if (value % 2 == 0) {
            cout << value << " ";
            sum += value;
        }
    }
    cout << "\nTong cac phan tu chan: " << sum << endl;
}


void findMinMax(const vector<int>& arr) {
    if (arr.empty()) {
        cout << "Mang rong!\n";
        return;
    }
    int minVal = arr[0], maxVal = arr[0];
    for (int value : arr) {
        if (value < minVal) minVal = value;
        if (value > maxVal) maxVal = value;
    }
    cout << "Giá tri nho nhat: " << minVal << endl;
    cout << "Giá tri lon nhat: " << maxVal << endl;
}


void printPrimesAndSum(const vector<int>& arr) {
    int sum = 0;
    cout << "Các so nguyên t?: ";
    for (int value : arr) {
        if (isPrime(value)) {
            cout << value << " ";
            sum += value;
        }
    }
    cout << "\nTong các so nguyên t?: " << sum << endl;
}


void countOccurrences(const vector<int>& arr) {
    int x, count = 0;
    cout << "Nhap so can dem: ";
    cin >> x;
    for (int value : arr) {
        if (value == x) ++count;
    }
 cout << "So lan xuat hien cua " << x << ": " << count << endl;
}


void addElementAtPosition(vector<int>& arr) {
    int pos, value;
    cout << "Nhap vi tri can them (0 - " << arr.size() << "): ";
    cin >> pos;
    if (pos < 0 || pos > arr.size()) {
        cout << "Vi trí không hop le?!\n";
        return;
    }
    cout << "Nhap gia tri phan tu: ";
    cin >> value;
    arr.insert(arr.begin() + pos, value);
    cout << "Ðã thêm phan tu thành công!\n";
}


int main() {
    vector<int> arr;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                inputArray(arr);
                break;
            case 2:
                printArray(arr);
                break;
            case 3:
                printEvenAndSum(arr);
                break;
            case 4:
                findMinMax(arr);
                break;
            case 5:
                printPrimesAndSum(arr);
                break;
            case 6:
                countOccurrences(arr);
                break;
            case 7:
                addElementAtPosition(arr);
                break;
            case 8:
                cout << "Thoát chuong trình. Tam biet!\n";
                break;
            default:
                cout << "Lua chon khong phu hop.vui long thu lai \n";
        }
    } while (choice != 8);

    return 0;
}

