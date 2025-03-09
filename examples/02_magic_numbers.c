/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_magic_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:04:53 by lucafern          #+#    #+#             */
/*   Updated: 2025/03/09 13:17:19 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

float	dirty_calculate_circle_area(void)
{
	float	area;

	area = 3.14159 * 5 * 5;
	return (area);
}

#define PI 3.14159
#define RADIUS 5

float	clean_calculate_circle_area(void)
{
	float	area;

	area = PI * RADIUS * RADIUS;
	return (area);
}

int	main(void)
{
	float	dirty_area;
	float	clean_area;

	dirty_area = dirty_calculate_circle_area();
	clean_area = clean_calculate_circle_area();
	printf("Example - Magic Numbers\n");
	printf("  Dirty Code: Area = %.2f\n", dirty_area);
	printf("  Clean Code: Area = %.2f\n", clean_area);
	return (0);
}
