#include <stdio.h>
int main ()
{
  int soma, num;

  printf ("digite a sequencia, sendo o ultimo numero 0:\n");
  num = 1;

  while (num != 0)
	{

	  scanf ("%d", &num);

	  if (num != 0) /*verifica se o valor impresso é zero para travar o sistema e não entrar na conta*/
		{
		  if (num % 2 == 0) /* verifica se é par*/
			{
			  if (num % 10 == 0) /* verifica se é 10 20 30 ou algum numero terminado zero*/
				{
				  soma += num;
				}
			}
		}
	  else
		{
		  break;
		}
	}
  printf ("a soma C) igual a %d", soma);
  return 0;
}