/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:29:53 by acesar-m          #+#    #+#             */
/*   Updated: 2024/11/04 17:04:30 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
// # define BUFFER_SIZE 10
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	char			buf[BUFFER_SIZE + 1];
	int				start;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
char	*ft_strchr(char *s, char c);
size_t	ft_strsize(const char *str);
size_t	ft_lstlen(t_list *lst);
void	*ft_lstclear(t_list *lst);

#endif
