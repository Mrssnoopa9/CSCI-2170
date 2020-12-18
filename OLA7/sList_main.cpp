//Samantha Solomon C8306615
//CSCI 2170-004 Dr. Yang
//Due Date: December 1, 2020
//Program Description: User will be able to add s song, delete a song, look up an artist, and display the song information


#include<iostream>
#include<fstream>
#include"sList.h"
using namespace std;

void readSong(SongType &, ifstream &);
void mainMenu();

int main()
{
	int choice;
	ifstream inFile;
	inFile.open("topsongs.dat");
	
	if(!inFile)
	{
		cout << "File Not Found!" << endl;
		exit(EXIT_FAILURE);
	}

	sList songList;
	SongType song;	

	//prime reading
	readSong(song,inFile); // read the first song from the datafile
	while(inFile)
	{	
		// insert the song to the end of songList
		// read next song
		Node *newNode = new Node;
		newNode->song = song;
		Node *tail = head;

		newNode->next = nullptr;
		if(head == nullptr)
			head = newNode;
	else
	{
		while(tail->next != nullptr)
			tail = tail->next;
		tail->next = newNode;
		tail = newNode;
	}
	}

	do
	{
		mainMenu();
		cin >> choice;
	
		//switch case
		switch(choice)
		{
		case 1:
			//prompt the user to enter a new song (singer, song, year, rank)
			cout << "Please enter the artist name:" << endl;
			cout << "Please enter the song title:" << endl;
			cout << "Please enter the rank:" << endl;
			cout << "Please enter the year:" << endl;
			//call the insertAtEnd method to insert the song to the end of the songList
			insertAtEnd(int song);
		case 2: 
			//prompt the user to enter the song to delete
			cout << "Please enter a song to delete:" << endl;
			//call the deleteSong method to delete the song
			deleteSong(string songname);
		case 3:
			//prompt the user to enter the artist name 
			cout << "Please enter the artist name:" << endl;
			//call the lookUpArtis method to search for the songs for artist
			lookUpArtist(string artistname);
		case 4:
			//prompt the user to enter the year
			cout << "Please enter the year:" << endl;
			//call the displayList method to search for the songs for year
			displayList(int year);
		case 5:
			cout << "Thank you!" << endl;
			break;
		default:
			cout << "Invalid Options." << endl;
			break;
		}
	}while(choice !=5);

	inFile.close();

	return 0;
}

void readSong(SongType &song,ifstream &inFile)
{
	//promplt the user to enter four fields of the song
	//singer name;
	//song name;
	//year;
	//rank
	cout << "Please enter the artist name:" << endl;
    cout << "Please enter the song title:" << endl;
    cout << "Please enter the rank:" << endl;
    cout << "Please enter the year:" << endl;

}

void mainMenu()
{
	//display the menu to ther user
		cout << "=============================================" << endl;
        cout << "Welcome to Billboard Top Song (2012-2015) App" << endl;
        cout << "=============================================" << endl;
        cout << "1. Add a song" << endl;
        cout << "2. Delete a song" << endl;
        cout << "3. Look Up an Artist" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "=============================================" << endl;

}
