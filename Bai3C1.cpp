#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int A[n];
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] > A[j]) {
                int x = A[i];
                A[i] = A[j];
                A[j] = x;
            }
        }
    }
    cout << "Day so sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}
