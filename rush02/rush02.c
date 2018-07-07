/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:33:12 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/07 20:08:24 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

int		ft_rush02(int x, int y)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	
	if(x>0 && y>0)
	{
	ft_putchar('A');
	if(x==3 && y==2)
	{
		ft_putchar('B');
		ft_putchar('A');
	}
	while(j < (y-2))
	{
		while(i < (x-2))
		{
			ft_putchar('B');
		i = i + 1;
		if(i == (x-2))
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		}
		if(x==1)
			ft_putchar('\n');
		if(x!=2)
			ft_putchar('B');
		while(k < (x-2))
		{
			ft_putchar(' ');
			k = k + 1;
		}
	k = 0;
	if(x!=1 && x!=2)
	{
	ft_putchar('B');
	ft_putchar('\n');
	}
	j = j + 1;
	}
	if(j == (y-2))
	{
		if(y >= 2 && x!=2)
		{
			if(x == 2)
				ft_putchar('A');
			if(y == 2)
				ft_putchar('\n');
			if(x==1 && y==3)
				ft_putchar('\n');
		ft_putchar('C');
		}
	}
	while(l < (x-2))
	{
		ft_putchar('B');
		l = l + 1;
	}
	if(x > 2 && y == 1)
		ft_putchar('A');
	if(x == 2 && y != 2)
		ft_putchar('A');
	if(y!=1 && y!=2 && x!=1 && x!=2)
		ft_putchar('C');
	if(y == 2)
	{
			if(x==2 && y==2)
			{
				ft_putchar('A');
				ft_putchar('\n');
				ft_putchar('C');
			}
		ft_putchar('C');
	}
	if(x == 2 && y ==3)
	{
		ft_putchar('\n');
		ft_putchar('B');
		ft_putchar('B');
		ft_putchar('\n');
		ft_putchar('C');
		ft_putchar('C');
	}
	}
	return(0);
}
