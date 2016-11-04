/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalmaro <spalmaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:35:05 by spalmaro          #+#    #+#             */
/*   Updated: 2016/11/03 17:10:56 by spalmaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	if (ft_strlen(src) < len)
		ft_memset(dst, '\0', ft_strlen(dst));
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
