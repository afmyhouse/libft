/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:28:11 by antoda-s          #+#    #+#             */
/*   Updated: 2022/11/17 13:48:24 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*dest;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1)+ft_strlen(s2)+1;
	dest = (char *)malloc(len);
	if (!dest)
		return (NULL);
	while (*s1)
	{
		*dest++ = *s1++;
	}
	while (*s2)
	{
		*dest++ = *s2++;
	}
	*dest = '\0';
	dest -= (len - 1);
	return (dest);
}
