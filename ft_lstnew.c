#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}

/*
#include <stdio.h>
int main(){
    t_list *list;
    char str []= "Hello World!";
    list = ft_lstnew_node(str);
    printf("%s\n", list->content);
    return (0);
}
*/