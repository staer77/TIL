#include <stdio.h>

int main(void) {
	int n[30];
	char s;
	char b[98];

	printf("�̸��� �Է��ϼ���.");
	scanf_s("%d", &n);

	printf("������ �Է��ϼ���.");
	s = getchar();
	putchar(s);

	printf("��������� �Է��ϼ���.");
	gets_s(b);
	puts(b);

    return 0;
}