#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ 
cout<< " NUMBER GUSSING GAME \n"<< endl;
cout<< " guess number between 1 and 100";
cout<< " lets start !"<<endl;
 
srand(time(0)) ;
int randNumber = ( rand() %100) + 1;

cout<< "\n you will have total five chances to guess the correct number \n";
int chanceLeft = 5;
int playerInput;

for (int i = 1;i <= 5; i++)
{
	cout << "\n enter the number: ";
	cin >> playerInput;
	 
	if(playerInput == randNumber)
	{
		cout<< "\n congatulations!! you have successfully guessed the right number\n";
		cout<< "\n thankyou for playing";
		break;
	 } 
	 else
	 {
	 	if (playerInput > randNumber)
	 	{
	 		cout<< "\n Insert a small number . try again"<<endl;
		}
		else
		{
			cout<< "\n Insert a large number . try again"<<endl;
		}
	 }
	 chanceLeft--;
	 cout<< "\n (chances left to guess the random number: " << chanceLeft << ")"<<endl;
	 
	 if (chanceLeft == 0)
	 {
	 	cout<< "\n sorry your chance has been finished to guess the random number\n"<<endl;
	 	cout<< "the random number was: " << randNumber <<endl;
	 	cout<< "thanks for playing .";
	 }
}
cout<< "\n";
return 0;
}
