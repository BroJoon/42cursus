/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjki <hyungjki@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 07:51:02 by hyungjki          #+#    #+#             */
/*   Updated: 2020/12/28 10:02:13 by hyungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cur;

	if (!n)
		return (0);
	cur = 0;
	while (cur++ < n)
	{
		if (*((unsigned char *)s1++) != (*(unsigned char *)s2++))
			break ;
	}
	if (n == cur)
		return (0);
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
