#include <iostream>
#include "assert.h"
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



	system("pause");
}