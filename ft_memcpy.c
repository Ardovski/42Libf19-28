/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uardaozdes <uardaozdes@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:37:03 by uardaozdes        #+#    #+#             */
/*   Updated: 2025/06/12 17:13:47 by uardaozdes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*buffer_dest;
	const char	*buffer_src;

	if (!dest && !src)
		return (0);
	i = 0;
	buffer_src = (const char *)src;
	buffer_dest = (char *)dest;
	while (i < n)
	{
		buffer_dest[i] = buffer_src[i];
		i++;
	}
	return (dest);
}
