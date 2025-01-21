#include <iostream>
#include <string>
using namespace std;

class Song {
private:
	int song_length;
	int size_file;
public:
	Song() = default;
	explicit Song(int song_length1, int size_file1) {
		song_length = song_length1;
		size_file = size_file1;
	}
};