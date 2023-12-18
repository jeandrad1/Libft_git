#include "libft.h"


//Cambiar new1 por new

void ft_lstadd_back(t_list **lst, t_list *new1)
{
    if (!lst)
        return ;
    if (!*lst)
        *lst = new1;
    else
        ft_lstlast(*lst)->next = new1;
}

#include <stdio.h>
int main(){
    t_list *list;
    t_list *new1;
    t_list *new2;
    char str []= "Test1";
    char str2 []= "Test2";
    char str3 []= "Test3";
    list = ft_lstnew(str);
    new1 = ft_lstnew(str2);
    new2 = ft_lstnew(str3);
    ft_lstadd_back(&list, new1);
    ft_lstadd_back(&list, new2);
    printf("%s\n", ft_lstlast(list)->content);
    return (0);
}