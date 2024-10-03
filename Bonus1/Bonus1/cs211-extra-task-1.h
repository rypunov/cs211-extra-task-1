#pragma once

#include <iostream>
#include "assert.h"

//Возвращает отставание time_2 от time_1
double seconds_difference(double time_1, double time_2);

//Возвращает количество часов, на которое время в секундах time_2 отстает от времени в секундах time_1
double hours_difference(double time_1, double time_2);

//Возвращает общее количество часов в указанном количестве часов, минут и секунд
double to_float_hours(int hours, int minutes, int seconds);