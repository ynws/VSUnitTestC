#include "funcs.h"

int f1(int a, int b) {
	if (a > b) {
		return a;
	}
	if (a == b || a > 100 || b < 10) {
		return a + b;
	}
	return b;
}