#!/bin/bash

#include "main.h"
#include "stdio.h"

int main(void)
{ 
	char var[] = "_putchar";
	int i = 0;

	while  (var[i] != '\0')
	{
		_putchar(var[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

