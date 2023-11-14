#include "shell.h"

/**
 * printer - this is  the print function for our shell code
 * @text: a pointer for the text to be printed
 **/

void printer(const char *text)
{
	write(STDOUT_FILENO, text, strlen(text));
}
