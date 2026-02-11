#include <iostream>
#include <string>

using namespace std;

long long get_fibo_number(int index) {

    if (index <= 0) {
        return -1;
    }

    if (index == 1) {
        return 0;
    }

    if (index == 2) {
        return 1;
    }

    long long first = 0; 
    long long second = 1; 
    long long next = 0;

    for (int i = 3; i <= index; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    return second;
}