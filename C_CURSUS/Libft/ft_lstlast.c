t_list  *ft_lstlast(t_list *root)
{
    if (root == null)
        return (NULL);
    while (root != NULL)
    {
        if (root->next == null)
            return (root);
        root = root->next;
    }
    return (root);
}

/*
Parámetros #1. El principio de una lista.
Valor devuelto Último elemento de una lista.
Funciones autorizadas
Ninguna
Descripción Devuelve el último elemento de una lista.
*/