/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:33:21 by agautier          #+#    #+#             */
/*   Updated: 2021/12/18 14:33:30 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strncpy(char *dest, char *src, int len);
void	*ft_memmove(void *dest, const void *src, int n);
void	*ft_memchr(const void *s, int c, int n);

#endif
