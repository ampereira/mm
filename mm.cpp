#include <cstdlib>
#include <iostream>

#define SIZE 128

using namespace std;

int main (void) {
	float a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE];
	int i, j, k;

	int eventset;
	long long int result;


	for (int x = 0; x < SIZE; x++) {
		for (int y = 0; y < SIZE; y++) {
			a[x][y] = rand()/RAND_MAX;
			b[x][y] = rand()/RAND_MAX;
			c[x][y] = 0;
		}
	}

	//Multiplication Logic
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			for (k = 0; k < SIZE; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	return 0;
}
