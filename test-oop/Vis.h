#pragma once

#include <iostream>
using namespace std;

class Vis
{
private:
	bool status;

	int stage;

	string GetPicByStage()
	{
		string res = "";
		switch (this->stage)
		{
		case 0:
			res = "\n" + string("   |\n") + string("   |\n");
			return res;
		}

		return res;
	}

public:
	Vis()
	{
		this->status = true;
		this->stage = 0;
	}

	bool GetStatus()
	{
		return this->status;
	}

	void Next()
	{
		this->stage++;

		if (this->stage == 7)
		{
			this->status = false;
		}
	}

	void Print()
	{
		cout << this->GetPicByStage();
	}
};

