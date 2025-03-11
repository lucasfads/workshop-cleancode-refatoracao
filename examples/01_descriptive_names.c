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

// Abreviações são difíceis de entender sem um bom contexto
// calc_ut -> difícil de entender
// u       -> fácil de entender, pelo tipo da struct
int calc_ut(t_user *u);

// Sem abreviação
int calculate_user_taxes(t_user *u);

// Dirty: Nome sobre a implementação
void brasehamns_algorithm(int x1, int y1, int x2, int y2);

// Clean: Nome sobre o que a função faz
void render_line(int start_x, int start_y, int end_x, int end_y);

// Nome não explica o que a função faz
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
