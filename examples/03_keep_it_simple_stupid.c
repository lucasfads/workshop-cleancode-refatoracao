/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_keep_it_simple_stupid.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:18:49 by lucafern          #+#    #+#             */
/*   Updated: 2025/03/09 15:13:16 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

const char	*dirty_get_day(int day)
{
	if (day == 1)
		return ("Monday");
	else if (day == 2)
		return ("Tuesday");
	else if (day == 3)
		return ("Wednesday");
	else if (day == 4)
		return ("Thursday");
	else if (day == 5)
		return ("Friday");
	else if (day == 6)
		return ("Saturday");
	else if (day == 7)
		return ("Sunday");
	else
		return ("Invalid day");
}

const char	*clean_get_day(int day)
{
	const char	*days[8];

	days[0] = "Invalid day";
	days[1] = "Monday";
	days[2] = "Tuesday";
	days[3] = "Wednesday";
	days[4] = "Thursday";
	days[5] = "Friday";
	days[6] = "Saturday";
	days[7] = "Sunday";
	if (day < 1 || day > 7)
		return (days[0]);
	return (days[day]);
}

int	main(void)
{
	int	day;

	day = 4;
	printf("Example - Keep It Simple, Stupid\n");
	printf("Day: %d\n", day);
	printf("  Dirty Code: %s\n", dirty_get_day(day));
	printf("  Clean Code: %s\n", clean_get_day(day));
	return (0);
}
