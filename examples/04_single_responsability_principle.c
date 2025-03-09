/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_single_responsability_principle.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:22:13 by lucafern          #+#    #+#             */
/*   Updated: 2025/03/09 13:31:32 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Dirty Code
void	dirty_process_scores(int *scores, int count)
{
	int		sum;
	int		i;
	double	average;

	sum = 0;
	i = 0;
	while (i < count)
	{
		sum += scores[i];
		i++;
	}
	average = (double)sum / count;
	printf("Dirty: Sum = %d, Average = %.2f\n", sum, average);
	if (average >= 50)
	{
		printf("Dirty: Result: PASS\n");
	}
	else
	{
		printf("Dirty: Result: FAIL\n");
	}
}

// Clean Code
int	calculate_sum(const int *scores, int count)
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (i < count)
	{
		sum += scores[i];
		i++;
	}
	return (sum);
}

double	calculate_average(int sum, int count)
{
	return ((double)sum / count);
}

const char	*evaluate_result(double average)
{
	return ((average >= 50) ? "PASS" : "FAIL");
}

void	display_results(int sum, double average, const char *evaluation)
{
	printf("Clean: Sum = %d, Average = %.2f\n", sum, average);
	printf("Clean: Result: %s\n", evaluation);
}

int	main(void)
{
	int			scores[5];
	int			count;
	int			sum;
	double		average;
	const char	*evaluation;

	scores[0] = 45;
	scores[1] = 55;
	scores[2] = 65;
	scores[3] = 70;
	scores[4] = 80;
	count = sizeof(scores) / sizeof(scores[0]);
	dirty_process_scores(scores, count);
	printf("\n");
	sum = calculate_sum(scores, count);
	average = calculate_average(sum, count);
	evaluation = evaluate_result(average);
	display_results(sum, average, evaluation);
	return (0);
}
