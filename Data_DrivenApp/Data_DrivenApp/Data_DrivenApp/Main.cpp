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
			string tweet1;

			ifstream File1;
			File1.open("sampleTweets.csv");
			int p = 0;

			if (menu == 3) {
				if (File1.good()) {
					while (!File1.eof()) {

						getline(File1, tweet1);

						if (tweet1.find("Politics") <= tweet1.length() || tweet1.find("politics") <= tweet1.length() || tweet1.find("politic") <= tweet1.length() || tweet1.find("Politic") <= tweet1.length()) {

							p++;

						}
					}

					cout << "             The curent number of tweets that contain the word Politics = " << p << endl;
					cout << "_________________________________________________________________________________________" << endl;
					inFile.close();
				}
			}
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					//COUNTING THE TOTAL NUMBER OF TWEETS THAT INCLUDE THE WORD TRUMP
			string tweet2;

			ifstream File2;
			File2.open("sampleTweets.csv");
			int t = 0;

			if (menu == 4) {
				if (File2.good()) {
					while (!File2.eof()) {

						getline(File2, tweet2);

						if (tweet2.find("Trump") <= tweet2.length() || tweet2.find("trump") <= tweet2.length() || tweet2.find("politic") <= tweet2.length() || tweet2.find("Politic") <= tweet2.length()) {

							t++;

						}
					}

					cout << "             The curent number of tweets that contain the word Trump = " << t << endl;
					cout << "_________________________________________________________________________________________" << endl;
					inFile.close();
				}
			}
				//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					//COUNTING THE TOTAL NUMBER OF TWEETS THAT INCLUDE THE WORD PARIS
			string tweet3;

			ifstream File3;
			File3.open("sampleTweets.csv");
			int pa = 0;

			if (menu == 5) {
				if (File3.good()) {
					while (!File3.eof()) {

						getline(File3, tweet3);

						if (tweet3.find("Paris") <= tweet3.length() || tweet3.find("paris") <= tweet3.length()) {

							pa++;

						}
					}

					cout << "             The curent number of tweets that contain the word Paris = " << pa << endl;
					cout << "_________________________________________________________________________________________" << endl;
					inFile.close();
				}
			}

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					//PRINTING TWEETS THAT SHOW THE WORD PARIS
			string tweet4;

			ifstream inFile4;
			inFile4.open("sampleTweets.csv");

			if (menu == 6) {
				if (inFile4.good()) {
					while (!inFile4.eof()) {

						getline(inFile4, tweet4);

						if (tweet4.find("Paris") <= tweet4.length() || tweet4.find("paris") <= tweet4.length()) {

							cout << "         Tweets including Paris: " << endl;
							cout << tweet4 << endl << "_____________________________________________________________________________________________________________" << endl;

						}

					}
					cout << "_________________________________________________________________________________________" << endl << endl << endl;
					inFile.close();
				}
			}

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					//PRINTING TWEETS THAT SHOW THE WORD DREAMWORK
			string tweet5;

			ifstream inFile5;
			inFile5.open("sampleTweets.csv");

			if (menu == 7) {
				if (inFile5.good()) {
					while (!inFile5.eof()) {

						getline(inFile5, tweet5);

						if (tweet5.find("Dreamworks") <= tweet5.length() || tweet5.find("dreamworks") <= tweet5.length() || tweet5.find("Dreamwork") <= tweet5.length() || tweet5.find("dreamwork") <= tweet5.length()) {

							cout << "         Tweets including Dreamworks: " << endl;
							cout << tweet5 << endl << "_____________________________________________________________________________________________________________" << endl;

						}

					}
					cout << "_________________________________________________________________________________________" << endl << endl << endl;

					inFile.close();
				}
			}

			//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					//PRINTING TWEETS THAT SHOW THE WORD UBER
			string tweet6;

			ifstream inFile6;
			inFile6.open("sampleTweets.csv");

			if (menu == 8) {
				if (inFile6.good()) {
					while (!inFile6.eof()) {

						getline(inFile6, tweet6);

						if (tweet6.find("Uber") <= tweet6.length() || tweet6.find("uber") <= tweet6.length()) {

							cout << "         Tweets including Uber: " << endl;
							cout << tweet6 << endl << "_____________________________________________________________________________________________________________" << endl;

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
					//PRINTING TWEETS THAT SHOW THE WORD TRUMP
			string tweet7;

			ifstream inFile7;
			inFile7.open("sampleTweets.csv");

			if (menu == 9) {
				if (inFile7.good()) {
					while (!inFile7.eof()) {

						getline(inFile7, tweet7);

						if (tweet7.find("Trump") <= tweet7.length() || tweet7.find("trump") <= tweet7.length()) {

							cout << "         Tweets including Trump: " << endl;
							cout << tweet7 << endl << "_____________________________________________________________________________________________________________" << endl;

						}

					}
					cout << "_________________________________________________________________________________________" << endl << endl << endl;

					inFile7.close();
				}
			}
			if (menu < 1 || menu >10) {
				cout << "Input not valid. Enter correct input" << endl;
				cout << "_________________________________________________________________________________________" << endl;
			}
			
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					//PRINTING TWEETS THAT SHOW THE WORD POLITICS
			string tweet8;

			ifstream inFile8;
			inFile8.open("sampleTweets.csv");

			if (menu == 10) {
				if (inFile8.good()) {
					while (!inFile8.eof()) {

						getline(inFile8, tweet8);

						if (tweet8.find("Politics") <= tweet8.length() || tweet8.find("politics") <= tweet8.length()) {

							cout << "         Tweets including Politics: " << endl;
							cout << tweet8 << endl << "_____________________________________________________________________________________________________________" << endl;

						}

					}
					cout << "_________________________________________________________________________________________" << endl << endl << endl;
					inFile8.close();
				}
			}
			if (menu < 1 || menu >10) {
				cout << "Input not valid. Enter correct input" << endl;
				cout << "_________________________________________________________________________________________" << endl;
			}
		
		//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
	system("pause");
}


	
		
