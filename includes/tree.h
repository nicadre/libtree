//
//  tree.h
//  tree
//
//  Created by Nicolas Chevalier on 18/11/16.
//  Copyright © 2016 Niccheva. All rights reserved.
//

#ifndef TREE_H
# define TREE_H

#include <stddef.h>

# define TREE_CAST(t, m) ((t *)((char *)mptr - offsetof(t, m)))
# define TREE_PTR(ptr) const t_tree *mptr = (ptr)
# define TREE_ENTRY(p, t, m) ({TREE_PTR(p); TREE_CAST(t, m);})

typedef struct s_btree	t_btree;
typedef struct s_tree	t_tree;

typedef void			(*t_tree_remover)(t_tree *parent, t_tree *left, t_tree *right);
typedef void			(*t_tree_deleter)(t_tree *tree);

typedef void			(*t_tree_foreach)(const t_tree *);

struct					s_btree
{
	t_btree				*left;
	t_btree				*right;
};

struct					s_tree
{
	t_tree				*left;
	t_tree				*right;
	t_tree				*parent;
};

/*
** t_tree functions
*/

void					init_tree(t_tree *tree);

void					add_tree_to_left(t_tree *parent, t_tree *left);
void					add_tree_to_right(t_tree *parent, t_tree *right);

void					remove_child_branch(t_tree *tree, t_tree_deleter deleter);

void					remove_tree(t_tree *tree, t_tree_remover remover);

size_t					tree_size(const t_tree *tree);

void					tree_foreach(const t_tree *tree, t_tree_foreach foreach);

/*
** t_btree functions
*/

#endif /* TREE_H */
