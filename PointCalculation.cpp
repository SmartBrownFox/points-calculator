/******************************************************************************

Name: Wesley Charlton
Course: CS 2010
Class Time: 11:30AM

********************************************************************************
Program Assignment 2, Charltonw, Sunday February 9th, 2025

     Purpose: Calculate recycling points fromtrash/recyclables, and then converting
     them to specific tickets based off final point value/priority.

     Input: Number of bottles, cans, and boxes recycled.

     Processing: Calculate total points, and then distribute tickets
     based off the point calculation (by priority) w/ highest to lowest
     value tickets.

     Output: Total points, ticket counts, and then any remainder of points.

     Reflection: This assignment helps reinfornce using proper const. values,
     and integer division! (A tip for me, it also helped me reinstate how to
     actually process constant values, shoutout to Grant for me overhearing
     about how you should make constant variables all CAPS.)

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Our constant values (so they can never change w/calculations, muhahahaha) :D
	const int CANPOINTS = 2;
	const int BOTTLEPOINTS = 10;
	const int BOXPOINTS = 20;
	const int CEDARPOINTS = 600;
	const int ZOO = 80;
	const int MOVIE = 8;

	// Holding space for our integers now
	int bottles;
	int cans;
	int boxes;
	int totalPoints;
	int cedarTickets;
	int zooTickets;
	int movieTickets;
	int leftPoints;

	// User Input

	cout << "Enter number of bottles: ";
	cin >> bottles;
	cout << "Enter number of cans: ";
	cin >> cans;
	cout << "Enter number of boxes: ";
	cin >> boxes;

	// Calculations for points
	totalPoints = (bottles * BOTTLEPOINTS) + (cans * CANPOINTS) + (boxes * BOXPOINTS);

	// Calculation of our tickets with specific priority (theoretically you could do if/else if you wanna pull more resources w/ more lines of code)
	// Goes from (Cedar -> Zoo -> Movie) "hope this helps!"
	cedarTickets = totalPoints / CEDARPOINTS;
	leftPoints = totalPoints % CEDARPOINTS;

	zooTickets = leftPoints / ZOO;
	leftPoints %= ZOO;

	movieTickets = leftPoints / MOVIE;
	leftPoints %= MOVIE;

	// Throughput! (Chipotle reference) = Outputting our results

	cout << "\n------*\nBGS-U Recyclables\n---*\n" << endl;
	cout << "Total Entertainment Points: " << setw(6) << right << totalPoints << endl;
	cout << "Total Cedar Point Tickets: " << setw(7) << right << cedarTickets << endl;
	cout << "Total Zoo Tickets: " << setw(15) << right << zooTickets << endl;
	cout << "Total Movie Tickets: " << setw(13) << right << movieTickets << endl;
	cout << "Points left that runneth over: " << setw(3) << right << leftPoints << endl;

	return 0;
}