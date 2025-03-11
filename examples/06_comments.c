/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_comments.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:46:41 by lucafern          #+#    #+#             */
/*   Updated: 2025/03/09 13:46:41 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// function to print even numbers from an array of integers
//   numbers -> a pointer to an array to iterate
//   length  -> the length of the array
void print_even_commented(int *numbers, size_t length)
{
    size_t  i;

    i = 0;
    // Loop through the array of numbers
    while (i < length)
    {
        // Check if the current number is even
        if (numbers[i] % 2 == 0)
        {
            // Print the number if it is even
            printf("%d\n", numbers[i]);
        }
        i++;
    }
}

void print_even(int *numbers, size_t length)
{
    size_t  i;

    i = 0;
    // Print even numbers from the array
    while (i < length)
    {
        if (numbers[i] % 2 == 0)
            printf("%d\n", numbers[i]);
        i++;
    }
}
