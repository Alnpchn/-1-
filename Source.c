#include <locale.h>
#include <stdio.h>
#include "Source.h"



	void main()
{
		setlocale(LC_ALL, "RUS");
		name();
	puts("Hello World!");
}