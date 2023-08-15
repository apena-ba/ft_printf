/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_escribir.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apena-ba <apena-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:16:52 by apena-ba          #+#    #+#             */
/*   Updated: 2022/05/04 18:24:00 by apena-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_escribir(int c, size_t *cont)
{
	write(1, &c, 1);
	*cont = *cont + 1;
}
