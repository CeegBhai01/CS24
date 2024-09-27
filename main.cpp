#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
 
  //outputs the text file that is read 
  string myText;

  // Reads from the text file
  ifstream file1("Judges.txt");

  // Usimg a while loop together with the getline() function to read the file line by line
  while (getline (file1, myText)) {
    // Output the text from the file
    cout << myText + "\n";
    
  }

file1.close();
// Declare variables for the file and candidates points
    ifstream dataFile;
    dataFile.open("Judges.txt");
    


//this will throw na error if the file cannot be found.
    if (!dataFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    // initializing points for each candidates
    int redPoints = 0, greenPoints = 0, bluePoints = 0, yellowPoints = 0, purplePoints = 0;

    string judgeName;
    int numberOfVotes;
    char candidates;
    
    // Reads data from the file
    while (dataFile >> judgeName >> numberOfVotes) {
        // For each vote the judge casts, assign points based on position

        for (int i = 0; i < numberOfVotes; ++i) {
            dataFile >> candidates;
            int points = 5 - i; // First vote is 5 points, second is 4, and so on

            // Add points based on candidates's color
            switch (candidates) {
                case 'R': 
                    redPoints += points;
                    break;

                case 'G': 
                    greenPoints += points; 
                    break;

                case 'B': 
                    bluePoints += points; 
                    break;

                case 'Y': 
                    yellowPoints += points; 
                    break;

                case 'P': 
                    purplePoints += points; 
                    break;

                default: 
                    break;
            }
        }
    }

    dataFile.close();

    // checks who is the winner with higher number of points
    int maxPoints = redPoints;
    string winner = "Red";
    
    if (greenPoints > maxPoints) {
        maxPoints = greenPoints;
        winner = "Green";
    }
    if (bluePoints > maxPoints) {
        maxPoints = bluePoints;
        winner = "Blue";
    }
    if (yellowPoints > maxPoints) {
        maxPoints = yellowPoints;
        winner = "Yellow";
    }
    if (purplePoints > maxPoints) {
        maxPoints = purplePoints;
        winner = "Purple";
    }

    // Output results
    cout << "\nRed got: " << redPoints << " points\n";
    cout << "Green got: " << greenPoints << " points\n";
    cout << "Blue got: " << bluePoints << " points\n";
    cout << "Yellow got: " << yellowPoints << " points\n";
    cout << "Purple got: " << purplePoints << " points\n";
    cout << "The winner is " << winner << " with " << maxPoints << " points!" << endl;

    return 0;
}