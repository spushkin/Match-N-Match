/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spushkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 18:42:06 by spushkin          #+#    #+#             */
/*   Updated: 2018/05/27 18:42:44 by spushkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1)
			return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
		return (nmatch(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		if (*s1)
			return (nmatch(s1 + 1, s2 + 1));
		return (1);
	}
	return (0);
}
