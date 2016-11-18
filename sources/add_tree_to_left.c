//
//  add_tree_to_left.c
//  tree
//
//  Created by Nicolas Chevalier on 18/11/16.
//  Copyright © 2016 Niccheva. All rights reserved.
//

#include "tree.h"

void		add_tree_to_left(t_tree *parent, t_tree *left)
{
	if (parent && left)
	{
		left->parent = parent;
		parent->left = left;
	}
}
