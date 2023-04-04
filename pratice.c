#include<stdio.h>
int age(int age1[]) {
	int i;
	for (i = 0; i < 4; i++)
	{
		age1[i + 1] = age1[i] + 2;
	}
}
void main() {
	int age1[5], i;
	age1[0] = 10;
	age(age1);
	 for (i = 0; i < 5; i++) {
		 printf("%d ", age1[i]);
	 }
	
}