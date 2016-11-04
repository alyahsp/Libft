/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalmaro <spalmaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:35:03 by spalmaro          #+#    #+#             */
/*   Updated: 2016/11/04 14:46:27 by spalmaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1u;
	unsigned char	*s2u;

	i = 0;
	s1u = (unsigned char*)s1;
	s2u = (unsigned char*)s2;
	while (i < n)
	{
		if (s1u[i] == s2u[i])
			i++;
		else
			return (s1u[i] - s2u[i]);
	}
	return (0);
}
