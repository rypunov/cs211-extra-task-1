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

    // ������������ ������� hours_difference
    assert(fabs(hours_difference(1800.0, 3600.0) - 0.5) < DBL_EPSILON);
    assert(fabs(hours_difference(3600.0, 1800.0) + 0.5) < DBL_EPSILON);
    assert(fabs(hours_difference(1800.0, 2160.0) - 0.1) < DBL_EPSILON);
    assert(hours_difference(1800.0, 1800.0) < DBL_EPSILON);
    cout << "������������ ������� hours_difference ��������!" << endl;

    // ������������ ������� to_float_hours
    assert(fabs(to_float_hours(0, 15, 0) - 0.25) < DBL_EPSILON);
    assert(fabs(to_float_hours(2, 45, 9) - 2.7525) < DBL_EPSILON);
    assert(fabs(to_float_hours(1, 0, 36) - 1.01) < DBL_EPSILON);
    cout << "������������ ������� to_float_hours ��������!" << endl;

    // ������������ ������� to_24_hour_clock
    assert(fabs(to_24_hour_clock(24) - 0) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(48) - 0) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(25) - 1) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(4) - 4) < DBL_EPSILON);
    assert(fabs(to_24_hour_clock(28.5) - 4.5) < DBL_EPSILON);
    cout << "������������ ������� to_24_hour_clock ��������!" << endl;

    // ������������ ������� get_hours
    assert(get_hours(3800) == 1);
    assert(get_hours(67) == 0);
    assert(get_hours(7200) == 2);
    cout << "������������ ������� get_hours ��������!" << endl;

    // ������������ ������� get_minutes
    assert(get_minutes(3800) == 3);
    assert(get_minutes(67) == 1);
    assert(get_minutes(7200) == 0);
    cout << "������������ ������� get_minutes ��������!" << endl;

    // ������������ ������� get_seconds
    assert(get_seconds(3800) == 20);
    assert(get_seconds(67) == 7);
    assert(get_seconds(7200) == 0);
    cout << "������������ ������� get_seconds ��������!" << endl;


	system("pause");
}