#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void text_print(char input[20][80]) {
	char end[2] = "/";

	for (int i = 0; i < 20; i++) {	// /������ ���� ���
		if (strcmp(input[i], end))
			printf("0%d: %s\n", i + 1, input[i]);
		else
			break;
	}
}


int main(void)
{

	char* input = NULL;
	char end[2] = "/";
	char answer[50] = "";

	while (1)
	{
		printf("���:(L:��ü���� I:�Է��ϱ� D:���� C:�ٲٱ�):");

		gets_s(answer, sizeof(answer));
		char alpha;
		int num = 0;
		static int i;
		char* token;
		char first[20];
		char second[20];
		alpha = answer[0];
		num = answer[1] - '0';
		alpha = toupper(alpha);
		if (!strcmp(answer, "end")) break;
		switch (alpha)
		{
		case 'L':
			if (input==NULL)
				printf("(������ �����ϴ�)\n");
			else
			{
				
			}
			break;
			/*
		case 'I':
			printf("������ �Է��ϼ���.�Է��� ������ ù ĭ�� /�� �Է��ϼ���.\n");
			if (num == -48) {
				if (!strcmp(text, ""))
				{
					for (i = 0; i < 20; i++)
					{
						gets_s(input[i], 79);
						strcpy(text[i], input[i]);
						if (!strcmp(input[i], end))
							break;
					}
				}
				else {
					for (int k = 0; i < 20; i++, k++)
					{
						gets_s(input[k], 79);
						strcpy(text[i], input[k]);
						if (!strcmp(input[k], end))
							break;
					}
				}
			}
			else {
				int k;
				num -= 1;
				for (k = 0; num < 20; num++, k++)
				{
					if (!strcmp(text[num], ""))
						break;
					else
						strcpy(insert[k], text[num]);
				}
				num = answer[1] - '0';
				num -= 1;
				for (int p = 0; num < 20; p++, num++)
				{
					gets_s(input[p], 79);
					strcpy(text[num], input[p]);
					if (!strcmp(input[p], end))
					{
						int r;
						for (r = 0; r <= k; r++, num++)
							strcpy(text[num], insert[r]);
						strcpy(text[num], end);
						break;
					}

				}

			}
			text_print(text);
			break;

		case 'D':
			num = answer[1] - '0';
			int k;
			for (k = 0; num < 20; num++, k++)
			{
				if (!strcmp(text[num], ""))
					break;
				else
					strcpy(insert[k], text[num]);
			}
			num = answer[1] - '0';
			num -= 1;
			for (int p = 0; p <= k; p++, num++)
			{
				strcpy(text[num], insert[p]);
			}
			text_print(text);

			break;

		default:
			token = strtok(answer, "/");

			token = strtok(NULL, "/");
			strcpy(first, token);
			token = strtok(NULL, "/");
			strcpy(second, token);
			for (int i = 0; i < 20; i++)
			{
				change = strstr(text[i], first);
				if (change)
					strncpy(change, second, strlen(second));
			}




			text_print(text);


			break;
			*/
		}
			

	}
	return 0;
}