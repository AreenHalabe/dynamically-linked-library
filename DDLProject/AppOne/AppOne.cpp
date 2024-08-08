#include <iostream>
#include <windows.h>
#include "mylibrary.h"

typedef void (*SortFunc)(int*, const int);
typedef void (*ReadInfoFunc)(int*, const int);
typedef void (*DisplayFunc)(const int*, const int);
typedef double (*ComputeAvgFunc)(const int*, const int);

using namespace std;

int main() {
    HINSTANCE hInstLibrary = LoadLibraryA("D:\\visual studio 2022 projects\\DDLProject\\x64\\Debug\\DDLProject.dll");

    if (hInstLibrary) {
        SortFunc sort = (SortFunc)GetProcAddress(hInstLibrary, "sort");
        ReadInfoFunc readInfo = (ReadInfoFunc)GetProcAddress(hInstLibrary, "readInfo");
        DisplayFunc display = (DisplayFunc)GetProcAddress(hInstLibrary, "display");
        ComputeAvgFunc computeAvg = (ComputeAvgFunc)GetProcAddress(hInstLibrary, "computeAvg");


        if (sort && readInfo && display && computeAvg) {
            cout << "welcom in App one" << endl;
            cout << "The size of the array is 5 integer" << endl;
            const int size = 5; 
            int arr[size];
            readInfo(arr, size);
            sort(arr, size);
            display(arr, size);
            double avg = computeAvg(arr, size);
            cout << "Average: " << avg << endl;
        }
        else {
            cerr << "Failed to get one or more function addresses." << endl;
        }

        FreeLibrary(hInstLibrary);
    }
    else {
        cerr << "Failed to load the library." << GetLastError() <<endl;
    }

    return 0;
}
