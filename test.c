#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int my_strlen(char* str) {//ָ�������һ�����õ���arr����ĵ�һ��Ԫ��
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}


//�����������������������ʱ����
//�����ܴ���������

//���õݹ���
int my_strlen2(char* str) {
	if (*str != '\0')
		return 1 + my_strlen2(str + 1);
	else
		return 0;
}
//�����»�С
//mystrlen2("wcnm") ->  1+mystrlen2("cnm") ->  2+mystrlen2("nm") -> 3+mystrlen2("m") ->  4+0


int main() {
	char arr[] = "wcnm";
	//дһ���������������ַ�������

	int len = my_strlen(arr);
	printf("len = %d\n", len);
	int len2 = my_strlen2(arr);
	printf("len = %d\n", len2);
	return 0;
}