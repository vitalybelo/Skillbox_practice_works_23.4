#include <iostream>
using namespace std;

#define WEEKDAY_1 "Понедельник"
#define WEEKDAY_2 "Вторник"
#define WEEKDAY_3 "Среда"
#define WEEKDAY_4 "Четверг"
#define WEEKDAY_5 "Пятница"
#define WEEKDAY_6 "Суббота"
#define WEEKDAY_7 "Воскресенье"
#define SHOW_WEEK_DAY(macrosName, day) macrosName ## _ ## day

int main() {
    setlocale(LC_ALL, "Russian");

    int day;
    do {
        cout << "Введите день недели: ";
        cin >> day;
        switch (day) {
            case 1: cout << SHOW_WEEK_DAY(WEEKDAY, 1) << endl; break;
            case 2: cout << SHOW_WEEK_DAY(WEEKDAY, 2) << endl; break;
            case 3: cout << SHOW_WEEK_DAY(WEEKDAY, 3) << endl; break;
            case 4: cout << SHOW_WEEK_DAY(WEEKDAY, 4) << endl; break;
            case 5: cout << SHOW_WEEK_DAY(WEEKDAY, 5) << endl; break;
            case 6: cout << SHOW_WEEK_DAY(WEEKDAY, 6) << endl; break;
            case 7: cout << SHOW_WEEK_DAY(WEEKDAY, 7) << endl; break;
            default: cout << endl;
        }
    } while (day > 0 && day <= 7);

    return 0;
}
