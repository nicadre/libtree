//
//  tree_foreach.c
//  tree
//
//  Created by Nicolas Chevalier on 18/11/16.
//  Copyright © 2016 Niccheva. All rights reserved.
//

#include "tree.h"

void			tree_foreach(const t_tree *tree, t_tree_foreach foreach)
{
	const t_tree		*tmp;

	if (tree && foreach)
	{
		tmp = tree;
		tree_foreach(tree->left, foreach);
		foreach(tree);
		tree_foreach(tree->right, foreach);
	}
}
