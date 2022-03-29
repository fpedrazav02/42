int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst != NULL)
    {
        lst = lst->next;
        count++;
    }
    return (count);
}

/*
Parámetros #1. El principio de una lista.
Valor devuelto Longitud de la lista.
Funciones autorizadas
Ninguna
Descripción Cuenta el número de elemento de una lista.
*/