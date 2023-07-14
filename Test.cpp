#include <iostream>
using namespace std;

void SapXepChon(int a[], int n) {
    int x;
    for (int i = 0; i < n - 1; i++) {
        x = i;
        for (int j = i + 1; j < n; j++) {  // Sửa: j < n thay vì j < n-1
            if (a[x] > a[j]) {
                x = j;
            }
        }
        if (i != x) {
            int temp = a[i];  // Sửa: Sử dụng biến khác với 'x' để lưu giá trị tạm thời
            a[i] = a[x];
            a[x] = temp;
        }
    }
}

int main() {
    int n;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;
    int a[n];
    cout << "Nhập các phần tử: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    SapXepChon(a, n);
    cout << "Dãy số sau khi sắp xếp là: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
