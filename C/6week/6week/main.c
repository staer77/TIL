#include <stdio.h>

int main(void) {

	//int child = 150;

	//if (child >= 150) {
	//	puts("커요");
	//}
	//else {
	//	puts("작아요");
	//}
    
	//for (int selfphone = 0; , selfphone < 10; selfphone++) {
	//	printf("%d \n", selfphone);
	//}
	
	//int index = 0;
	//while (index < 100) {
	//	index++;
	//	if (index % 2 == 1) continue;
	//	printf("%d 번째 실행\n", index);
	//}

	//int num = 1;
	//again:
	//if (num > 100) goto end;
	//++num;
	//if (num % 2 == 0) printf("%d : 짝수\n", num);
	//else printf("%d : 홀수\n", num);
	//goto again;

	//end:
	//printf("끝났습니다.");

	//int num;

	//scanf_s("%d", &num);

	//if (num < 10) goto one;
	//else goto another;

//one:
	//printf("10보다 작습니다.");
//another:
	//printf("10보다 큽니다.");
	//goto end;
//end:
	//return 0;

	int user, com;

	again:
	printf("사용자 가위바위보 입력(가위:1 바위:2 보:3):");
	scanf_s("%d", &user);
	printf("컴퓨터 가위바위보 입력(가위:1 바위:2 보:3):");
	scanf_s("%d", &com);

	int sum = user - com;
	if (sum == -2 || sum == 1) goto end;
	else if (sum == -1 || sum == 2) {
		puts("컴퓨터가 이김");
		goto again;
	}
	else {
		puts("비김");
		goto again;
	}

end:
	printf("유저가 이김");
	return 0;

}