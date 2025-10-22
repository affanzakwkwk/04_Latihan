#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << "BMI Calculator" << endl;
    cout << "--------------------------------------" << endl;

    cout << "Weight:     kg\b\b\b\b\b\b\b";
    double weight;
    cin >> weight;

    cout << "Height:     m\b\b\b\b\b\b";
    double height;
    cin >> height;

    double bmi = weight / pow(height, 2);

    cout << fixed << setprecision(2);
    cout << "Result:" << endl;
    cout << "-  BMI " << bmi << endl;

    string category;
    if (bmi < 18.5) {
        category = "underweight";
    }
    else if (bmi >= 18.5 && bmi <= 22.99) {
        category = "normal";
    }
    else if (bmi >= 23 && bmi <= 24.99) {
        category = "overweight";
    }
    else {
        category = "obesity";
    }

    cout << "-  You are '" << category << "'" << endl;

    system("pause");
    return 0;
}
