#include <iostream>

using namespace std;

int main(){
    int x,y;
    cout << "masukkan nilai dari 1-10: ";
    cin >> x;

    if (x>=1 && x<=10){
        cout << "nilai yang dimasukkan: "<< x;
    }
    else {
        cout << "nilai yang anda masukkan tidak valid!";
    }
}