#pragma once

#include <iostream>
#include "assert.h"
#include <cmath>

//���������� ���������� time_2 �� time_1
double seconds_difference(double time_1, double time_2);

//���������� ���������� �����, �� ������� ����� � �������� time_2 ������� �� ������� � �������� time_1
double hours_difference(double time_1, double time_2);

//���������� ����� ���������� ����� � ��������� ���������� �����, ����� � ������
double to_float_hours(int hours, int minutes, int seconds);

//���������� ���, ��� �� ������������ � 24 - ������� �������
double to_24_hour_clock(double hours);