#include "task.h"
/*	Task 02. The Digital Watch [����������� ����]
*
*	����������� ���� ���������� ����� � ������� h:mm:ss (�� 0:00:00 �� 23:59:59),
*	�.�. ������� ������������ ���������� �����, ����� ����������� ���������� ���������� �����,
*	����� ����������� ���������� ���������� ������.
*	���������� ����� � ������ ��� ������������� ����������� �� ����������� ����� ������.
*	� ������ ����� ������ N ������. ��������, ��� ������� ����.
*
*	����������
*	���������� ��� ������� ������� ������������ ������ ���������� �������� ����� C/C++
*
*	������ ������� ������ [input]
*	�� ���� ������� �������� ����� N � ��������� ���� int.
*
*	������ �������� ������
*	������� ������ ���������� ������ - ����� �� ������
*	��� ������ "error" - ���� ���������� ������� ��������� ������.
*
*	[ input 1]: 3602
*	[output 1]: 1:00:02
*
*	[ input 2]: 129700
*	[output 2]: 12:01:40
*
*	[ input 3]: 0
*	[output 3]: 0:00:00
*
*	[ input 4]: -1
*	[output 4]: "error"
*
*	[ input 5]: 86399
*	[output 5]: 23:59:59
*/
int time(int number, int xx) {
	int t = 0;
	if (number >= xx) {
t = number / xx;
	}
	return t;
}
string taskX(int number) {
	if (number < 0) {
		return "error";
	}
	int h = time(number, 3600);
	number = number <= 3600 ? number % 3600 : number;
	int m = time(number, 60);
	number = number <= 60?number%60:number;
	int s = number;
	string hh = to_string(h) + ":";
	string mm = to_string(m) + ":";
	string ss = to_string(s);

	if (m < 10) {
		mm = "0" + to_string(m) + ":";
	}

	if (s < 10) {
		ss = "0" + to_string(s);
	}

	return hh + mm + ss;
}
