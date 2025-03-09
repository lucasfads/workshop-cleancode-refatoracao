/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_dont_repeat_yourself.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 13:36:27 by lucafern          #+#    #+#             */
/*   Updated: 2025/03/09 13:45:23 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_product
{
	char	*name;
	float	price;
	int		quantity;
}			t_product;

// Dirty Code
void	dirty_calculate_products(void)
{
	t_product	p1;
	t_product	p2;
	t_product	p3;

	p1.name = "Product A";
	p1.price = 10.0;
	p1.quantity = 3;
	p2.name = "Product B";
	p2.price = 20.0;
	p2.quantity = 2;
	p3.name = "Product C";
	p3.price = 5.0;
	p3.quantity = 10;
	printf("Product: %s\n", p1.name);
	printf("Price: %.2f\n", p1.price);
	printf("Quantity: %d\n", p1.quantity);
	printf("Total: %.2f\n\n", p1.price * p1.quantity);
	printf("Product: %s\n", p2.name);
	printf("Price: %.2f\n", p2.price);
	printf("Quantity: %d\n", p2.quantity);
	printf("Total: %.2f\n\n", p2.price * p2.quantity);
	printf("Product: %s\n", p3.name);
	printf("Price: %.2f\n", p3.price);
	printf("Quantity: %d\n", p3.quantity);
	printf("Total: %.2f\n\n", p3.price * p3.quantity);
}

// Clean Code
t_product	create_product(char *name, float price, int quantity)
{
	t_product	product;

	product.name = name;
	product.price = price;
	product.quantity = quantity;
	return (product);
}

void	print_product(const t_product *p)
{
	printf("Product: %s\n", p->name);
	printf("Price: %.2f\n", p->price);
	printf("Quantity: %d\n", p->quantity);
	printf("Total: %.2f\n\n", p->price * p->quantity);
}

void	clean_calculate_products(void)
{
	int			count;
	int			i;
	t_product	products[3];

	products[0] = create_product("Product A", 10.0, 3);
	products[1] = create_product("Product B", 20.0, 2);
	products[2] = create_product("Product C", 5.0, 10);
	count = sizeof(products) / sizeof(products[0]);
	i = 0;
	while (i < count)
	{
		print_product(&products[i]);
		i++;
	}
}

int	main(void)
{
	printf("Dirty Code:\n");
	dirty_calculate_products();
	printf("#####################\n");
	printf("Clean Code:\n");
	clean_calculate_products();
	return (0);
}
