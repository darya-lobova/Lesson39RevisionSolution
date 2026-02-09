#include "logic.h"

string get_odd_numbers_sequence(int n, int m) {

	if (n == m && n % 2 == 0) {
		return "";
	}

	if (n > m) {
		int t = n;
		n = m;
		m = t;
	}

	m += m % 2 == 0 ? -1 : 0;

	string result = to_string(m);

	for (int i = m - 2; i >= n; i-=2) {
		result += " " + to_string(i);
	}

	return result;
}