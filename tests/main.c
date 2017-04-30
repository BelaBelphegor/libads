/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiboitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 20:22:19 by tiboitel          #+#    #+#             */
/*   Updated: 2017/04/30 20:25:28 by tiboitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "minunit.h"

int tests_run = 0;

/*
 * static char	*foo_bar()
 * {
 * 	mu_assert("error, foo != 7", foo == 7);
 * }
 */

static char		*all_tests()
{
	// mu_run_test();
	return (0);
}

int				main(void)
{
	char	*result;

	result = all_tests();
	if (result != 0)
	{
		printf("%s\n", result);
	}
	else
	{
		printf("All tests passed.\n");
	}
	printf("Tests run: %d\n", tests_run);
	return (results != 0);
}
