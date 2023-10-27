/**
 * main - prints multiplication of 2 numbers
 * @argc: total arguments
 * @argv: array of arguments
 * Return: returns 1 if error, else 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", argv[1 ]* argv[2]);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
