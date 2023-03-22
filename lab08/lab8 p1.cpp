#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

double s_calculation(int x, int y, int z) {
    double s = pow(x, y) + sqrt(abs(z));
    return s;
}

int main() {
    int x, y, z;
    char a, b;
    cout << "¬вед≥ть x: ";
    cin >> x;
    cout << "¬вед≥ть y: ";
    cin >> y;
    cout << "¬вед≥ть z: ";
    cin >> z;
    cout << "¬вед≥ть символ a: ";
    cin >> a;
    cout << "¬вед≥ть символ b: ";
    cin >> b;

    cout << "ѕрограму розробив Ћук'€ненко –оман ќлександрович \u00A9" << endl;

    bool result = (a + 10 >= b);
    cout << "–езультат лог≥чного виразу a + 10 >= b: " << boolalpha << result << endl; 

    cout << "x в дес€тков≥й систем≥ численн€: " << dec << x << endl;
    cout << "y в дес€тков≥й систем≥ численн€: " << dec << y << endl;
    cout << "z в дес€тков≥й систем≥ численн€: " << dec << z << endl;
    cout << "x в ш≥стнадц€тков≥й систем≥ численн€: " << hex << x << endl;
    cout << "y в ш≥стнадц€тков≥й систем≥ численн€: " << hex << y << endl;
    cout << "z в ш≥стнадц€тков≥й систем≥ численн€: " << hex << z << endl;

    double s = s_calculation(x, y, z);
    cout << "«наченн€ s: " << fixed << setprecision(2) << s << endl;

    return 0;
}
