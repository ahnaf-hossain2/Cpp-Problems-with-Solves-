/*
Write a program that calculates the
average distance from the Sun of all the
planets in the solar system. The program
should ask the user to enter the distance
from the Sun for each planet, and then
calculate the average distance. (The
eight planets are Mercury, Venus, Earth,
Mars, Jupiter, Saturn, Uranus, and
Neptune). [Must use loops]
*/

#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;
    double distance;
    int numPlanets = 8;

    // Planet names for user-friendly prompts
    string planetNames[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    // Loop to get the distances for each planet
    for (int i = 0; i < numPlanets; ++i) {
        cout << "Enter the distance from the Sun for " << planetNames[i] << ": ";
        cin >> distance;
        sum += distance;
    }

    // Calculate the average distance
    double average = sum / numPlanets;

    // Display the result
    cout << "The average distance from the Sun for all planets is: " << average << " units." << endl;

    return 0;
}