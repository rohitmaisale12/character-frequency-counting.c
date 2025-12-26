//count frequency of each character(lowercase only)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int count;
	printf("enter the string:");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	for (int i = 0;str[i] != '\0';i++) {
		if (str[i] == '#')
			continue;
		count = 1;
		for (int j = i + 1;str[j] != '\0';j++) {
			if (str[i] == str[j]) {
				count++;
				str[j] = '#';
			}
		}
		printf("%c:%d\n", str[i], count);
	}
	return 0;
}
output:--
	enter the string:google
g:2
o:2
l:1
e:1
