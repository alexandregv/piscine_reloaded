/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:18:41 by aguiot--          #+#    #+#             */
/*   Updated: 2018/11/06 15:09:35 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void		display(int argc, char **argv)
{
	int		i;

	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*old;

	i = 1;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j++]) < 0)
			{
				old = argv[i];
				argv[i] = argv[j - 1];
				argv[j - 1] = old;
			}
		}
		i++;
	}
	display(argc, argv);
}
