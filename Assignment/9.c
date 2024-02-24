#include <iostream>
#include <cmath> // cmath squareroot er jonne
using namespace std;

int main() {
    int a, b, c;
    double root1, root2; 
    
    cout << "Enter coefficients (a, b, c): ";
    cin >> a >> b >> c;

    
    root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    
    cout << "Root 1: " << root1 << endl;
    cout << "Root 2: " << root2 << endl;


}
