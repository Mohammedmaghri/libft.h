/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whole_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaghri <mmaghri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:01:41 by mmaghri           #+#    #+#             */
/*   Updated: 2024/01/18 19:03:21 by mmaghri          ###   ########.fr       */
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
    // while ()
    // {

    // }
    biggest_value = find_bottom_index(list);
    printf(" |_%d_| \n", biggest_value);
}