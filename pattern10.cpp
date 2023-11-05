#include <iostream>
using namespace std;

int main(){
    int n = 3;
    // cout << "Enter the value of n: ";
    // cin >> n;
    int i = 1;
    int count = 1;
    while (i<=n)
    {         
        int j = 1;
        if (i == 1){
            while (j<=n){
                cout << "A ";
                j++;
            }
            cout << endl;
            i++; 
        }         
        else if (i == 2){
            while (j<=n){
                cout << "B ";
                j++;
            }
            cout << endl;
            i++; 
        }        
        else if (i == 3){ 
            while (j<=n)
            {
                cout << "C ";
                j++;
            }
            cout << endl;
            i++;
        }
    }
    return 0;
}