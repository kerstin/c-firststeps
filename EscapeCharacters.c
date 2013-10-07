/*	Write a program that produces the following output on the console:

	escape sequence is started with a backslash: \
	for printing a tabulator		use "\t"
	for printing a backslash	(\)	use "\\"
	for printing double quotes	(")	use "\""
	for printing a single quote	(')	use "\'"
	for starting a new line ->
	->							use "\n"
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	printf("escape sequence is started with a backslash: \\\n");
	printf("for printing a tabulator\t\tuse \"\\t\"\n");
	printf("for printing a backslash\t(\\)\tuse \"\\\\\"\n");
	printf("for printing double quotes\t(\")\tuse \"\\\"\"\n");
	printf("for printing a single quote\t(\')\tuse \"\\\'\"\n");
	printf("for starting a new line ->\n");
	printf("->\t\t\t\tuse \"\\n\"\n");

	return 0;
}

