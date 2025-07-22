#include <limits.h>

int atoihelper(const char *str, int index, int sign, long result)
{
    if (str[index] < '0' || str[index] > '9') {
        return (int)(sign * result);
    }

    int digit = str[index] - '0';
    result = result * 10 + digit;

    if (sign == 1 && result > INT_MAX) return INT_MAX;
    if (sign == -1 && -result < INT_MIN) return INT_MIN;

    return atoihelper(str, index + 1, sign, result);
}

int my_atoi(const char *str)
{
    int i = 0;
    int sign = 1;


    while (str[i] == ' ' || str[i] == '\t') 
	i++;
    sign = (str[i] == '-') ? -1 : (str[i] == '+') ? 1 : sign;
    i = (str[i] == '+' || str[i] == '-') ? i + 1 : i;

    return atoihelper(str, i, sign, 0);
}