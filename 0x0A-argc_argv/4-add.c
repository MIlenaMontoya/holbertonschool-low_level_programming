#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc argv
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
  int sum = 0;
  int i;
  if (argc)
    {
      printf("Error\n");
      return (1);
    }
  for (i = 0; i != argc; i++)
  sum = atoi(argv[1]) + atoi(argv[2]);
  printf("%d\n", sum);
  return (0);
}
