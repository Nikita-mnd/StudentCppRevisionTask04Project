#pragma once
#include "tasks.h"

#define RIGHT "completed successfully. Well DONE!!!"
#define WRONG "was not running successfully. Something was WRONG!"

void testingTask01() {

	bool result = task01(20, 21, 22) == 32
		&& task01(19, 15, 23) == 30
		&& task01(16, 18, 20) == 27
		&& task01(1, 1, 1) == 3
		&& task01(2, 2, 2) == 3
		&& task01(1000, 1000, 1000) == 1500
		&& task01(5, 6, 5) == 9
		&& task01(0, 6, 5) == 0
		&& task01(5, 0, 5) == 0
		&& task01(5, 6, 0) == 0
		&& task01(-5, 6, 5) == 0
		&& task01(5, -6, 5) == 0
		&& task01(5, 6, -5) == 0;

	cout << "Task 01 " << (result ? RIGHT : WRONG) << endl;
}

void testingTaskX() {

	bool result = taskX(3602) == "1:00:02"
		&& taskX(129700) == "12:01:40"
		&& taskX(0) == "0:00:00"
		&& taskX(1) == "0:00:01"
		&& taskX(59) == "0:00:59"
		&& taskX(60) == "0:01:00"
		&& taskX(600) == "0:10:00"
		&& taskX(3600) == "1:00:00"
		&& taskX(86399) == "23:59:59"
		&& taskX(-1) == "error"
		&& taskX(-123) == "error";

	cout << "Task X " << (result ? RIGHT : WRONG) << endl;
}