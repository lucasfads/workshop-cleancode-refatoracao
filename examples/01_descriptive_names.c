/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_descriptive_names.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:48:25 by lucafern          #+#    #+#             */
/*   Updated: 2025/03/09 13:02:51 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	my_func(int a, int b)
{
	return (a + b);
}

int	add_numbers(int number_one, int number_two)
{
	return (number_one + number_two);
}

int	main(void)
{
	int	result_dirty;
	int	result_clean;

	result_dirty = my_func(5, 10);
	result_clean = add_numbers(5, 10);
	printf("Example - Descriptive Names\n");
	printf("  Dirty Code: my_func(5, 10) = %d\n", result_dirty);
	printf("  Clean Code: add_numbers(5, 10) = %d\n", result_clean);
	return (0);
}
