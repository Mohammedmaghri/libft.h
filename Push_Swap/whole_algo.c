/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whole_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:01:41 by mmaghri           #+#    #+#             */
/*   Updated: 2024/01/18 21:16:52 by mmaghri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int find_bottom_index(t_Node **list)
{
    t_Node *test;
    int last ;

    test = (*list);
    while (test->next)
        test = test->next;
    last = test->index;
    return (last);
}

int check_if_up(t_Node **list, int index)
{
    t_Node  *all;
    int list_size;
    int i ;
    int position;
    int res ;

    position = 0;
    i = -1;
    list_size = (count_list(*list) / 2);
    all = (*list);
    while (all->next != NULL)
    {
        if (all->array == index)
            break;
        all = all->next ;
        i++;
    }
    res = (list_size - i);
    if (res <= 0)
        position = -1;
    printf("******|%d|******\n", res);
    return (position);
}
void index_all(t_Node **list, t_Node **list_b, t_lspies *lsp)
{
    int biggest_value;
    int bottom_index;

    bottom_index = 0;
    
    (void)lsp ;
    (void)list_b ;
    lsp->lastpivot = -1;
    lsp->pvtone = (count_list(*list) / 3);
    lsp->pvttwo = (count_list(*list) / 6);
    // int i = 0 ;
    while (count_list(*list) > 3)
    {
        if ((*list)->index < lsp->pvtone)
            pb_push(list, list_b);
        else 
            ra_rotate(list);
        if(count_list(*list_b) > 1 && ((*list_b)->index >= lsp->lastpivot && (*list_b)->index <= lsp->pvttwo))
            rb_rotate(list_b);
        if (count_list(*list_b) == lsp->pvtone)
        {
            lsp->lastpivot = lsp->pvtone;
            lsp->pvttwo = (count_list(*list) / 6) + lsp->pvtone;
            lsp->pvtone = (lsp->pvtone + (count_list(*list) / 3));
        }
    }
    check_tree(list);
    biggest_value = find_bottom_index(list);
    while (count_list(*list_b) != 0)
    {
        bottom_index = find_bottom_index(list);
        if (check_if_up((list_b), (*list)->index - 1) == 0)
        {
            while (bottom_index != ((*list_b)->index - 1))
                ra_rotate(list);
            pa_push(list, list_b);
        }
        else
        {
            while (bottom_index != ((*list_b)->index - 1))
                rra_rotate(list);
            pa_push(list, list_b);
        }
        break ;
    }
}