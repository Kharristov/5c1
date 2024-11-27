#include <iostream>
#include <string>
using namespace std;

int main() {
    int b; 
    int N;
    cin >> b >> N; 
    string result = "";

    // Если число равно 0
    if (N == 0) {
        cout << 0;
        return 0;
    }

    while (N > 0) {
        int remainder = N % b; // остаток от деления на основание
        if (remainder < 10) {
            result = char(remainder + '0') + result; // цифры 0-9
        }
        else {
            result = char(remainder - 10 + 'a') + result; // буквы a-f для чисел больше 9
        }
        N /= b;      
    }

    cout << result;

    return 0;
}
