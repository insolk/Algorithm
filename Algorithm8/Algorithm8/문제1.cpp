#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

#define N 1000000
#define M 20000
#define L 50


int main()
{
	srand((unsigned)time(NULL));
	ofstream output("reads.txt");
	string MyGenomeSeq;
	int ran, ran2;
	while (MyGenomeSeq.size() <= N)
	{
		ran = rand() % 4;
		switch (ran)
		{
		case 0:
			MyGenomeSeq += 'A';
			//cout << 'A';
			break;
		case 1:
			MyGenomeSeq += 'C';
			//cout << 'C';
			break;
		case 2:
			MyGenomeSeq += 'G';
			//cout << 'G';
			break;
		case 3:
			MyGenomeSeq += 'T';
			//cout << 'T';
			break;
		}
	}

	
	for (int i = 0; i < M; i++) {
		output << i + 1 << " :";
		ran2 = (rand() % 1000) * (rand() % 1000);
		if (ran2 > N - L)
			ran2 -= L;
		for (int j = 0; j < L; j++)
		{
			output << MyGenomeSeq[ran2++];
		}
		output << endl;
	}
	output.close();
	return 0;
}