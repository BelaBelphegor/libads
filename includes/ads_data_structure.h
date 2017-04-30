/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ads_data_structure.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiboitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 16:56:14 by tiboitel          #+#    #+#             */
/*   Updated: 2017/02/07 01:06:27 by tiboitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ADS_DATA_STRUCTURE_H
# define FT_ADS_DATA_STRUCTURE_H

# include <stdio.h>
# include <sys/types.h>
# include <stdlib.h>

#ifdef __cpluplus
# define EXTERN extern 'C' {
# define SEMICOLON }
EXTERN
#endif

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

typedef t_ads_node		t_ads_list;
typedef void			(* t_ads_free_function)(t_ads_element *element);
typedef void			(* t_ads_cmp_function)(const t_ads_element *a, void *b);
typedef void			(* t_ads_map_function)(const t_ads_element *element, void *value);
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
void					ads_node_link(t_ads_node *current, t_ads_node *next);
void					ads_node_unlink(t_ads_node *first, t_ads_node *second);
/*
** 2. Linked list section.
** @ Management functions of linked list.
*/
t_ads_list				*ads_list_create(t_ads_element *content);
void					ads_list_free(t_ads_list *list, const t_ads_free_function f);
t_bool					ads_list_is_empty(const t_ads_list *list);
int32_t					ads_list_get_size(const t_ads_list *list);
void					ads_list_link(t_ads_list *current, t_ads_list *next);
void					ads_list_pushfront(t_ads_list *head, t_ads_list *list);
void					ads_list_pushback(t_ads_list *head, t_ads_list *list);
void					ads_list_insert_after(t_ads_list *prev, t_ads_list *list);
void					ads_list_insert_before(t_ads_list *next, t_ads_list *list);
void					ads_list_delete(t_ads_list *list);
void					ads_list_search(t_ads_list *lst, const t_ads_cmp_function *f, \
							void *value);
void					ads_list_map(const t_ads_list *list, t_ads_map_function *f, \
							void *value);
#ifdef 	__cplusplus
SEMICOLON
#endif

#endif
