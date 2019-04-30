#include<bits/stdc++.h>

	typedef struct mylist{

	int data;
	struct mylist *next;

	}node;



	void insert(node *s, int data)
	{
		while(s->next != NULL)
		{
			s = s->next;
		}
		s->next = (node*) malloc(sizeof(node));
		s->next->data = data;
		s->next->next = NULL;
	}


	void insertFirst(node *s, int data)
	{
		node* temp = s->next;
		s->next = (node*) malloc(sizeof(node));
		s->next->data = data;
		s->next->next = temp;
	}



	void display(node *s)
	{
		while(s->next != NULL)
		{
			printf("%d\n", s->next->data);
			s = s->next;
		}
	}



	void search(node *s, int data)
	{
		int count = 0;
		while(s->next != NULL)
		{
			if(s->next->data == data)
			{
				count++;
			}
			s = s->next;
		}
		printf("Total %d results found\n", count);
	}




	void deleteNode(node *s, int data)
	{
		while(s->next != NULL)
		{
			if(s->next->data == data)
			{
				s->next = s->next->next;
				break;
			}
			s = s->next;

		}
	}



	void deleteFirst(node *s)
	{
		s->next = s->next->next;

	}


	void deleteLast(node *s)
	{
		while(s->next != NULL)
		{
		    if(s->next->next == NULL)
            {
                s->next = NULL;
                return;
            }
			s = s->next;
		}


	}


	void insertAfter(node *s, int search, int data)
	{
		while(s->next != NULL)
		{
			if(s->next->data == search)
			{
				node *store = s->next->next;
				s->next->next = (node*) malloc(sizeof(node));
				s->next->next->data = data;
				s->next->next->next = store;
				return ;
			}
			s = s->next;
		}
	}





	void countNode(node *s)
	{
		int count = 0;
		while(s->next != NULL)
		{
			count++;
			s = s->next;
		}
		printf("Total %d nodes found.\n", count);
	}




	int main()
	{
		node *first = (node*) malloc(sizeof(node));
		first->next = NULL;


        /*Inserting Data*/
		printf("======Inserting data=========\n");
		insert(first, 5);
		insert(first, 9);
		insert(first, 11);
		insert(first, 9);

		/*Displaying Data*/
		display(first);

		/*Inserting Data at the top*/
		printf("======Inserting data at the first=========\n");
		insertFirst(first, 2);


        /*Displaying Data*/
		display(first);

		printf("======Deleting Last Data=========\n");
		deleteNode(first, 2);

		/*Displaying Data*/
		display(first);


		printf("======Deleting First Data=========\n");
		deleteFirst(first);
		/*Displaying Data*/
		display(first);
		search(first,9);


	}
