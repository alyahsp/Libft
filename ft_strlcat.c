/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalmaro <spalmaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:34:47 by spalmaro          #+#    #+#             */
/*   Updated: 2016/11/04 14:43:52 by spalmaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;
	int		j;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && i < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	if (size <= len_d)
		return (size + len_s);
	return (len_d + len_s);
}
