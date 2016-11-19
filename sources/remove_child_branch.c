//
//  remove_child_branch.c
//  tree
//
//  Created by Nicolas Chevalier on 18/11/16.
//  Copyright © 2016 Niccheva. All rights reserved.
//

#include "tree.h"

void		remove_child_branch(t_tree *tree, t_tree_deleter deleter)
{
	if (tree)
	{
		remove_child_branch(tree->left, deleter);
		remove_child_branch(tree->right, deleter);
		if (deleter)
		{
			init_tree(tree);
			deleter(tree);
		}
	}
}
