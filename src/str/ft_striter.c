/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:28:49 by kcharla           #+#    #+#             */
/*   Updated: 2020/03/26 14:20:44 by hush             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	i = 0;
	if (s == 0)
		return ;
	if (f == 0)
		return ;
	while (s[i] != '\0')
	{
		f(&s[i]);
		i++;
	}
}