//
//  add_tree_to_right.c
//  tree
//
//  Created by Nicolas Chevalier on 18/11/16.
//  Copyright © 2016 Niccheva. All rights reserved.
//

#include "tree.h"

void		add_tree_to_right(t_tree *parent, t_tree *right)
{
	if (parent && right)
	{
		right->parent = parent;
		parent->right = right;
	}
}
