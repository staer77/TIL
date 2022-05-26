#include <stdio.h>

int main(void) {
	//char names[10]  = { 'a', 'b', 'c', 'd', 'e' };
	// names = a, b, c, d, e, null, 0, 0, 0, 0
	//char abc[10] = "abcde";
	// abc = a, b, c, d, e, \0, 

	//printf("%c", names[2]);

	char names[5] = { 'a', 'b', 'c', 'd', 'e' };
	int index = 0; 
	scanf_s("%d", &index);
	names[index] = '\0';
	for (int index = 0; index < 5; index++)
		printf("%d번째 자리는 %c \n", index, names[index]);
	return 0;

}