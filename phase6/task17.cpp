#include <iostream>
#include <string>

using namespace std;

class Player 
{
protected:
	
	
    string name;
    int age;
    string country;

public:
    Player(string n, int a, string c) 
    {
this->name=n;
this->age=a;
this->country=c;
}
    void displayinfo() 
	{
        cout << "Name: " << name << ", Age: " << age << " , Country: " << country << endl;
    
}
};

class CricketPlayer : public Player 
{
protected:
	
    int matche;
    string name;
    int age;
    string country;

public:
	
    CricketPlayer(string n, int a, string c, int mp) 
    {
    	name=n;
    	age=a;
    	country=c;
        matche=mp;
	}
    void cricket_player() 
	{
        displayinfo();
        cout << "Matches played: " << matche << endl;
    }
};

class Batsman : public cricketPlayer
 {
protected:
	
	
    int totalrun;
    double battingave;

public:
	
    Batsman(string n, int a, string c, int mp, int tr, double ba)
{
	    name=n;
    	age=a;
    	country=c;
        matche=mp;
        totalrun=tr;
        battingave=ba;
}
    void batsman_info() 
	{
        cricket_player();
        cout << "Total Runs: " << totalrun << ", Batting Average: " << battingave << endl;
    }
};

class Bowler : public CricketPlayer

 {
protected:
	
	
    int wicket;
    double bowlingave;

public:
    Bowler(string n, int a, string c, int mp, int wt, double ba) 
    {
    	 name=n;
    	age=a;
    	country=c;
        matche=mp;
        wicket=wt;
        bowlingave=ba;
	}
    void bowler_info()
	 {
      cricket_player_();
      
        cout << "Wickets Taken: " << wicket << ", Bowling Average: " << bowlingave << endl;
    }
};

int main() 
{
    Batsman player1("Virat Kohli", 32, "India", 250, 12000, 59.25);
    Batsman player2("Steve Smith", 32, "Australia", 200, 9000, 55.50);
    Bowler player3("Jasprit Bumrah", 28, "India", 150, 250, 21.45);
    Batsman player4("Kane Williamson", 30, "New Zealand", 180, 8500, 54.65);
    Bowler player5("Pat Cummins", 28, "Australia", 170, 200, 24.80);

    cout << "Top three Batsmen:" << endl;
    player1.batsman_info();
    cout << endl;
    player2.batsman_info();
    cout << endl;
    player4.batsman_info();
    cout << endl;

    cout << "Top two Bowlers:" << endl;
    player3.bowler_info();
    cout << endl;
    player5.bowler_info();

    return 0;
}

