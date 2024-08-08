#include "pch.h" 
#include "mylibrary.h"
#include <iostream>
#include <algorithm>

using namespace std;

void sort(int* a, const int size) {
    std::sort(a, size + a);
}

void readInfo(int* a, const int size) {
    cout << "enter the " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        cin >> a[i];
    }
}

void display(const int* a, const int size) {
    cout << "display the array after sorted: ";
    for (int i = 0; i < size; ++i) {
        cout << a[i] << " ";
    }
    cout <<endl;
}

double computeAvg(const int* a, const int size) {
    
    if(size == 0) {
        return 0.0;
    }

    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += a[i];
    }
    return static_cast<double>(sum) / size;
}
