/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:32:44 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/14 09:59:21 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
	
}
int main(void)
{
	int	a;
	int	b;
	int *pa;
	int	*pb;

	a = 4;
	b = 5;
	pa = &a;
	pb = &b;
	ft_swap(pa, pb);
}
