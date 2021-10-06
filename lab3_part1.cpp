#include <iostream>

using namespace std;

int main() {
    int n,min=10*1024;
    cout<<"Enter the amount of numbers="; cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cout<<"Enter "<< i+1<< " number="; cin>>a[i];
        if(a[i]<min) min=a[i];
    }
    cout<<"Minimal number is "<<min;
    return 0;
}


