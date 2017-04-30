/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ads_linked_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiboitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 18:06:01 by tiboitel          #+#    #+#             */
/*   Updated: 2017/02/06 20:24:00 by tiboitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ads_data_structure.h"

/*
** ----------------------------------------------------------------------------
** 					Management functions for linked node.
** ----------------------------------------------------------------------------
*/

t_ads_node		*ads_node_create(void)
{
	t_ads_node	*node;

	node = NULL;
	if (!(node = (t_ads_node *)malloc(sizeof(t_ads_node))))
		return (NULL);
	node->content = NULL;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_ads_element	*ads_node_free(t_ads_node *node)
{
	t_ads_element	*element;

	if (node == NULL)
		return (NULL);
	element = node->content;
	free(node);
	return (element);
}

/*
** -----------------------------------------------------------------------------
** Modification functions for linked node.
** -----------------------------------------------------------------------------
*/

void			ads_node_set_next(t_ads_node *node, t_ads_node *next)
{
	if (node == NULL)
		return ;
	node->next = next;
}

void			ads_node_set_prev(t_ads_node *node, t_ads_node *prev)
{
	if (node == NULL)
		return ;
	node->prev = prev;
}

void			ads_node_set_content(t_ads_node *node, t_ads_element *content)
{
	if (node == NULL)
		return ;
	node->content = content;
}

void			ads_node_link(t_ads_node *current, t_ads_node *next)
{
	current->next = next;
	next->prev = current;
}

void			ads_node_unlink(t_ads_node *first, t_ads_node *second)
{
	first->next = NULL;
	second->prev = NULL;
}
