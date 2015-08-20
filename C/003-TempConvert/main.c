#include <stdio.h>

int main(void)
{
	printf("From [temp][c|f|k]:");

	char from;
	double original;
	scanf("%lf%c", &original, &from);

	printf("To [c|f|k]:");
	
	getchar();
	char to;
	scanf("%c", &to);

	switch (from) 
	{
		case 'c':
			switch (to)
			{
				case 'c':
					printf("%f", original);
					break;
				case 'f':
					printf("%f", (((original * 9) / 5 ) + 32));
					break;
				case 'k':
					printf("%f", (original + 273.15));
					break;
				default:
					printf("Incorrect Conversion Specifier");
					break;
			}
			break;
		case 'f':
			switch (to)
			{
				case 'c':
					printf("%f", (((original - 32) * 5) / 9));
					break;
				case 'f':
					printf("%f", original);
					break;
				case 'k':
					printf("%f", (((original - 32) / 1.8000) + 273.15));
					break;
				default:
					printf("Incorrect Conversion Specifier");
					break;
			}
			break;
		case 'k':
			switch (to)
			{
				case 'c':
					printf("%f", (original - 273.15));
					break;
				case 'f':
					printf("%f", (((original - 273.15) * 1.8000) + 32));
					break;
				case 'k':
					printf("%f", original);
					break;
				default:
					printf("Incorrect Conversion Specifier");
					break;
			}
			break;
		default:
			printf("Incorrect Temperature Specifier");
			break;
	}
	return 0;
}

