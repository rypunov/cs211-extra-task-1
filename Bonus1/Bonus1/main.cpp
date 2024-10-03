#include <iostream>
#include "assert.h"
#include "cs211-extra-task-1.h"

using namespace std;


void main()
{
	setlocale(LC_ALL, "RUSSIAN");

    // ������������ ������� seconds_difference
    assert(fabs(seconds_difference(1800.0, 3600.0) - 1800.0) < DBL_EPSILON);
    assert(fabs(seconds_difference(3600.0, 1800.0) + 1800.0) < DBL_EPSILON);
    assert(fabs(seconds_difference(1800.0, 2160.0) - 360.0) < DBL_EPSILON);
    assert(seconds_difference(1800.0, 1800.0) < DBL_EPSILON);
    cout << "������������ ������� seconds_difference ��������!" << endl;

	system("pause");
}