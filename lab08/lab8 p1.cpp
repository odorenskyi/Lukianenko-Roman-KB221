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
    cout << "������ x: ";
    cin >> x;
    cout << "������ y: ";
    cin >> y;
    cout << "������ z: ";
    cin >> z;
    cout << "������ ������ a: ";
    cin >> a;
    cout << "������ ������ b: ";
    cin >> b;

    cout << "�������� �������� ���'������ ����� ������������� \u00A9" << endl;

    bool result = (a + 10 >= b);
    cout << "��������� �������� ������ a + 10 >= b: " << boolalpha << result << endl; 

    cout << "x � ��������� ������ ��������: " << dec << x << endl;
    cout << "y � ��������� ������ ��������: " << dec << y << endl;
    cout << "z � ��������� ������ ��������: " << dec << z << endl;
    cout << "x � �������������� ������ ��������: " << hex << x << endl;
    cout << "y � �������������� ������ ��������: " << hex << y << endl;
    cout << "z � �������������� ������ ��������: " << hex << z << endl;

    double s = s_calculation(x, y, z);
    cout << "�������� s: " << fixed << setprecision(2) << s << endl;

    return 0;
}
