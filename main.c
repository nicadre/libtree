/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:47:10 by niccheva          #+#    #+#             */
/*   Updated: 2016/11/18 11:47:57 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tree.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct s_char
{
	char *key;
	t_tree tree;
};

struct s_char *create(const char *name)
{
	struct s_char *new;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->key = strdup(name);
		init_tree(&(new->tree));
	}
	return (new);
}

void add_left(struct s_char *tree, struct s_char *new)
{
	add_tree_to_left(&(tree->tree), &(new->tree));
}

void add_right(struct s_char *tree, struct s_char *new)
{
	add_tree_to_right(&(tree->tree), &(new->tree));
}

void print(const t_tree *tree)
{
	struct s_char *c;

	c = TREE_ENTRY(tree, struct s_char, tree);
	printf("%s ", c->key);
}

int main()
{
	struct s_char *tree;

	tree = create("root");

	add_left(tree, create("left"));
	add_right(tree, create("right"));

	tree_foreach(&(tree->tree), &print);
	printf("\n");

	return (0);
}
