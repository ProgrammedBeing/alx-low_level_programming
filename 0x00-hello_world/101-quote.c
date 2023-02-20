#include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	syscall(SYS_write, 1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
