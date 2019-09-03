#include <stdio.h>
#include <stdlib.h>

//1번은 2초
//2번은 3초
//3번은 4초
//4번은 5초 
//...
//0번은 11초

int main() {
	char* input;
	int count = 0 ;
	int number = 0;
	scanf_s("%s", &input);


	for (int i = 0; input[i] != NULL ; i++) {
		if (input[i] >= 65 && input[i] <= 67) {  //문자열 아스키 코드로 하면 줄어든다.
			number = 2;
			count += 3;
		}
		else if (input[i] >= 67 && input[i] <= 69) {  //문자열 아스키 코드로 하면 줄어든다.
			number = 3;
			count += 4;
		}
		else if (input[i] >= 68 && input[i] <= 70) {  //문자열 아스키 코드로 하면 줄어든다.
			number = 4;
			count += 5;
		}
		else if (input[i] >= 71 && input[i] <= 73) {  //문자열 아스키 코드로 하면 줄어든다.
			number = 5;
			count += 6;
		}
		else if (input[i] >= 74 && input[i] <= 76) {  //문자열 아스키 코드로 하면 줄어든다.
			number = 6;
			count += 7;
		}
		else if (input[i] >= 77 && input[i] <= 80) {  //문자열 아스키 코드로 하면 줄어든다. 문자4개
			number = 7;
			count += 8;
		}
		else if (input[i] >= 81 && input[i] <= 83) {  //문자열 아스키 코드로 하면 줄어든다.
			number = 8;
			count += 9;
		}
		else if (input[i] >= 84 && input[i] <= 87) {  //문자열 아스키 코드로 하면 줄어든다. 4개
			number = 9;
			count += 10;
		}
		else if (input[i] == 1) {  //문자열 아스키 코드로 하면 줄어든다.
			number = 1;
			count += 2;
		}
		else {
			number = 0;
			count += 11;
		}

	}
	
	printf("%d", count);
	return 0;
}