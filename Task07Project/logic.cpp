#include <string>

using namespace std;

string get_prime_numbers(int n) {
	if (n < 2) return "Error.";

	string result = "";
	for (int i = 2; i <= n; i++) {
		bool is_prime = true;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				is_prime = false;
				break;
			}
		}

		if (is_prime) {
			if (result != "") result += " ";
			result += to_string(i);
		}
	}
	return result;
}