#include <iostream>
using namespace std;
void Sapxepchon(int a[], int n){
    int x;
    for(int i=0; i<n-1; i++){
        x=i;
        for(int j=i+1; j<n; j++){
        if(a[x]>a[j]){
            x=j;
        }
    }
        if(i !=x ){
            int y=a[i];
            a[i]=a[x];
            a[x]=y;
        }
    } 
}
int main(){
    int n;
    cout<<"Nhap so luong phan tu ";
    cin>>n;
    int a[n];
        cout<<"Nhap cac phan tu ";
        for(int i=0; i<n; i++){
        cin>>a[i];
    }
    Sapxepchon(a,n);
    cout<<"Day so sau sap xep la ";
    for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
    }
    return 0;
}
