/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoindro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:25:34 by gmoindro          #+#    #+#             */
/*   Updated: 2019/04/25 14:42:46 by gmoindro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*str_dest;
	unsigned char const	*str_src;

	str_dest = (unsigned char*)dest;
	str_src = (unsigned char const*)src;
	while (n > 0)
	{
		*str_dest++ = *str_src++;
		n--;
	}
	return (dest);
}
