#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int num=0;
	char string[21];
	int count=0;
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf_s("%d %s", &count, string);

		for (int j = 0; string[j] != NULL; j++) {
			for (int k = 0; k < count; k++) {
				printf("%c", string[j]);
			}
		}
		printf("\n");
	}
	return 0;
}