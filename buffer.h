/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:32:56 by agautier          #+#    #+#             */
/*   Updated: 2021/12/18 14:32:57 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_H
# define BUFFER_H

# ifndef READBUF_SIZE
#  define READBUF_SIZE 40000000
# endif

# ifndef WRITEBUF_SIZE
#  define WRITEBUF_SIZE 5000000
# endif

typedef struct s_readbuf
{
	char	data[READBUF_SIZE];
	int		head;
	int		end;
	int		eof_reached;
}	t_readbuf;

typedef struct s_writebuf
{
	char	str[WRITEBUF_SIZE];
	int		head;
}	t_writebuf;

void	writebuffer_print(t_writebuf *writebuf);
void	writebuffer_add(t_writebuf *writebuf, char *str, char *str2, int len);

#endif
