#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 2;
    while (i<n)
    {
        if (n%i==0)
        {
            cout << "Not Prime for " << i << endl;
        }
        else{
            cout << "Primefor " << i << endl;
        }
        i++;

    }
        
    return 0;
}