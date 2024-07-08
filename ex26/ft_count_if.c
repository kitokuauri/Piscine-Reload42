int ft_count_if(char **tab, int (*f)(char*))
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (tab)
    {
        if ((*f)(tab[i]) == 1)
            count += 1;
        i++;
    }
    return (count);
}