int main(int argc, char *argv)
{
    if (argc <= 0)
        ft_putstr("File name missing.\n");
    else if (argc > 1)
        ft_putstr("Too many arguments.\n");
    else
        ft_display_file(argv);
    return (1);
}