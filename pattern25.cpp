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
        while (j<=n-i+1)
        {
            cout << j;
            j++;
        }
        
        int star = i-1;
        while (star)
        {
            cout << "*";
            star--;
        }

        int star2 = i-1;
        while(star2)
        {
            cout << "*";
            star2--;
        }
        int j2 = 1;
        while (j2<=n-i+1)
        {
            cout << n-i-j2+2;
            j2++;
        }
        
        
        cout << endl;
        i++;
    
    }
    return 0;
}