#include "task.h"
/*	Task 02. The Digital Watch [электронные часы]
*
*	Ёлектронные часы показывают врем€ в формате h:mm:ss (от 0:00:00 до 23:59:59),
*	т.е. сначала записываетс€ количество часов, потом об€зательно двузначное количество минут,
*	затем об€зательно двузначное количество секунд.
*	 оличество минут и секунд при необходимости дополн€ютс€ до двузначного числа нул€ми.
*	— начала суток прошло N секунд. ¬ыведите, что покажут часы.
*
*	ѕримечание
*	ѕопробуйте при решении задани€ использовать только встроенные операции €зыка C/C++
*
*	‘ормат входных данных [input]
*	Ќа вход функци€ получает число N в диапазоне типа int.
*
*	‘ормат выходных данных
*	‘ункци€ должна возвратить строку - ответ на задачу
*	или строку "error" - если пользовать передал ошибочные данные.
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
int time(int number, int xx, int max) {
	int t = 0;
	if (number >= xx) {
		t = number / xx;
	}
	if (t > max) {
		t %= max;
	}
	return t;
}
string taskX(int number) {
	if (number <= 0) {
		return number == 0 ? "0:00:00" : "error";
	}
	/*if (number < 60) {
		int t = number;
		if (t < 10) {
			return "0" + to_string(t);
		}
		return to_string(t);
	}*/
	int h = time(number, 3600, 24);
	number %= 3600;
	int m = time(number, 60, 60);
	number %= 60;
	int s = number;
	string hh = to_string(h) + ":";
	string mm = m < 10 ? "0" + to_string(m) + ":" : to_string(m) + ":";
	string ss = s < 10 ? "0" + to_string(s) : to_string(s);

	cout << hh + mm + ss << endl;
	return hh + mm + ss;
}
