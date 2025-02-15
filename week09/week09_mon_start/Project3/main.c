#include "student.h"
#include <stdio.h>
#include <stdlib.h>

// prog71990-f24 - steveh - week09 in class

// programe  name studentnum
int main(int argc, char** argv) {

	if (argc != 3) {
		fprintf(stderr, "usage: %s <name> <number>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	STUDENT s = CreateStudent(argv[1], atoi(argv[2]));

	PrintStudent(s);

	DestroyStudent(s);

	return 0;
}
