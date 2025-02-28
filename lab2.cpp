#include <iostream>
#include <limits>
using namespace std;

float findMaxIEEE754(const float* array, size_t size) {
    if (size == 0) {
        cerr << "Ошибка: массив пустой." << endl;
        return numeric_limits<float>::quiet_NaN(); 
    }

    float max = numeric_limits<float>::lowest();
    for (size_t i = 0; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    setlocale(LC_ALL, "Russian");
    const size_t size = 5;
    float numbers[size] = { 1.5f, -2.3f, 3.14f, 0.99f, 7.89f };

    float maxNumber = findMaxIEEE754(numbers, size);

    if (!isnan(maxNumber)) {
        cout << "Максимальное значение в массиве: " << maxNumber << endl;
    }

    return 0;
}
