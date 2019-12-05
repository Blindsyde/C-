#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;


int main(){

	char name[20];
	int classChoice = 0;
	int new_classChoice;
	int p1 = 0;
	int p2 = 0;
	int p3 = 0;


//intro and name


//battle class pick
	system ("cls");
	cout << "Lets pick a class for our Hero: \n";
	cout << "1) Warrior    2) Priest \n";
	cout << "3) Thief      4)Flying Monkey \n";
	cin >> classChoice;

	if (classChoice == 1){
		cout << "A Warrior eh\? You probably want to punch things...\n\n";
	}else if (classChoice == 2){
		cout << "A Priest. Holy light and all that jazz?\n";
	}else if (classChoice == 3){
		cout << "A Thief. Stealthy and deadly. Much like the ovens of the Dutch.\n";
	}else if (classChoice == 4){
		cout << "Really? Well... go for the eyes I guess?\n";
	}else{
		cout << "Not a valid choice.\n";
		new_classChoice = classChoice == 0;
	return new_classChoice;
			}
	system("pause");

//personality questions

	system("cls");
	cout << "Very well, now i'm going to probe you... for information\n";
	system("pause");
	cout << "Say you find a Turtle on the ground. It appears to have jumped out of it's bowl.\n";
	cout << "Do you: \n\n";
	cout << "1) Wash it off and put it back in the fish tank?\n\nOr\n\n2) Pick it up and put it back in the soup you were eating?\n";
	cin >> p1;
		if (p1 == 1){
			cout << "Hah, jokes on you. It was a Tortoise!. Next Question!\n";
		}else{
			cout << "Ah, I too shall "dine on Turtle soup.". Ahem, Next question!\n";
		}
	system("pause");
	system("cls");
	cout << "You are walking down the street and you see a guy getting mugged. What do you do?\n\n";
	cout << "1) Rush to his aid while calling the authorities?\n\nOr\n\n2) Tag yourself in and get that $5 he owes you too!\n";
	cin >> p2;
		if (p2 == 1){
			cout << "Quite Heroic. Dumb...but Heroic.\n";
		}else{
			cout << "Dang... remind me to never borrow money from you...\n";
		}
	system("pause");
	system("cls");
	cout << "Ok last one, I promise. Unless you want more?\n";
	cout << "1) Yes    2) No\n";
	cin >> p3;
		if (p3 == 2){
			cout << "Fine... lets move on\n";
		}else{
			cout << "You are a sick, sick person...I like it. Let's move on.\n";
		}
	system("pause");
	}


