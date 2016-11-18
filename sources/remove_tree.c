//
//  remove_tree.c
//  tree
//
//  Created by Nicolas Chevalier on 18/11/16.
//  Copyright © 2016 Niccheva. All rights reserved.
//

#include "tree.h"

void		remove_tree(t_tree *tree, t_tree_remover remover)
{
	if (tree)
	{
		if (remover)
		{
			remover(tree->parent, tree->left, tree->right);
		}
		init_tree(tree);
	}
}
