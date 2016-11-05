/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalmaro <spalmaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:08:30 by spalmaro          #+#    #+#             */
/*   Updated: 2016/11/04 14:44:19 by spalmaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new;

	i = 0;
	new = NULL;
	if (!(new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	if (s && f)
	{
		while (s[i])
		{
			new[i] = (*f)(s[i]);
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
