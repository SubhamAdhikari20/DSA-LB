#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    // int count = 1;
    while (i<=n)
    {                   
        int j = 1;
        while (j<=i)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
            // count++;
            // ch++;
        }
        cout << endl;
        i++;
    
    }
    return 0;
}