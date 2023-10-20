/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dklimkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:02:16 by dklimkin          #+#    #+#             */
/*   Updated: 2023/08/27 21:02:18 by dklimkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)(s + s_len));
	while (s_len--)
	{
		if (s[s_len] == (unsigned char)c)
			return ((char *)(s + s_len));
	}
	return (NULL);
}
