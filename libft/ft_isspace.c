/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 15:56:27 by dbendaou          #+#    #+#             */
/*   Updated: 2015/12/03 15:58:06 by dbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	if (c == '\n' || c == '\r' || c == '\t' ||
			c == '\v' || c == ' ' || c == '\f')
		return (1);
	else
		return (0);
}
