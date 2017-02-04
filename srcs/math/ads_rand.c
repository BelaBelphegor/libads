/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ads_rand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiboitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 16:45:06 by tiboitel          #+#    #+#             */
/*   Updated: 2017/02/04 17:46:46 by tiboitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ads_math.h"

void	ads_random_generator_set_seed(uint32_t seed)
{
	srand(seed);
}

void	ads_random_generator_reset_seed(void)
{
	uint32_t	seed;

	seed = getpid();
	seed = ((seed >> 16) ^ seed) * 0x42D9F3B;
	seed = ((seed >> 16) ^ seed) * 0x42D9F3B;
	seed = ((seed >> 16) ^ seed);
	srand(seed * time(NULL));
}

int32_t	ads_rand(void)
{
	return (rand());
}

int32_t	ads_rand_int_max(int max)
{
	return (rand() % (max + 1));
}

int32_t	ads_rand_int_interval(int min, int max)
{
	return (rand() % (max - min + 1) - min);
}

float	ads_rand_float_max(float max)
{
	return (0.0f + (rand() / (RAND_MAX / max)));
}

float	ads_rand_float_interval(float min, float max)
{
	return (min + (rand() / (RAND_MAX / (max - min))));
}

double	ads_rand_double_max(double max)
{
	return (0.0 + (rand() / (RAND_MAX / max)));
}

double	ads_rand_double_interval(double min, double max)
{
	return (min + (rand() / (RAND_MAX / (max - min))));
}
