void	ft_putchar(char c);

int		ft_rush02(int x, int y)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	ft_putchar('A');
	if (x > 1)
	{
		while (i < (x-2))
		{
			ft_putchar('B');
			i = i + 1;
		}
		i = 0;
	ft_putchar('A');
	if (y > 1)
		ft_putchar('\n');
	}
	if (y > 1)
	{
		while (j < (y-2) && x > 1)
		{
			ft_putchar('B');
			while (k < (x-2))
			{
				ft_putchar(' ');
				k = k + 1;
			}
			k = 0;
			ft_putchar('B');
			ft_putchar('\n');
			j = j + 1;
		}
	if (x == 1)
	{
		ft_putchar('\n');
		while (k < (y-2))
			{
				ft_putchar('B');
				ft_putchar('\n');
				k = k + 1;
			}
		k = 0;
	}
	}
	if (y > 1)
	{
		ft_putchar('C');
	}
	if (x > 1 && y > 1) 
	{
		while (i < (x-2))
		{
			ft_putchar('B');
			i = i + 1;
		}
	}
	if (x != 1 && y != 1)
		ft_putchar('C');
	return (0);
}
