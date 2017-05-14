// 1. Reflection

// - Solved
// - But it took some trial and test, because I didn't read the description carefully

// 2. Problem

// The new "Avengers" movie has just been released! There are a lot of people at the cinema box office standing in a huge line. Each of them has a single 100, 50 or 25 dollars bill. A "Avengers" ticket costs 25 dollars.

// Vasya is currently working as a clerk. He wants to sell a ticket to every single person in this line.

// Can Vasya sell a ticket to each person and give the change if he initially has no money and sells the tickets strictly in the order people follow in the line?

// Return YES, if Vasya can sell a ticket to each person and give the change. Otherwise return NO.

// 3. Initial solution( complexity: time=>O(N) space=>O(N))

function tickets(peopleInLine) {
  let balance = {
    "25": 0,
    "50": 0,
    "100": 0
  };

  if (peopleInLine[0] > 25) return "NO";
  else balance["25"] += 1;

  for (let i = 1; i < peopleInLine.length; i++) {
    if (peopleInLine[i] === 50) {
      if (balance["25"] === 0) return "NO";
      balance["25"] -= 1;
      balance["50"] += 1;
    } else if (peopleInLine[i] === 100) {
      if (balance["25"] * 25 + balance["50"] * 50 < 75) return "NO";
      if (balance["50"] >= 1 && balance["25"] >= 1) {
        balance["25"] -= 1;
        balance["50"] -= 1;
      } else if (balance["25"] >= 3) {
        balance["25"] -= 3;
      } else return "NO";
      balance["100"] += 1;
    } else balance["25"] += 1;
  
  return "YES";
}

// 4. Improved solution( complexity: time=>O(N) space=>O(1N) )

function tickets(peopleInLine) {
  let bal = [0, 0, 0];

  for (let i = 0; i < peopleInLine.length; i++) {
    switch (peopleInLine[i]) {
      case 25:
        bal[0]++;
        break;
      case 50:
        bal[0]--;
        bal[1]++;
        break;
      case 100:
        bal[1] ? bal[1]-- : (bal[0] -= 2);
        bal[0]--;
        break;
    }
    if (bal[0] < 0) return "NO";
  }
  return "YES";
}
