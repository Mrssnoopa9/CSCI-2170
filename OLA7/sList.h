//Samantha Solomon C8306615
//CSCI 2170-004 Dr. Yang
//Due Date: December 1, 2020
//Program Description: User will be able to add a song, delete a song, look up an artist, and display the song information

#ifndef SLIST_H
#define SLIST_H

#include<string>
using namespace std;

//Please declare the struct type 
//SongType
struct SongType
{
	int rank;
	string singer;
	string title;
	int year;
};

class sList
{

private:
		//Declaration a structure of the Nodes
		struct Node
		{
			SongType song;
			Node *next;
		};
		// List head Pointer
		Node *head;

public:
		//Constructor
		sList();
		//~Destructor
		~sList();
		//Linked List Operations
		// Insertion Operations for the linked list
		void insertAtEnd(SongType song);
		// Print out data in the list
		void displayList(int year);		
		// Search for the artist
		void lookUpArtist(string artistname);
		//deletion oprations for the linked list
		void deleteSong(string songname);
};
#endif
