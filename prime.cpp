#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 2;
    if (n < i)
    {
        cout << "Not a Prime Number" << endl;
    }
    else if (n==i)
    {
        cout << "Prime Number" << endl;
    }
    else{
        bool isPrime = true;
        // cout << isPrime << endl;
        while (n>i)
        {
            if (n%i==0)
            {
                isPrime = false;
                break;
            }
            i++;
        }
        // cout << isPrime << endl;
        if (isPrime)
        {
            cout << "Prime Number" << endl;
        }
        else{
            cout << "Not a Prime Number" << endl;
        }        
    }     
    return 0;
}