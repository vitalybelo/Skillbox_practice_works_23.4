#include <iostream>
using namespace std;

#define OPTIMAL_CAPACITY 20;

int getWagonOccupancy (int i) {
    int passenger;
    cout << "Вагон № " << i << " Введите количество пассажиров: ";
    cin >> passenger;
    return passenger;
}

bool isWagonOptimal (int nPassengers) {
    return nPassengers == OPTIMAL_CAPACITY;
}

bool solveWagonPuzzle (int nPassengers) {
    return nPassengers > OPTIMAL_CAPACITY;
}

#define WAGON_DATA(nw) \
                int i = 1; \
                while (i <= nw) { \
                    int pn = getWagonOccupancy(i++); \
                    if (isWagonOptimal(pn)) { \
                        optimalWagons++; \
                    } else { \
                        solveWagonPuzzle(pn) ? overcookedWagons++ : unfinishedWagons++; \
                    } \
                    sum += pn; \
                }

int main()
{
    setlocale(LC_ALL, "Russian");

    int sum = 0;
    int optimalWagons = 0;
    int overcookedWagons = 0;
    int unfinishedWagons = 0;

    WAGON_DATA(10);
    cout << "Перегруженных вагонов: " << overcookedWagons << endl;
    cout << "Недогруженных вагонов: " << unfinishedWagons << endl;
    cout << "Оптимально загруженных вагонов: " << optimalWagons << endl;
    cout << "Общее количество пассажиров в поезде = " << sum << endl;

    return 0;
}