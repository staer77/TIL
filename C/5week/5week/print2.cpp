#include <stdio.h>

int main(void) {
	int n[30];
	char s;
	char b[98];

	printf("이름을 입력하세요.");
	scanf_s("%d", &n);

	printf("성별을 입력하세요.");
	s = getchar();
	putchar(s);

	printf("생년월일을 입력하세요.");
	gets_s(b);
	puts(b);

    return 0;
}