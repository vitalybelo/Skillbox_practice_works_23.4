#include <iostream>
#include "windows.h"
using namespace std;

#define SUMMER 1
#define AUTUMN 2
#define WINTER 3
#define SPRING 4

#define ACTIVE_SEASON AUTUMN

#if ACTIVE_SEASON <= 4 && ACTIVE_SEASON > 0
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

#if ACTIVE_SEASON == SUMMER
    cout << "����" << endl;
#elif ACTIVE_SEASON == AUTUMN
    cout << "�����" << endl;
#elif ACTIVE_SEASON == WINTER
    cout << "����" << endl;
#else ACTIVE_SEASON == SPRING
    cout << "�����" << endl;
#endif
    return 0;
}
#endif
