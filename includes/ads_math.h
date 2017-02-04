/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ADS_Math.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiboitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 15:54:27 by tiboitel          #+#    #+#             */
/*   Updated: 2017/02/04 16:54:10 by tiboitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ADS_MATH_H
# define FT_ADS_MATH_H

# include <unistd.h>
# include <sys/types.h>
# include <stdint.h>
# include <stdlib.h>
# include <time.h>

/*
** @ Random section prototypes. Functions at ads_random.c
** Need to add the type of distribution.
*/
typedef enum	e_random_distribution
{
	DISTRIBUTION_DEFAULT, DISTRIBUTION_UNIFORM
}				t_random_distribution;

void	ads_rand_set_seed(uint32_t seed);
void	ads_rand_reset_seed(void);
int32_t	ads_rand(void);
int32_t	ads_rand_int_max(int max);
int32_t	ads_rand_int_interval(int min, int max);
float	ads_rand_float_max(float max);
float	ads_rand_float_interval(float min, float max);
double	ads_rand_double_max(double max);
double	ads_rand_double_interval(double min, double max);

#endif
