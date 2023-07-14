#include <iostream>
using namespace std;

void sapxep(int A[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j<n; j++){
            if (A[i]>A[j]){
                int x=A[i];
                A[i]=A[j];
                A[j]=x;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Nhap so luong phan tu";
    cin>>n;
    int A[n];
     cout<<"Nhap cac phan tu";
     for(int i=0; i<n; i++){
       cin>>A[i];
    }
    
    sapxep(A,n);
    cout<<"day so sau khi sap xep la: ";
    for(int i=0; i<n; i++){
    cout<<A[i]<<" ";
    }
    
    return 0;

}




