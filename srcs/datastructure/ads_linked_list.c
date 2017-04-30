/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ads_linked_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiboitel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 17:58:24 by tiboitel          #+#    #+#             */
/*   Updated: 2017/02/06 20:37:49 by tiboitel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ads_data_structures.h"

t_ads_list		*ads_list_create(t_ads_element *content)
{
	t_ads_list	*list;

	if (!(list = ads_node_create(content)))
		return (NULL);
	return (list);
}

void			ads_list_free(t_ads_list *list, const t_ads_free_function f)
{
	t_ads_list	*tmp;

	if (f != NULL)
	{
		while (list != NULL)
		{
			tmp = list->next;
			free(list->content);
			ads_node_free(list);
			list = tmp;
		}
	}
	while (list != NULL)
	{
		tmp = list->next;
		ads_node_free(list);
		list = tmp;
	}
}

t_bool			ads_list_is_empty(const t_ads_list *list)
{
	return ((list == NULL) ? TRUE : FALSE);
}

uint32_t		ads_list_get_size(const t_ads_list *list)
{
	uint32_t	size;
	t_ads_list	*tmp;

	size = 0;
	tmp = list;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}

void			ads_list_link(t_ads_list *current, t_ads_list *next)
{
	ASSERT(current != NULL);
	ASSERT(next != NULL);
	if (current == NULL || next == NULL)
		return ;
	tmp = current;
	while (tmp->next != NULL)
		tmp = tmp->next;
	ads_node_link(tmp, next);
}

void			ads_list_pushfront(t_ads_list *head, t_ads_list *list)
{
	(void)head;
	(void)list;
}

void			ads_list_pushback(t_ads_list *head, t_ads_list *list)
{
	(void)head;
	(void)list;
}

void			ads_list_insert_after(t_ads_list *prev, t_ads_list *list)
{
	t_ads_list	*tmp;

	tmp = prev->next;
	ads_node_link(prev, list);
	if (tmp != NULL)
		ads_list_link(list, tmp);
}

void			ads_list_insert_before(t_ads_list *next, t_ads_list *list)
{
	t_ads_list	*tmp;

	tmp = next->prev;
	if (tmp != NULL)
		ads_node_link(tmp, list);
	ads_list_link(list, next);
}

void			ads_list_delete(t_ads_list *list)
{
	(void)node;
}

void			ads_list_search(t_ads_list *list, const t_ads_cmp_function *f, \
		void *value)
{
	(void)list;
	(void)f;
	(void)value;
}

void			ads_list_map(const t_ads_list *list, \
		const t_ads_map_function *f, void *value)
{
	(void)list;
	(void)f;
	(void)value;
}
