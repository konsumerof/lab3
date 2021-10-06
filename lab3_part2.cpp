#include <iostream>

using namespace std;

int main() {
    int n,m;
    double sum;
    cout<<"Enter the amount of strings=";cin>>n;
    cout<<"Enter the amount of columns=";cin>>m;
    int a[n][m];
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter number "<< i<<j << "="; cin>>a[i][j];
        }
    }
    double b[n];
    cout<<"Averages of numbers in strings = "<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            sum+=a[i][j];
        }
        b[i]=sum/m;
        sum=0;
        cout<<b[i]<< " ";
    }

    return 0;
}

