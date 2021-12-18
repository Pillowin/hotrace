/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:33:09 by agautier          #+#    #+#             */
/*   Updated: 2021/12/18 14:33:14 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H

# include "hashtable.h"
# include "buffer.h"

t_node	*get_next_node(t_readbuf *buf);
char	*get_next_keyword(t_readbuf *buf, int *key_len);

#endif
