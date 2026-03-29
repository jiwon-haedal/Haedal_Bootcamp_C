#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char n;
	printf("알파벳 소문자, 대문자, 숫자 0-9 중 하나 입력: ");
	scanf("%c", &n);

	printf("%d", n);

	return 0;

}