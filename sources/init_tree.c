//
//  init_tree.c
//  tree
//
//  Created by Nicolas Chevalier on 18/11/16.
//  Copyright © 2016 Niccheva. All rights reserved.
//

#include "tree.h"

void		init_tree(t_tree *tree)
{
	if (tree)
	{
		tree->parent = NULL;
		tree->left = NULL;
		tree->right = NULL;
	}
}
