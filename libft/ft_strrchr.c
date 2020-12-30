/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjki <hyungjki@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 10:50:43 by hyungjki          #+#    #+#             */
/*   Updated: 2020/12/30 06:33:49 by hyungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *end;

	if (c == '\0')
		return (ft_strchr(s, c));
	end = (char *)s;
	while (*end)
		end++;
	while (end != s && *end != (char)c)
		end--;
	if (*end == (char)c)
		return (end);
	return (0);
}
