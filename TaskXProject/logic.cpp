#include "logic.h"

string build_pyramid(int row, char sign) {

	if (row <= 0 || sign == ' ') {
		return "Error.";
	}

	string pyramid = "";

	for (int i = 1; i <= row; i++) {

		for (int j = 0; j < row - i; j++) {
			pyramid += " ";
		}


		for (int j = 0; j < (2 * i - 1); j++) {
			pyramid += sign;
		}

		if (i < row) {
			pyramid += "\n";
		}
	}

	return pyramid;
}