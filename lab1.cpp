#include <iostream>
#include <bitset>
using namespace std;


void printBinary(int number) {
    cout << bitset<32>(number) << endl;
}

int main() {
    int number, shift;

    
    cout << "Введите число: ";
    cin >> number;

    
    cout << "Введите количество позиций для сдвига: ";
    cin >> shift;

    
    int leftShift = number << shift;
    cout << "\nЛогический сдвиг влево (" << shift << " позиций):" << endl;
    cout << "Двоичный вид: ";
    printBinary(leftShift);
    cout << "Десятичный вид: " << leftShift << endl;

    
    int rightShift = number >> shift;
    cout << "\nЛогический сдвиг вправо (" << shift << " позиций):" << endl;
    cout << "Двоичный вид: ";
    printBinary(rightShift);
    cout << "Десятичный вид: " << rightShift << endl;

    return 0;
}
