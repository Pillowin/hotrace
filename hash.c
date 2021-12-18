/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:32:13 by agautier          #+#    #+#             */
/*   Updated: 2021/12/18 14:32:18 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashtable.h"

unsigned int	hash(const char *keyword)
{
	unsigned int	hash;

	hash = 4603;
	while (*keyword)
		hash = hash * 101 + *keyword++;
	return (hash % HASH_MODULUS);
}
