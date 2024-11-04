/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:50:35 by acesar-m          #+#    #+#             */
/*   Updated: 2024/11/04 15:17:01 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

size_t	ft_strsize(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_lstlen(t_list *lst)
{
	size_t	len;

	len = 0;
	while (lst != NULL)
	{
		len += ft_strsize(lst->buf);
		lst = lst->next;
	}
	return (len);
}

void	*ft_lstclear(t_list *lst)
{
	t_list	*temp;

	while (lst != NULL)
	{
		temp = (lst)->next;
		free(lst);
		lst = temp;
	}
	lst = NULL;
	return (NULL);
}
