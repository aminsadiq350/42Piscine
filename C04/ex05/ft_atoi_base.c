#include <stdio.h>

int     ft_check_invalid_base(char *base)
{
        int index;
        int index_2;

        index = 0;
        index_2 = 0;
        if (base[index] == '\0' || base[index + 1] == '\0')
                return (0);
        while (base[index] != '\0')
        {
                index_2 = index + 1;
                while (base[index_2] != '\0')
                {
                        if (base[index] == base[index_2])
                                return (0);
                        index_2++;
                }
                if (!((base[index] >= '0' && base[index] <= '9') ||
                        (base[index] >= 'A' && base[index] <= 'F') ||
                        (base[index] >= 'n' && base[index] <= 'p') || base[index] == 'e' ||
                        base[index] == 'y' || base[index] == 'v' || base[index] == 'i' ||
                        base[index] == 'f'))
                        return (0);
                index++;
        }
        return (1);
}

int ft_length(char *str)
{
    int counter;

    counter = 0;
    while(str[counter] != '\0')
        counter++;
    return (counter);
}

char    *ft_sanitize_input(char *str, char *base)
{
	int index;
	int neg_multi;
	int result;
    int base_num;

	index = 0;
	result = 0;
	neg_multi = 1;
	while (str[index] == '\t' || str[index] == '\n' || str[index] == '\v'
			|| str[index] == '\f' || str[index] == '\r' || str[index] == ' ')
	{
		index++;
	}
	while ((str[index] == '-' || str[index] == '+'))
	{
		if (str[index] == '-')
			neg_multi = -1 * neg_multi;
		index++;
	}
    base_num = ft_length(base);
    if (base_num == 2)
    {
        while(str[index] == 1 || str[index] == 0){
            result = (result * 10) + (str[index] - '0');
            index++;
        }
    }
    else if (base_num == 8)
    {
        while ((base[index] >= 'n' && base[index] <= 'p') || base[index] == 'e' || base[index] == 'y' || base[index] == 'v' || base[index] == 'i' || base[index] == 'f')
	    {
            result = (result * 10) + (str[index] - '0');
            index++;
	    }
    }
    else if (base_num == 10)
    {
        while (str[index] >= '0' && str[index] <= '9')
	    {
            result = (result * 10) + (str[index] - '0');
            index++;
	    }
    }
    else if (base_num == 16)
    {
        while ((str[index] >= '0' && str[index] <= '9') || (str[index] >= 'A' && str[index] <= 'F'))
	    {
            result = (result * 10) + (str[index] - '0');
            index++;
	    }
    }
	result = neg_multi * result;
	return (result);
}

int cal_power(int digit, int base_num)
{
    int result;

    result = 1;
    while(digit > 1)
    {   
        result = result * base_num;
        digit--;
    }
    return (result);
}

int hex_converter(char *str, int digits)
{
    int result;
    int index;
    int base;

    base = 1;
    result = 0;
    index = digits--;
    while(index >= 0)
    {
        if(str[index] >= '0' && str[index] <= '9')
        {
            result += (str[index] - 48) * base;
            base *= 16;
        }
        else if(str[index] >= 'A' && str[index] <= 'F')
        {
            result += (str[index] - 55) * base;
            base *= 16;
        }
        else if(str[index] >= 'a' && str[index] <= 'f')
        {
            result += (str[index] - 87) * base;
            base *= 16;
        }
        digits--;
        index--;
    }
    return (result);
}

int ft_atoi_base(char *str, char *base)
{
    int base_num;
    int digits;
    int index;
    int result;

    base_num = 0;
    digits = 0;
    result = 0;
    index = 0;

    if (ft_check_invalid_base(base))
    {
        if (ft_sanitize_input(str, base))
        {
            
        }
            base_num = ft_length(base);
            digits = ft_length(str);
            if (base_num == 16)
            {
                result = hex_converter(str, digits);
            }
            else
            {
                while(digits > 0)
                {       
                    result += (str[index] - '0') *  cal_power(digits, base_num);
                    digits--;
                    index++;
                }   
            }
    }
    return (result);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_atoi_base("1010", "01"));
}
// handle invalid input