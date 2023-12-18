#include "libft.h"


//Cambiar todos los new_node por new para la compilacion en c

void ft_lstadd_front(t_list **lst, t_list *new_node)
{
    if (!lst || !new_node)
        return ;
    new_node->next = *lst;
    *lst = new_node;
}

/*
#include <stdio.h>

int main(){
    t_list *list;
    t_list *new_node;
    char str []= "Hello World";
    char str2 []= "Hello World2";
    list = ft_lstnew(str);
    new_node = ft_lstnew(str2);
    ft_lstadd_front(&list, new_node);
    printf("%s\n", list->content);
    printf("%s\n", list->next->content);
    return (0);
}
*/