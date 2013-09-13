//Trie data structure testing
//All code written my Nathaniel Thompson

#include <stdio.h>
#include <stdlib.h>

//trie structure
typedef struct _trie{
    char letter; //the letter that the node holds
    struct _trie *next[26];//pointers to the rest of the letters
}trie;

//fucntion prototypes
void initialize(trie *);

//main function
int main(void)
{
  int i=0;
  trie *root=malloc(sizeof(trie)); //this is the root of the tree
  root->letter=0;//it doesn't contain a letter
  initialize(root);
  
  for(i=0;i<26;i++)
  {
    printf("%c",root->next[i]->letter);
  }
  
  
}

void initialize(trie *root)
{
  int i;
  int j;
  for(i=0;i<26;i++) //initialize all of the letters
  {
    root->next[i]=malloc(sizeof(trie)); // get memory for each letter
    root->next[i]->letter='a'+i; //give the letters the proper values
    for(j=0;j<26;j++)
      root->next[i]->next[j]=NULL;          //Set all the letters pointers to null
  }
  printf("good fucntion call\n");
}
