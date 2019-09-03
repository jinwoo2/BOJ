#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

int main() {
	char string[101];
	int index;
	char compare[27] = { -1, };
	scanf("%s", &string);

	for (int i = 0; i < strlen(string); i++) {
		int index = string[i] - '97'; //알파벳의 아스키값 범위에 있는걸 확인하는 작업
		if (compare[index] == -1) {
			compare[index] = i;
		}
	}

	for (char j = 0; j <= ('z'-'a'); j++) {
		printf("%d", compare[j]);
	}

}