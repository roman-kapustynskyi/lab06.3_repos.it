#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void sortINT(int* a, const int n);

template <typename T>
void sortTemplate(T* a, const int n);

int main() {
    const int n = 7;
    int a[n] = { 5, 2, 9, 1, 7, 3, 11 };

    cout << "Initial: ";
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;

    sortINT(a, n);

    cout << "Sorted:  ";
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl << endl;

    double b[4] = { 2.5, 1.1, 4.8, 3.2 };

    cout << "Initial: ";
    for (int i = 0; i < 4; i++)
        cout << setw(5) << b[i];
    cout << endl;

    sortTemplate(b, 4);

    cout << "Sorted:  ";
    for (int i = 0; i < 4; i++)
        cout << setw(5) << b[i];
    cout << endl << endl;

    string c[4] = { "orange", "monkey", "banana", "ananas" };

    cout << "Initial: ";
    for (int i = 0; i < 4; i++)
        cout << setw(8) << c[i];
    cout << endl;

    sortTemplate(c, 4);

    cout << "Sorted:  ";
    for (int i = 0; i < 4; i++)
        cout << setw(8) << c[i];
    cout << endl;

    return 0;
}

void sortINT(int* a, const int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void sortTemplate(T* a, const int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                T temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}