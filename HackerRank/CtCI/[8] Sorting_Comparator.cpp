// # Reflection

// - I couldn't solve it by myself.
// - I didn't focus the first condition which is comparison of scores should be followed
//   by comparison of names.
// - I haven't use c++ for a while, so it's quite awkward to use it.

// # Problem

// Comparators are used to compare two objects. In this challenge, you'll create a
// comparator and use it to sort an array. The Player class is provided in the editor below; it has two fields:
//
// A string, .
// An integer, .
// Given an array of  Player objects, write a comparator that sorts them in order
// of decreasing score; if  or more players have the same score, sort those players
// alphabetically by name. To do this, you must create a Checker class that implements
// the Comparator interface, then write an int compare(Player a, Player b) method
// implementing the Comparator.compare(T o1, T o2) method.

// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
};

int compare(Player p1, Player p2){
  if(p1.score != p2.score){
    return p1.score > p2.score;
  } else {
    return p1.name < p2.name;
  }

}

vector<Player> comparator(vector<Player> players) {
  sort(players.begin(), players.end(), compare);
  return players;
}

int main() {

    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }

    vector<Player > answer = comparator(players);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    }
    return 0;
}


// # Improved solution
