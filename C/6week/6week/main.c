#include <stdio.h>

int main(void) {

	//int child = 150;

	//if (child >= 150) {
	//	puts("Ŀ��");
	//}
	//else {
	//	puts("�۾ƿ�");
	//}
    
	//for (int selfphone = 0; , selfphone < 10; selfphone++) {
	//	printf("%d \n", selfphone);
	//}
	
	//int index = 0;
	//while (index < 100) {
	//	index++;
	//	if (index % 2 == 1) continue;
	//	printf("%d ��° ����\n", index);
	//}

	//int num = 1;
	//again:
	//if (num > 100) goto end;
	//++num;
	//if (num % 2 == 0) printf("%d : ¦��\n", num);
	//else printf("%d : Ȧ��\n", num);
	//goto again;

	//end:
	//printf("�������ϴ�.");

	//int num;

	//scanf_s("%d", &num);

	//if (num < 10) goto one;
	//else goto another;

//one:
	//printf("10���� �۽��ϴ�.");
//another:
	//printf("10���� Ů�ϴ�.");
	//goto end;
//end:
	//return 0;

	int user, com;

	again:
	printf("����� ���������� �Է�(����:1 ����:2 ��:3):");
	scanf_s("%d", &user);
	printf("��ǻ�� ���������� �Է�(����:1 ����:2 ��:3):");
	scanf_s("%d", &com);

	int sum = user - com;
	if (sum == -2 || sum == 1) goto end;
	else if (sum == -1 || sum == 2) {
		puts("��ǻ�Ͱ� �̱�");
		goto again;
	}
	else {
		puts("���");
		goto again;
	}

end:
	printf("������ �̱�");
	return 0;

}