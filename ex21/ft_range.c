#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int *array;

    if (min >= max)
    {
        array = NULL;
    }
    else
    {
        i = 0;
        array = malloc((max - min) * sizeof(int));
        while (min < max)
        {
            array[i] = min;
            min++;
            i++;
        }
    }
    return (array);
}