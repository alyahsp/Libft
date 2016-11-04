/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spalmaro <spalmaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:58:51 by spalmaro          #+#    #+#             */
/*   Updated: 2016/11/03 17:59:09 by spalmaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *mem;

	mem = NULL;
	if (!(mem = (unsigned char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(mem, 0, size + 1);
	return (mem);
}
