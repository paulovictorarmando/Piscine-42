/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:02:14 by parmando          #+#    #+#             */
/*   Updated: 2024/03/20 11:02:19 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ctoi(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	return (-1);
}

int	ft_pow(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power--)
		result *= nb;
	return (result);
}

int	ft_check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a' \
				&& base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (i);
}

int	tamanho(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	negative;
	int	i;
	int	pow;
	int	base_type;

	negative = 1;
	i = 0;
	base_type = ft_check_base(base);
	if (base_type)
	{
		if (*str == '-')
		{
			negative = -1;
		}
		i = tamanho(str);
		pow = 0;
		num = 0;
		while (--i >= 0)
			if ((ft_ctoi(str[i]) != -1) && (ft_ctoi(str[i]) < base_type))
				num += ft_ctoi(str[i]) * ft_pow(base_type, pow++);
		return (num * negative);
	}
	return (0);
}
