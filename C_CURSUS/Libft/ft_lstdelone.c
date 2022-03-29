void    ft_lstdelone(t_list *node, void (*del)(void*))
{
    (del)(node->content);
    free(node);
}

/*
Parámetros #1. El elemento a liberar.
#2. La dirección de la función utilizada para
eliminar el contenido.
Valor devuelto Nada
Funciones autorizadas
free
Descripción Toma como parámetro un elemento y libera la memoria
del contenido del elemento utilizando la función
’del’ dada como parámetro, por último libera el
elemento. La memoria de ’next’ no debe liberarse.

*/