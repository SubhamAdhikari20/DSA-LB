#include <iostream>
using namespace std;

int main(){
    int fahrenheit = 0;
    cout << "The conversion table from Fahrenheit to Celsius:" << endl;
    cout << "Fahrenheit   |   Celsius" << endl;
    cout << "----------------------------";
    while (fahrenheit<=100)
    {
        float celsius = 5.0/9.0 * (fahrenheit-32);
        cout << endl << fahrenheit  << "\t     |   \t" << celsius;
        fahrenheit+=10;
    }
    
    return 0;
}