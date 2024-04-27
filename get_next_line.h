/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboudar <hboudar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 02:42:54 by hboudar           #+#    #+#             */
/*   Updated: 2023/12/20 19:42:58 by hboudar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}			t_list;

char	*get_next_line(int fd);
int		ft_lstchar(t_list *list, int i);
t_list	*ft_find_last_node(t_list *list);
void	ft_copy_str(t_list *list, char *str, int i, int k);
int		ft_len_to_newline(t_list *list, int len, int i);
void	ft_free_all(t_list **list, t_list **clean_node, char **buf);

#endif
