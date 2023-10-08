#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 4 || argc > 6) {
        cout << "Мультипликативный, который делает умножение и деление" << endl;
        cout << "Как использовать: ./calculator <m or d> <число 1> <число 2>,\n так же можно но не обязательно -> [<число 3>] [<число 4>]" << endl;
        return 1;
    }

    string operation = argv[1];
    double result = 1.0;

    if (operation == "m") {
        for (int i = 2; i < argc; i++) {
            double operand = stod(argv[i]);
            result *= operand;
        }
    }
    else if (operation == "d") {
        if (argc == 4) {
            double operand1 = stod(argv[2]);
            double operand2 = stod(argv[3]);
            result = operand1 / operand2;
        }
        else if (argc == 5) {
            double operand1 = stod(argv[2]);
            double operand2 = stod(argv[3]);
            double operand3 = stod(argv[4]);
            result = (operand1 / operand2) / operand3;
        }
        else if (argc == 6) {
            double operand1 = stod(argv[2]);
            double operand2 = stod(argv[3]);
            double operand3 = stod(argv[4]);
            double operand4 = stod(argv[5]);
            result = ((operand1 / operand2) / operand3) / operand4;
        }
    }
    else {
        cout << "Невозможно" << endl;
        return 1;
    }

    cout << result << endl;

    return 0;
}
