#include "libft.h"

int		my_isalpha(int c)
{
	  return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) ? 1 : 0;
}