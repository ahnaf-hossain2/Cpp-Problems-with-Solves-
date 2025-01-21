#include <iostream>
using namespace std;

class FootballPlayer {
    private:
        string name;
        int jerseyNumber;
        int goalsScored;
        int assists;
        int gamesPlayed;
    public:
    FootballPlayer(string n, int jn, int gs, int a, int gp) {
        name = n;
        jerseyNumber = jn;
        goalsScored = gs;
        assists = a;
        gamesPlayed = gp;
    }
    void playerInfo() {
        cout << "Name: " << name << endl;
        cout << "Jersey Number: " << jerseyNumber << endl;
        cout << "Goals Scored: " << goalsScored << endl;
        cout << "Assists: " << assists << endl;
        cout << "Games Played: " << gamesPlayed << endl;
    }
    float goalAssistRatio() { // Must typecast here or the accurate result will not be shown.
        return float(goalsScored + assists) / gamesPlayed;
    }
};

int main() {
    FootballPlayer player1("Ronaldo", 7, 30, 11, 19);
    FootballPlayer player2("Messi", 10, 25, 23, 20);
    player1.playerInfo();
    cout << "Goal Assist Ratio: " << player1.goalAssistRatio() << endl;
    player2.playerInfo();
    cout << "Goal Assist Ratio: " << player2.goalAssistRatio() << endl;
}
