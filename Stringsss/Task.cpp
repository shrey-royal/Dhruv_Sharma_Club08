/*
Problem Statement: Online Music Streaming Service

Design a program for managing a user's playlist on an online music streaming service. The system should allow users to add, remove, and modify songs in their playlist. Additionally, it should provide functionality for searching and sorting songs based on various criteria.

1. Implement a function to compare two songs in the playlist based on their titles. The function should return an integer indicating their lexicographical relationship. - compare()

2. Develop a method to determine the length of a song title. - size

3. Create a function to swap the positions of two songs in the playlist. - swap

4. Implement a method to extract a portion of a song title, starting at a specified position and of a given length. - substring

5. Develop a function to determine the size of the playlist, i.e., the number of songs it contains. - length

6. Implement a method to resize the playlist to accommodate a specified number of songs. - resize()

7. Develop a function to replace the title of a song in the playlist with a new title. - replace()

8. Create a method to append a new song to the end of the playlist. - append()

9. Implement a function to access the character at a specified position in the title of a song. - at()

With these functionalities, users can effectively manage their playlists, organize their favorite songs, and enjoy a seamless music streaming experience.

*/

#include<iostream>
using namespace std;

class Song {
private:
    int id;
    string title;
public:
    Song(int id, string title) {
        this->id = id;
        this->title = title;
    }

    int getId() {
        return id;
    }

    string getTitle() {
        return title;
    }

    int compare(Song& other) {
        return title.compare(other.title);
    }

    int size() {
        return title.size();
    }
};

class Playlist {
private:
    Song **playlist;
    int capacity, totalSongs;

public:
    Playlist(int capacity) {
        this->capacity = capacity;
        playlist = new Song*[this->capacity];
        totalSongs = 0;
    }

    ~Playlist() {
        for (int i = 0; i < totalSongs; i++) {
            delete playlist[i];
        }
        delete[] playlist;
    }

    bool isFull() {
        return totalSongs == capacity;
    }

    int length() {
        return totalSongs;
    }

    void resize(int newCapacity) {
        if(newCapacity < totalSongs) {
            cout << "Error: New capacity is less than the number of songs in the library!" << endl;
            return;
        }

        Song** temp = new Song*[newCapacity];
        for (int i = 0; i < totalSongs; i++) {
            temp[i] = playlist[i];
        }
        delete[] playlist;
        playlist = temp;
        capacity = newCapacity;
    }
};