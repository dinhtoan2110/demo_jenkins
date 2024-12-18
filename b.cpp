#include <iostream>
using namespace std;

int main() {
    int num1 = 2;
    int num2 = 3;
    
    // Thực hiện các phép toán cơ bản
    cout << "Addition (" << num1 << " + " << num2 << ") = " << num1 + num2 << endl;
    cout << "Subtraction (" << num1 << " - " << num2 << ") = " << num1 - num2 << endl;
    cout << "Multiplication (" << num1 << " * " << num2 << ") = " << num1 * num2 << endl;

    // Kiểm tra điều kiện chia cho 0
    if (num2 != 0) {
        cout << "Division (" << num1 << " / " << num2 << ") = " << num1 / num2 << endl;
    } else {
        cout << "Division by zero is undefined!" << endl;
    }

    return 0;
}
