#include <iostream>
#include <fstream>
#include<string>

using namespace std;

int t = 0;


int main() {

	cout << "                               Welcome to Twitter" << endl;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	

	cout << "_________________________________________________________________________________________" << endl;
	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//MENU
	
		cout << "             Please select your options" << endl;

		int menu = 0;
		bool machineOn = true;

			

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//COUNTING THE TOTAL NUMBER OF TWEETS.

		while (machineOn) {
			
			//TOTAL COUNT
			cout << "COUNT" << endl;
			cout << "Total number of tweets - [PRESS 1] / Total number of tweets with the word Money - [PRESS 2] / Total number of tweets with the word Politics - [PRESS 3] / Total number of tweets with the word Trump - [PRESS 4]/ Total number of tweets involving Paris - [PRESS 5] " << endl << endl;

			//DRINKS
			cout << "WORD SEARCH" << endl;
			cout << "Tweets involving Paris - [PRESS 6] / Tweets involving Dreamwork - [PRESS 7] / Tweets involving Uber - [PRESS 8] / Tweets involving Trump - [PRESS 9] / Tweets involving Politics - [PRESS 10]" << endl << endl;

			string tweets;

			ifstream inFile;

			inFile.open("sampleTweets.csv");

			cin >> menu;
			while (cin.fail()) {
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Input not valid. Enter correct input" << endl;
				cin >> menu;
				cout << " " << endl;
			}

			if (menu == 1) {
				if (inFile.good()) {
					while (!inFile.eof()) {

						getline(inFile, tweets);
						t++;

						//cout << "         The total number of tweets are currently: " << tweets <<endl; 
						//IGNORE ABOVE THAT PRINTS ALL 63000 TWEETS.
					}


					inFile.close();
				}

				cout << "             The total number of tweets are currently " << t << endl;
				cout << "_________________________________________________________________________________________" << endl;
			}

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				//COUNTING THE TOTAL NUMBER OF TWEETS THAT INCLUDE THE WORD MONEY
			string tweet;

			ifstream File;
			File.open("sampleTweets.csv");
			int m = 0;

			if (menu == 2) {
				if (File.good()) {
					while (!File.eof()) {

						getline(File, tweet);

						if (tweet.find("money") <= tweet.length() || tweet.find("Money") <= tweet.length()) {

							m++;

						}
					}

					cout << "             The curent number of tweets that contain the word money = " << m << endl;
					cout << "_________________________________________________________________________________________" << endl;
					inFile.close();
				}
			}

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					//COUNTING THE TOTAL NUMBER OF TWEETS THAT INCLUDE THE WORD POLITICS
			string tweet2;

			ifstream File2;
			File2.open("sampleTweets.csv");
			int p = 0;

			if (menu == 3) {
				if (File2.good()) {
					while (!File2.eof()) {

						getline(File2, tweet2);

						if (tweet2.find("Politics") <= tweet2.length() || tweet2.find("politics") <= tweet2.length() || tweet2.find("politic") <= tweet2.length() || tweet2.find("Politic") <= tweet2.length()) {

							p++;

						}
					}

					cout << "             The curent number of tweets that contain the word politics = " << p << endl;
					cout << "_________________________________________________________________________________________" << endl;
					inFile.close();
				}
			}

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					//PRINTING TWEETS THAT SHOW THE WORD PARIS
			string tweet3;

			ifstream inFile3;
			inFile3.open("sampleTweets.csv");

			if (menu == 6) {
				if (inFile3.good()) {
					while (!inFile3.eof()) {

						getline(inFile3, tweet3);

						if (tweet3.find("Paris") <= tweet3.length() || tweet3.find("paris") <= tweet3.length()) {

							cout << "         Tweets including Paris: " << endl;
							cout << tweet3 << endl << "_____________________________________________________________________________________________________________" << endl;

						}

					}
					cout << "_________________________________________________________________________________________" << endl << endl << endl;
					inFile.close();
				}
			}

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					//PRINTING TWEETS THAT SHOW THE WORD DREAMWORK
			string tweet4;

			ifstream inFile4;
			inFile4.open("sampleTweets.csv");

			if (menu == 7) {
				if (inFile4.good()) {
					while (!inFile4.eof()) {

						getline(inFile4, tweet4);

						if (tweet4.find("Dreamworks") <= tweet4.length() || tweet4.find("dreamworks") <= tweet4.length() || tweet4.find("Dreamwork") <= tweet4.length() || tweet4.find("dreamwork") <= tweet4.length()) {

							cout << "         Tweets including Dreamworks: " << endl;
							cout << tweet4 << endl << "_____________________________________________________________________________________________________________" << endl;

						}

					}
					cout << "_________________________________________________________________________________________" << endl << endl << endl;

					inFile.close();
				}
			}

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					//PRINTING TWEETS THAT SHOW THE WORD UBER
			string tweet5;

			ifstream inFile5;
			inFile5.open("sampleTweets.csv");

			if (menu == 8) {
				if (inFile5.good()) {
					while (!inFile5.eof()) {

						getline(inFile5, tweet5);

						if (tweet5.find("Uber") <= tweet5.length() || tweet5.find("uber") <= tweet5.length()) {

							cout << "         Tweets including Uber: " << endl;
							cout << tweet5 << endl << "_____________________________________________________________________________________________________________" << endl;

						}

					}
					cout << "_________________________________________________________________________________________" << endl << endl << endl;
					inFile.close();
				}
			}
			if (menu < 1 || menu >10) {
				cout << "Input not valid. Enter correct input" << endl;
				cout << "_________________________________________________________________________________________" << endl;
			}
		} 
			
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
	system("pause");
}
