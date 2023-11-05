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
        char ch = 'A' + n - i;
        while (j<=i)
        {
            cout << ch << " ";
            ch++;
            // count++;
            j++;
        }
        cout << endl;
        i++;
    
    }
    return 0;
}