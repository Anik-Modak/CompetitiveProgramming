//Anik_Modak
#include<bits/stdc++.h>
#define ALPHABETS 26
#define CASE 'a'
#define MAX_WORD_SIZE 20

using namespace std;

struct Node
{
    struct Node * children[ALPHABETS];
    bool wordEnding;
};

void insert(struct Node * trieTree, char * word)
{
    struct Node * temp = trieTree;

    while (*word != '\0') {
        if (temp->children[*word - CASE] == NULL) {
            temp->children[*word - CASE] = (struct Node *) calloc(1, sizeof(struct Node));
        }

        temp = temp->children[*word - CASE];
        ++word;
    }

    temp->wordEnding = true;
}

struct Node * searchWord(struct Node * treeNode, char * word)
{
    while (*word != '\0') {
        if (treeNode->children[*word - CASE] != NULL) {
            treeNode = treeNode->children[*word - CASE];
            ++word;
        } else {
            break;
        }
    }

    if (*word == '\0') {
        return treeNode;
    } else {
        return NULL;
    }
}

void lexicographPrint(struct Node * trieTree, vector<char> word, char * prefix)
{
    int i;
	if (trieTree->wordEnding && word.size() != 0) {
        vector<char>::iterator itr = word.begin();

		printf("%s", prefix);

		while (itr != word.end()) {
            printf("%c", *itr);
            ++itr;
        }

        printf("\n");
    }

    for (i = 0; i < ALPHABETS; ++i) {
        if (trieTree->children[i] != NULL) {
            word.push_back(CASE + i);
            lexicographPrint(trieTree->children[i], word, prefix);
            word.pop_back();
        }
    }

    word.pop_back();
}

int main()
{
    int n, k;
    char word[MAX_WORD_SIZE];
    struct Node * trieTree = (struct Node *) calloc(1, sizeof(struct Node));

    scanf("%d", &n);

    while (n--) {
    	scanf("%s", word);
    	insert(trieTree, word);
	}

	scanf("%d", &k);

	for (int i = 1; i <= k; ++i) {
		scanf("%s", word);

		struct Node * temp = searchWord(trieTree, word);

		printf("Case #%d:\n", i);

		if (temp != NULL) {

			bool childrenThere = false;

			for (int j = 0; j < ALPHABETS; ++j) {
				if (temp->children[j] != NULL) {
					childrenThere = true;
					break;
				}
			}

			if (childrenThere) {
				vector<char> printUtil;
				lexicographPrint(temp, printUtil, word);
			} else {

				printf("No match.\n");
			}
		} else {
			printf("No match.\n");
		}
	}

    return 0;
}
