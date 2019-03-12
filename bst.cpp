/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			bst.cpp
 * Author(s):		Peter Bauer
 * Due Date:		May 31, 2017
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/

/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class name here>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * File:			bst.h
 * Author:			Peter Bauer
 * Due Date:		#due#
 * ----------------------------------------------------------
 * Description:
 * <Add description>
 * ----------------------------------------------------------
 */
#include "bst.h"
#include <stdlib.h>
#include "general.h"

struct Node {
  int element;
  Node* left;
  Node* right;
};

/**
*** Initializes the binary search tree. Deletes all existing nodes in the tree
*** @return The number of deleted nodes
*/
Bst new_bst() {
  return 0;
}

void delete_bst(Bst bst) {
  if(bst == 0) { return; }
  if(bst->left != 0) { delete_bst(bst->left); }
  if(bst->right != 0) { delete_bst(bst->right); }
  sfree(bst);
}

/**
*** @return The depth of the BST
*/
int get_depth(Bst bst) {
  if(bst == 0) { return 0; }
  if(bst->left == 0 && bst->right == 0) { return 1; }
  int depth_left = get_depth(bst->left);
  int depth_right = get_depth(bst->right);
  if(depth_left > depth_right)
  {
    return 1 + depth_left;
  }
  else
  {
    return 1+ depth_right;
  }
}

/**
*** Adds a value to the BST
*/
void add(Bst* bst, int value) {
  if(*bst == 0)
  {
    Bst new_bst = (Bst)malloc(sizeof(Node));
    new_bst->left = 0;
    new_bst->right = 0;
    new_bst->element = value;
    *bst = new_bst;
  }
  else if(value <= (*bst)->element)
  {
    add(&(*bst)->left, value);
  }
  else
  {
    add(&(*bst)->right, value);
  }
}

/**
*** @return The value of the root element of the BST
*/
int root_value(Bst bst) {
  return bst->element;
}

/**
*** @return The left subtree of the BST
*/
Bst left_subtree(Bst root) {
  return root->left;
}

/**
*** @return The right subtree of the BST
*/
Bst right_subtree(Bst root) {
  return root->right;
}

/**
*** Traverses the BST depth first by first returning the root, then traversing the left
*** subtree, then traversing the right subtree.
*** @param bst The BST to be traversed
*** @param elements Array of elements in the order how they are found during traversal
*** @param start Start index of elements wherer the function should start to add the found elements
*** @return Number of elements found during traversal
*/
int traverse_pre_order(Bst bst, int *elements, int start) {
  if(bst == 0) { return 0; }
  elements[start] = bst->element;
  if(bst->left == 0 && bst->right == 0) { return 1; }

  start += traverse_pre_order(bst->left, elements, start+1);
  return traverse_pre_order(bst->right, elements, start+1);
}

/**
*** Traverses the BST depth first by first traversing the left subtree, then adding the root,
*** then traversing the right subtree.
*** @param bst The BST to be traversed
*** @param elements Array of elements in the order how they are found during traversal
*** @param start Start index of elements wherer the function should start to add the found elements
*** @return Number of elements found during traversal
*/
int traverse_in_order(Bst bst, int *elements, int start) {
  return 0;
}

/**
*** Traverses the BST depth first by first traversing the left subtree, then traversing the right
*** subtree and finally adding the root.
*** @param bst The BST to be traversed
*** @param elements Array of elements in the order how they are found during traversal
*** @param start Start index of elements wherer the function should start to add the found elements
*** @return Number of elements found during traversal
*/
int traverse_post_order(Bst bst, int *elements, int start) {
  return 0;
}

/**
*** Checks whether two trees are equal
*** @param bst1 First bst
*** @param bst2 Second bst
*** @return true if bst1 and bst2 are equal, false otherwise
*/
bool are_equal(Bst bst1, Bst bst2) {
  return true;
}

/**
*** Calculates the longest branch in the tree. If two branches are equally long
*** the left branch is taken.
*** @param bst Bst which longest branch should be found
*** @return A tree where each node has only one child equal to the longest
*** branch of bst
*/
void most_left_longest_branch(Bst bst, Bst* branch) {

}

/**
*** Gets the number of non-empty subtrees of a tree
*** @param bst The tree which number of subtrees to get
*** @return The number of non-empty subtrees
*/
int get_number_of_subtrees(Bst bst){
  return 0;
}
