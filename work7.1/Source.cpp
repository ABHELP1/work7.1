#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
int main() {
	int amount, tail[1000], wanted, check = 0, swap;
	scanf("%d", &amount);
	for (int i = 0; i < amount; i++) {
		scanf("%d", &tail[i]);
	}
	scanf("%d", &wanted);
	for (int i = 0; i < amount; i++) {
		for (int j = 0; j < i; j++) {
			if (tail[j] > tail[i]) {
				swap = tail[j];
				tail[j] = tail[i];
				tail[i] = swap;
			}
		}
	}

	for (int i = 0; i < amount - 1 - check; i++) {
		for (int j = amount - check; j > i; j--) {
			if (tail[i] + tail[j] == wanted) {
				check++;
			}
		}
	}
	printf("%d", check);
}