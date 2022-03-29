void    ft_lstiter(t_list *root, void (*f)(void *))
{
    t_list  *ptr;

    ptr = root;
    while (ptr != NULL)
    {
        (f)(ptr->content);
        ptr = ptr->next;
    }
}

/*
    Parámetros #1. Un puntero al primer elemento de una lista.
#2. Un puntero a la función que se aplicará a cada
elemento de la lista.
Valor devuelto Nada
Funciones autorizadas
Ninguna
Descripción Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada elemento.

*/