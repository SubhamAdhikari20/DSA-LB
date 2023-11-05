#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the value of the character: ";
    cin >> &ch;
    if (ch >= 'a' && ch <='z'){
        cout << "Lower case characters" << endl;
    }
    else if (ch >= 'A' && ch <='Z'){
        cout << "Upper case characters" << endl;
    }
    else{
        cout << "Numberic values or symbols" << endl;
    }
    return 0;
}