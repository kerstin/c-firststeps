/*	Write a program HelloYou that asks the user
	for her name and then greets her friendly.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	char username[20];

	printf("Hi, what's your name?\n");
	scanf("%s", username);
	printf("Hello %s, nice to meet you!\n", username);

	return 0;
}
