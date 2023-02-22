/*
** EPITECH PROJECT, 2023
** lib
** File description:
** Simple box structure (name-value)
*/

#include "includes.h"

m_box               my_create_box(char *name, void *value)
{
    m_box current = malloc(sizeof(_m_box));
    current->name = my_strdup(name);
    current->value = value;

    return current;
}

void                my_delet_box(m_box box)
{
    free(box->name);
    free(box);
}