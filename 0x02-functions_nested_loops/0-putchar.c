#include "main.h"
/**
 * main- print "_putchar" followed by a new line.
 * description: you are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{ 
	char	var[]	=	"_putchar";
	int	i	=	0;
	while	(var[i]	!=	'/0')
	{
		_putchar	(var[i]);
		i++;
	}
	_putchar	('\n');
	return(0);
}

