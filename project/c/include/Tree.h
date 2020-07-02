/*
BSD 2-Clause License

Copyright (c) 2017, Subrato Roy (subratoroy@hotmail.com)
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _TREE_C
#define _TREE_C

#include "TreeNode.h"

typedef struct Tree
{
	size_t Count;
	TreeNode* Root;
}Tree;

extern Tree* tree_allocate(Tree* tptr);
extern void tree_clear(Tree* tptr);

extern void tree_add(Tree* tptr, TreeNode* node);
extern TreeNode* tree_add_value(Tree* tptr, void* data, size_t sz);

extern void tree_remove(Tree* tptr, const TreeNode* node);
extern void tree_remove_value(Tree* tptr, void* data, size_t sz);

extern size_t tree_item_count(Tree* tptr);

extern TreeNode* tree_get_root(Tree* tptr);
extern TreeNode* tree_get_next(Tree* tptr);

extern Tree* tree_merge(Tree* tptrFirst, Tree* tptrSecond);

#endif