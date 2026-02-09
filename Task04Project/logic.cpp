#include "logic.h"

string get_numbers_in_order(int n, int m) {
	string result = "";

	for (int i = n; i <= m; i++) {
		result += to_string(i) + " ";
	}

	return result;
}