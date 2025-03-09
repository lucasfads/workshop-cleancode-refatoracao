/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_magic_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:04:53 by lucafern          #+#    #+#             */
/*   Updated: 2025/03/09 13:08:56 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	dirty_calculate_area(void)
{
	float	area;

	area = 3.14159 * 5 * 5;
	printf("Example - Magic Numbers\n");
	printf("  Dirty Code: Area = %.2f\n", area);
}

#define PI 3.14159
#define RADIUS 5

void	clean_calculate_area(void)
{
	float	area;

	area = PI * RADIUS * RADIUS;
	printf("  Clean Code: Area = %.2f\n", area);
}

int	main(void)
{
	dirty_calculate_area();
	clean_calculate_area();
	return (0);
}
