//
//  tree_size.c
//  tree
//
//  Created by Nicolas Chevalier on 18/11/16.
//  Copyright © 2016 Niccheva. All rights reserved.
//

#include "tree.h"

size_t		tree_size(const t_tree *tree)
{
	if (tree)
	{
		return (1 + tree_size(tree->left) + tree_size(tree->right));
	}
	return (0);
}
