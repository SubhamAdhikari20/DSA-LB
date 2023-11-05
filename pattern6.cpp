#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    int count = n;
    while (i<=n)
    {                   
        int j = 1;
        while (j<=count)
        {
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
        count--;
        
    }
        
    return 0;
}