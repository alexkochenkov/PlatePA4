#include "main.h"

void LNR(Node root) {
  if (root==NULL) return;
  LNR(root->left);
  printf("Plate:<%s> Name: %s,%s\n", root->plate, root->last, root->first);
  LNR(root->right);
  
  
  
}
