#include <stdio.h>
#include <stdlib.h>

int main() {

	float num1, num2, maior;

	printf("Informe um numero qualquer");
	scanf_s("%2.f", &num1);

	printf("Informe outro numero qualquer");
	scanf_s("%2.f", &num2);

	if (num1 > num2)
	{
		printf("\n\nO numero maior eh: %2.f\n", num1);
	}
	else {
		printf("\nO numero maior eh: %2.f\n", num2);
	}

	system("Pause");
	return 0;
}
