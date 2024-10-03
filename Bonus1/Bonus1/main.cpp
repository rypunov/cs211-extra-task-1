#include "cs211-extra-task-1.h"

using namespace std;


void main()
{
	setlocale(LC_ALL, "RUSSIAN");

    // Тестирование функции seconds_difference
    assert(fabs(seconds_difference(1800.0, 3600.0) - 1800.0) < DBL_EPSILON);
    assert(fabs(seconds_difference(3600.0, 1800.0) + 1800.0) < DBL_EPSILON);
    assert(fabs(seconds_difference(1800.0, 2160.0) - 360.0) < DBL_EPSILON);
    assert(seconds_difference(1800.0, 1800.0) < DBL_EPSILON);
    cout << "Тестирование функции seconds_difference пройдено!" << endl;

    // Тестирование функции hours_difference
    assert(fabs(hours_difference(1800.0, 3600.0) - 0.5) < DBL_EPSILON);
    assert(fabs(hours_difference(3600.0, 1800.0) + 0.5) < DBL_EPSILON);
    assert(fabs(hours_difference(1800.0, 2160.0) - 0.1) < DBL_EPSILON);
    assert(hours_difference(1800.0, 1800.0) < DBL_EPSILON);
    cout << "Тестирование функции hours_difference пройдено!" << endl;

    // Тестирование функции to_float_hours
    assert(fabs(to_float_hours(0, 15, 0) - 0.25) < DBL_EPSILON);
    assert(fabs(to_float_hours(2, 45, 9) - 2.7525) < DBL_EPSILON);
    assert(fabs(to_float_hours(1, 0, 36) - 1.01) < DBL_EPSILON);
    cout << "Тестирование функции to_float_hours пройдено!" << endl;

    // Тестирование функции to_24_hour_clock
    assert(fabs(to_24_hour_clock(24) - 0) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(48) - 0) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(25) - 1) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(4) - 4) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(28.5) - 4.5) < DBL_EPSILON);
    cout << "Тестирование функции to_24_hour_clock пройдено!" << endl;




	system("pause");
}