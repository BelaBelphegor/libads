/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ads_data_structure.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiboitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 16:56:14 by tiboitel          #+#    #+#             */
/*   Updated: 2017/02/04 18:37:22 by tiboitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ADS_DATA_STRUCTURE_H
# define FT_ADS_DATA_STRUCTURE_H

# include <stdio.h>
# include <sys/types.h>
# include <stdlib.h>

/*
** __cplusplus
*/

/*
** #ifdef __cpluplus
** extern "C"
** {
** #endif
*/

typedef enum			e_ads_bool
{
	FALSE = 0, TRUE = 1
}						t_bool;

typedef void *			t_ads_element;

typedef struct			s_ads_node
{
	struct s_ads_node	*next;
	struct s_ads_node	*prev;
	t_ads_element		content;
}						t_ads_node;

/*
** 1. Linked node section.
** @ Management functions of linked node.
*/
t_ads_node				*ads_node_create(void);
t_ads_element			*ads_node_free(t_ads_node *node);
/*
** @ Modification functions for linked node.
*/
void					ads_node_set_next(t_ads_node *node, \
							t_ads_node *next);
void					ads_node_set_prev(t_ads_node *node, \
							t_ads_node *prev);
void					ads_node_set_content(t_ads_node *node, \
							t_ads_element *content);

/*
** #ifdef 	__cplusplus
** }
** #endif
*/
#endif
