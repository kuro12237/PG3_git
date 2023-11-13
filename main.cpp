#include"Fruits/Apple.h"
#include"Fruits/Orange.h"

int main(void) 
{
	Fruits* fruis[2];

	for (int i = 0; i < 2; i++)
	{
		fruis[i] = new Fruits();
		fruis[i]->Explain();

		if (i == 0)
		{
			fruis[i] = new Apple();
			fruis[i]->Explain();
			delete fruis[i];
		}

		if (i == 1)
		{
			fruis[i] = new Orange();
			fruis[i]->Explain();
			delete fruis[i];
		}
	}

	return 0;
}