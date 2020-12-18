//Samantha Solomon C8306615
//CSCI 2170-004 Dr. Yang
//Due Date: December 1, 2020
//Program Description: User will be able to add s song, delete a song, look up an artist, and display the song information


#include<iostream>
#include"sList.h"
#include<iomanip>
#include<string>
using namespace std;

//Constructor
sList::sList()
//Please define your constructor here
{
	head = nullptr;
}


//~Destructor
sList::~sList()
{
	Node *cur = head;
	while(cur != nullptr)
	{
		//delete the Node pointed to by head
		head = head->next; // move head to the next Node
		cur->next = nullptr; 
		delete cur; //deallocate memory
		cur = head; //make cur point to the new Node
	}
}
		

//insertAtEnd method
void sList::insertAtEnd(SongType song)
{
	//create a new Node to hold the data
	Node *newNode = new Node;
	newNode -> song = song;
	Node *tail = head;
	newNode -> next = nullptr;
	// if the list is empty
	if(head == nullptr)
		//make the new node as the head
		head = newNode;
	//else 
	else
	{
		//insert the new node to the end of the List
		while(tail -> next != nullptr)
			tail = tail -> next;
		tail -> next = newNode;
		tail = newNode;
	}
}


//deleteSong method
void sList::deleteSong(string songname)
{
	//cur will point to the item to delete
	Node* cur = head; 
	//prev will point to the item before cur
	Node* prev = head; 
	int j = 1;
	int i = 1;	
	//if the list is empty{
	if(head == nullptr)
		// Not enough items in List.
	{
		cout << "The song is not found in the list." << endl;
	}
	//else
	else
	{
		//Traverse the list to find the song
		//Delte the song if it is found
		if(i == 1)
		{
			head = head->next;
			delete cur;
			return;
		}

		while(j != i && cur->next != nullptr)
		{
			prev = cur;
			cur = cur->next;
			j++;
		}
		
		if(j==i)
		{
			prev->next = cur->next;
			delete cur;
		}
		else
			cout << "Not enough items in list." << endl;
	}	
}


//displayList() method
void sList::displayList(int year)
{
//print the songs in given year
	if(head == nullptr)
	{	
		cout << "The list is empty." << endl;
		return;
	}
	// start a pointer at the beginning of the list
	Node *cur = head;
	// as long as we haven't reached the list's end
	while(cur != nullptr)
	{
		//print the value
		cout << cur->song.year << endl;
		//move to the next node
		cur = cur->next;
	}	
}


//lookUpArtist method
void sList::lookUpArtist(string artistname)
{
//use while loop to search the artist 
	//display all songs of the artist
		
}
