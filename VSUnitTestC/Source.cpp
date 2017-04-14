#include "funcs.h"

int f1(int a, int b) {
	if (a > b) {
		return a;
	}
	if (a == b) {
		return a + b;
	}
	return b;
}