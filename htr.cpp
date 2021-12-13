#include <iostream>
using namespace std;

void moveHare(char arr[], int* pos);
void moveTortoise(char arr[], int* pos);

int main()
{

	int hare;
	int turtle;
	char line[70];
	int posHare = 0;
	int posTortoise = 0;
	int* h;
	int* t;
	bool winHare = false;
	bool winTortoise = false;
	h = &posHare;
	t = &posTortoise;

	srand(time(NULL));

	cout << endl;

	while (winHare != true || winTortoise != true)
	{

		moveHare(line, h);
		moveTortoise(line, t);
		cout << endl;

		for (int j = 0; j < 70; j++)
		{
			cout << line[j];
		}

		for (int k = 0; k < 70; k++)
		{
			line[k] = '-';
		}
		cout << endl;

		if(posHare == posTortoise){
			posTortoise++;
		}

		if(posHare == 70 && posTortoise <= 70){
			winHare = true;
			cout << endl;
			cout << "THE HARE IS THE WINNER!";
			cout << endl;
			break;

		}
		else if(posTortoise == 70 && posHare <= 70){
			winTortoise = true;
			cout << endl;
			cout << "THE TORTOISE IS THE WINNER!";
			cout << endl;
			break;
		}
	}

	return 0;
}

void moveHare(char arr[], int* posH)
{
	cout << endl;
	int b = rand() % 11;
	cout << endl;

	if (b == 1 || b == 2)
	{
		cout << "The random choice of the hare is: " << b;
		cout << endl;
		arr[*posH] = 'H';
		cout << "The position of the hare is: " << *posH;
	}
	else if (b == 3 || b == 4)
	{
		cout << "The random choice of the hare is: " << b;
		cout << endl;

		*posH = *posH + 9;
		cout << "The position of the hare is: " << *posH;
		arr[*posH] = 'H';
	}
	else if (b == 5)
	{
		cout << "The random choice of the hare is: " << b;
		cout << endl;

		*posH = *posH + 12;
		cout << "The position of the hare is: " << *posH;
		arr[*posH] = 'H';
	}
	else if (b >= 6 || b <= 8)
	{
		cout << "The random choice of the hare is: " << b;
		cout << endl;

		*posH = *posH + 1;
		cout << "The position of the hare is: " << *posH;
		arr[*posH] = 'H';
	}
	else if (b >= 9 || b <= 10)
	{
		cout << "The random choice of the hare is: " << b;
		cout << endl;

		*posH = *posH + 2;
		cout << "The position of the hare is: " << *posH;
		arr[*posH] = 'H';
	}
	else
	{
	}
}

void moveTortoise(char arr[], int* pos)
{
	int y = rand() % 11;
	cout << endl;
	if (y >= 1 || y <= 5)
	{
		cout << "The random choice of the turtle is: " << y;
		*pos = *pos + 3;
		cout << endl;
		cout << "The position(added) of the turtle is: " << *pos;
		arr[*pos] = 'T';
	}
	else if (y == 6 || y == 7)
	{
		cout << "The random choice of the turtle is: " << y;
		*pos = *pos + 6;
		cout << endl;
		cout << "The position(added) of the turtle is: " << *pos;
		arr[*pos] = 'T';
	}
	else if (y >= 8 || y <= 10)
	{
		cout << "The random choice of the turtle is: " << y;
		*pos = *pos + 1;
		cout << endl;
		cout << "The position(added) of the turtle is: " << *pos;
		arr[*pos] = 'T';
	}
	else if(*pos >= 70)
	{
		
	}
}
