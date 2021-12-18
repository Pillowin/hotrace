/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:32:27 by agautier          #+#    #+#             */
/*   Updated: 2021/12/18 14:32:28 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

static void	phase1(t_readbuf *readbuf, t_node **hashtable)
{
	t_node			*node;

	node = get_next_node(readbuf);
	while (node)
	{
		add_node(hashtable, node);
		node = get_next_node(readbuf);
	}
}

static void	phase2(t_readbuf *readbuf, t_writebuf *writebuf, t_node **hashtable)
{
	char	*keyword;
	char	*value;
	int		key_len;
	int		val_len;

	keyword = get_next_keyword(readbuf, &key_len);
	while (keyword)
	{
		if (key_len)
		{
			value = seek_value(hashtable, keyword, &val_len);
			if (value)
				writebuffer_add(writebuf, value, "\n", val_len + 1);
			else
				writebuffer_add(writebuf, keyword,
					": Not found.\n", key_len + 13);
		}
		keyword = get_next_keyword(readbuf, &key_len);
	}
}

int	main(void)
{
	static t_readbuf	readbuf;
	t_writebuf			writebuf;
	t_node				**hashtable;

	readbuf.head = 0;
	readbuf.end = 0;
	writebuf.head = 0;
	hashtable = init_hashtable();
	if (!hashtable)
		return (1);
	phase1(&readbuf, hashtable);
	phase2(&readbuf, &writebuf, hashtable);
	writebuffer_print(&writebuf);
	free_hashtable(hashtable);
	return (!readbuf.eof_reached || readbuf.head < readbuf.end);
}
