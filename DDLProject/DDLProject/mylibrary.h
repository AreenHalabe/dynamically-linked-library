#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#ifdef MYLIBRARY_EXPORTS
#define MYLIBRARY_API __declspec(dllexport)
#else
#define MYLIBRARY_API __declspec(dllimport)
#endif

extern "C" {
    MYLIBRARY_API void sort(int* a, const int size);
    MYLIBRARY_API void readInfo(int* a, const int size);
    MYLIBRARY_API void display(const int* a, const int size);
    MYLIBRARY_API double computeAvg(const int* a, const int size);
}

#endif 
#pragma once
