#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int my_strlen(char* str) {//指针变量第一次引用的是arr数组的第一个元素
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}


//假如编译器函数不允许创建临时变量
//即不能创建计数器

//采用递归解决
int my_strlen2(char* str) {
	if (*str != '\0')
		return 1 + my_strlen2(str + 1);
	else
		return 0;
}
//将大事化小
//mystrlen2("wcnm") ->  1+mystrlen2("cnm") ->  2+mystrlen2("nm") -> 3+mystrlen2("m") ->  4+0


int main() {
	char arr[] = "wcnm";
	//写一个函数，用于求字符串长度

	int len = my_strlen(arr);
	printf("len = %d\n", len);
	int len2 = my_strlen2(arr);
	printf("len = %d\n", len2);
	return 0;
}