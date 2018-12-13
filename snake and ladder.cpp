#include <stdlib.h>
#include <ctime>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	int p1=0,p2=0,c1,c2;
	cout<<"			**************************\n			**  SNAKES AND LADDERS  **\n			**************************\n\n";
	cout<<"---------------------------------------------------------------------------\n";
	cout<<"| 100    | 99->22 | 98 | 97 | 96 | 95     | 94     | 93 | 92->70 | 91     |\n---------------------------------------------------------------------------\n";
   	cout<<"| 81     | 82     | 83 | 84 | 85 | 86     | 87     | 88 | 89     | 90     |\n---------------------------------------------------------------------------\n";
	cout<<"| 80     | 79     | 78 | 77 | 76 | 75->43 | 74     | 73 | 72     | 71     |\n---------------------------------------------------------------------------\n";
	cout<<"| 61->90 | 62     | 63 | 64 | 65 | 66     | 67     | 68 | 69     | 70     |\n---------------------------------------------------------------------------\n";
	cout<<"| 60     | 59     | 58 | 57 | 56 | 55     | 54->17 | 53 | 52     | 51     |\n---------------------------------------------------------------------------\n";
	cout<<"| 41     | 42     | 43 | 44 | 45 | 46     | 47     | 48 | 49     | 50->80 |\n---------------------------------------------------------------------------\n";
	cout<<"| 40     | 39->74 | 38 | 37 | 36 | 35->20 | 34     | 33 | 32     | 31     |\n---------------------------------------------------------------------------\n";
	cout<<"| 21     | 22     | 23 | 24 | 25 | 26     | 27     | 28 | 29     | 30     |\n---------------------------------------------------------------------------\n";
	cout<<"| 20     | 19     | 18 | 17 | 16 | 15     | 14     | 13 | 12     | 11     |\n---------------------------------------------------------------------------\n";
	cout<<"| 01     | 02     | 03 | 04 | 05 | 06->25 | 07     | 08 | 09     | 10     |\n---------------------------------------------------------------------------\n";
	while(p1!=100&&p2!=100)
 	{
 		cout<<"\n			Player 1 position:"<<p1<<"\n\n			Player 2 position:"<<p2<<endl<<endl;
		srand(time(NULL));
 		cout<<"Player 1 turn.\n";
 		if(p1>=0&&p1<6)
		{
			cout<<"Nearest ladder at 6. "<<endl<<endl<<endl;
 		}
 		if(p1>=6&&p1<35)
		{
			cout<<"Nearest Snake at 35.Watch it! "<<endl<<endl<<endl;
 		}
 		if(p1>=35&&p1<39)
		{
			cout<<"Nearest ladder at 39. "<<endl<<endl<<endl;
 		}
 		if(p1>=39&&p1<50)
		{
			cout<<"Nearest ladder at 50. "<<endl<<endl<<endl;
 		}
 		if(p1>=50&&p1<54)
		{
			cout<<"Nearest Snake at 54.Watch it! "<<endl<<endl<<endl;
 		}
 		if(p1>=54&&p1<61)
		{
			cout<<"Nearest ladder at 61. "<<endl<<endl<<endl;
 		}
 		if(p1>=61&&p1<75)
		{
			cout<<"Nearest Snake at 75.Watch it! "<<endl<<endl<<endl;
 		}
 		if(p1>=75&&p1<92)
		{
			cout<<"Nearest Snake at 92.Watch it! "<<endl<<endl<<endl;
 		}
 		if(p1>=92&&p1<99)
		{
			cout<<"Nearest Snake at 99.Watch it! "<<endl<<endl<<endl;
 		}
 		cout<<"Press any key to roll the dice.\n";
 		getch();
 		system ("CLS");
 		cout<<"\nRolling the dice........\n";
 		
 		c1=rand() % 6 + 1;
 		cout<<"\nDice turns out to be:"<<c1<<endl;
 		p1=p1+c1;
 		if(p1>100)
 		{
 			p1=p1-c1;
 		}
		cout<<"\nP1 position:"<<p1<<endl<<endl;
 		if(p1==6)
 		{
 			p1=25;
 			cout<<"\nYou've got a ladder!Position changed from 6 to 25."<<endl<<endl;
		}
		else if(p1==39)
		{
			p1=74;
			cout<<"\nYou've got a ladder!Position changed from 39 to 74."<<endl<<endl;
		}
		else if(p1==35)
		{
			p1=20;
			cout<<"\nYou're biten by the snake!Position changed from 35 to 20."<<endl<<endl;
		}
		else if(p1==50)
		{
			p1=80;
			cout<<"\nYou've got a ladder!Position changed from 50 to 80."<<endl<<endl;
		}
		else if(p1==54)
		{
			p1=17;
			cout<<"\nYou're biten by the snake!Position changed from 54 to 17."<<endl<<endl;
		}
		else if(p1==61)
		{
			p1=90;
			cout<<"\nYou've got a ladder!Position changed from 61 to 90."<<endl<<endl;
		}
		else if(p1==75)
		{
			p1=43;
			cout<<"\nYou're biten by the snake!Position changed from 75 to 43."<<endl<<endl;
		}
		else if(p1==92)
		{
			p1=70;
			cout<<"\nYou're biten by the snake!Position changed from 92 to 70."<<endl<<endl;
		}
		else if(p1==99)
		{
			p1=22;
			cout<<"\nYou're biten by the snake!Position changed from 99 to 22."<<endl<<endl;
		}
		
		cout<<"\n			Player 1 position:"<<p1<<"\n\n			Player 2 position:"<<p2<<endl<<endl;
 		if(p1!=100)
 		{ 
			cout<<"Player 2 turn.\n";
	 		if(p2>=0&&p2<6)
			{
				cout<<"Nearest ladder at 6. "<<endl<<endl<<endl;
	 		}
	 		if(p2>=6&&p2<35)
			{
				cout<<"Nearest Snake at 35.Watch it! "<<endl<<endl<<endl;
	 		}
	 		if(p2>=35&&p2<39)
			{
				cout<<"Nearest ladder at 39. "<<endl<<endl<<endl;
	 		}
	 		if(p2>=39&&p2<50)
			{
				cout<<"Nearest ladder at 50. "<<endl<<endl<<endl;
	 		}
	 		if(p2>=50&&p2<54)
			{
				cout<<"Nearest Snake at 54.Watch it! "<<endl<<endl<<endl;
	 		}
	 		if(p2>=54&&p2<61)
			{
				cout<<"Nearest ladder at 61. "<<endl<<endl<<endl;
	 		}
	 		if(p2>=61&&p2<75)
			{
				cout<<"Nearest Snake at 75.Watch it! "<<endl<<endl<<endl;
	 		}
	 		if(p2>=75&&p2<92)
			{
				cout<<"Nearest Snake at 92.Watch it! "<<endl<<endl<<endl;
	 		}
	 		if(p2>=92&&p2<99)
			{
				cout<<"Nearest Snake at 99.Watch it! "<<endl<<endl<<endl;
	 		}
	 		cout<<"Press any key to roll the dice.\n";
	 		getch();
	 		system ("CLS");
	 		cout<<"\nRolling the dice........\n";
	 		c2=rand() % 6 + 1;
	 		cout<<"\nDice turns out to be:"<<c2<<endl;
	 		p2=p2+c2;
	 		if(p2>100)
	 		{
	 			p2=p2-c2;
	 		}
			cout<<"\nP2 position:"<<p2<<endl<<endl;
	 		if(p2==6)
	 		{
	 			p2=25;
	 			cout<<"\nYou've got a ladder!Position changed from 6 to 25."<<endl<<endl;
			}
			else if(p2==39)
			{
				p2=74;
				cout<<"\nYou've got a ladder!Position changed from 39 to 74."<<endl<<endl;
			}
			else if(p2==35)
			{
				p2=20;
				cout<<"\nYou're biten by the snake!Position changed from 35 to 20."<<endl<<endl;
			}
			else if(p2==50)
			{
				p2=80;
				cout<<"\nYou've got a ladder!Position changed from 50 to 80."<<endl<<endl;
			}
			else if(p2==54)
			{
				p2=17;
				cout<<"\nYou're biten by the snake!Position changed from 54 to 17."<<endl<<endl;
			}
			else if(p2==61)
			{
				p2=90;
				cout<<"\nYou've got a ladder!Position changed from 61 to 90."<<endl<<endl;
			}
			else if(p2==75)
			{
				p2=43;
				cout<<"\nYou're biten by the snake!Position changed from 75 to 43."<<endl<<endl;
			}
			else if(p2==92)
			{
				p2=70;
				cout<<"\nYou're biten by the snake!Position changed from 92 to 70."<<endl<<endl;
			}
			else if(p2==99)
			{
				p2=22;
				cout<<"\nYou're biten by the snake!Position changed from 99 to 22."<<endl<<endl;
			}
		}
	}
	if(p1==100)
	{
		cout<<"			Player 1 WINS!";
	}
	else
	{
		cout<<"			Player 2 WINS!";
	}
	getch();
}





