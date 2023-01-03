//Степені двійки

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int cтепінь;
    cout << "\nВведіть степінь, до якого треба піднести число 2: ";
    cin >> cтепінь;
    cout << "\nВідповідь: 2 у степені " << cтепінь << " = " << pow(2, cтепінь) << "\n";
}
