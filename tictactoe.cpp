#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Masukkan jumlah kotak :";
    cin>> n;
   
    for(int a=1; a<=n; a++){
        cout<<" _";
    }
    cout<<endl;
    for(int a=1; a<=n; a++){
        for(int b=1; b<=n; b++){
            cout<<"|_";
        }
        cout<<"|"<<endl;
    }
    return 0;
}
