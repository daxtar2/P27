
#include <stdio.h>
#include<string.h>

int main()
{
    int a = 1111111111;
    char s[10] = { '\0' }, s1[10] = { '\0' };
    sprintf_s(s, "%d", a); // 将整数转换为字符串
    int n = strlen(s);
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        s1[j++] = s[i];
    }
    //s[j]='\0';
    printf("%s %s\n", s, s1);
    if (strcmp(s,s1) == 0)
        printf("整数%d是回文串", a);
    else
        printf("整数%d不是回文串", a);
    return 0;
}



//#include<stdio.h>
//#include<string.h>
//
//int main() {
//	int n;
//	printf("Please input a number:\n");
//	scanf_s("%d\n", &n);
//	char s[10] = { '\0' }, s1[10] = {'\0'};
//	sprintf_s(s, "%d", n);
//	int length_s = strlen(s);
//	int length_s1 = 0;
//	for (int i = length_s - 1; length_s >= 0; i--) {
//
//		s1[length_s1++] = s[length_s];
//	}
//	printf("%s,%s\n", s, s1);
//	if (!strcmp(s, s1)) {
//		printf("%d是回文数。\n", n);
//	}
//	else {
//		printf("%d是回文数。\n", n);
//	}
//	return 0;
//	}