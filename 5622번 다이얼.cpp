#include <stdio.h>
#include <stdlib.h>

//1���� 2��
//2���� 3��
//3���� 4��
//4���� 5�� 
//...
//0���� 11��

int main() {
	char* input;
	int count = 0 ;
	int number = 0;
	scanf_s("%s", &input);


	for (int i = 0; input[i] != NULL ; i++) {
		if (input[i] >= 65 && input[i] <= 67) {  //���ڿ� �ƽ�Ű �ڵ�� �ϸ� �پ���.
			number = 2;
			count += 3;
		}
		else if (input[i] >= 67 && input[i] <= 69) {  //���ڿ� �ƽ�Ű �ڵ�� �ϸ� �پ���.
			number = 3;
			count += 4;
		}
		else if (input[i] >= 68 && input[i] <= 70) {  //���ڿ� �ƽ�Ű �ڵ�� �ϸ� �پ���.
			number = 4;
			count += 5;
		}
		else if (input[i] >= 71 && input[i] <= 73) {  //���ڿ� �ƽ�Ű �ڵ�� �ϸ� �پ���.
			number = 5;
			count += 6;
		}
		else if (input[i] >= 74 && input[i] <= 76) {  //���ڿ� �ƽ�Ű �ڵ�� �ϸ� �پ���.
			number = 6;
			count += 7;
		}
		else if (input[i] >= 77 && input[i] <= 80) {  //���ڿ� �ƽ�Ű �ڵ�� �ϸ� �پ���. ����4��
			number = 7;
			count += 8;
		}
		else if (input[i] >= 81 && input[i] <= 83) {  //���ڿ� �ƽ�Ű �ڵ�� �ϸ� �پ���.
			number = 8;
			count += 9;
		}
		else if (input[i] >= 84 && input[i] <= 87) {  //���ڿ� �ƽ�Ű �ڵ�� �ϸ� �پ���. 4��
			number = 9;
			count += 10;
		}
		else if (input[i] == 1) {  //���ڿ� �ƽ�Ű �ڵ�� �ϸ� �پ���.
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