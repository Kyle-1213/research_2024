#include<stdio.h>
#include "strings.h"
#include "string.h"

extern const char* header_string;

int main(){
	//string s = "JJIIHHGGFFEEDDCCBBAA";
	static int x = 123456789;
	char* kyle = "AABBCCDDEEFFGGHHIIJJ";

	int integer = 12;
	const char* const STR = "aabbcc";
	char char_array[20] = "ddeeff gghh";
	char str_copy[20];
	strcpy(str_copy, "String copy!");

	printf("STR: %s\nINTEGER: %d\n", STR, integer);
	printf("Header string: %s\n", header_string);
	printf("Char array: %s\n", char_array);
	printf("String copy: %s\n", str_copy);
	printf("Static int: %d\n", x);
}

