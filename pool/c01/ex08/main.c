void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5];

	tab[0] = 5;
	tab[1] = 3;
	tab[2] = 8;
	tab[3] = 1;
	tab[4] = 4;
	ft_sort_int_tab(tab, 5);
	return (0);
}
