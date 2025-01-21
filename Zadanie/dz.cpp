#include <iostream>
using namespace std;

class window {
private:
	float length;
	float width;
public:
	window(float l, float w) {
		length = l;
		width = w;
	}
	float get_lenght() {
		return length;
	}

	float get_width() {
		return width;
	}

	void set_width(float newW) {
		width = newW;
	}

	void set_length(float newL) {
		length = newL;
	}
};

int main()
{

}