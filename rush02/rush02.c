void	ft_putchar(char c);

void	ft_firstlign(int x, int y)
{
	int i;

	i = 0;
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

void	ft_column(int x, int y)
{
	int j;
	int k;

	j = 0;
	k = 0;
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
}

void	ft_lastlign(int x)
{
	int i;

	i = 0;
	while (i < (x-2))
	{
		ft_putchar('B');
		i = i + 1;
	}
}

void	ft_onecolumn(int y)
{
	int k;

	k = 0;
	ft_putchar('\n');
	while (k < (y-2))
	{
		ft_putchar('B');
		ft_putchar('\n');
		k = k + 1;
	}
}

int		ft_rush02(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_putchar('A');
		if (x > 1)
			ft_firstlign(x, y);
		if (y > 1)
		{
			ft_column(x, y);
			if (x == 1)
				ft_onecolumn(y);
		}
		if (y > 1)
			ft_putchar('C');
		if (x > 1 && y > 1)
			ft_lastlign(x);
		if (x != 1 && y != 1)
			ft_putchar('C');
	}
	return (0);
}
