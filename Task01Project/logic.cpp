#include "logic.h"

string count_likes(int day, int like) {

	if (day <= 0 || like < 0) {
		return "Error.";
	}

	string result;

	for (int i = 1; i <= day; i++) {
		int final_likes = like * i;
		result += "Day " + to_string(i) + ": " + to_string(final_likes) + " likes\n";

	}

	return result;
}