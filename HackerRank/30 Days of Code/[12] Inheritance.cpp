// # Reflection

// Need to study class and inheritance

// # Problem

// Objective
// Today, we're delving into Inheritance. Check out the Tutorial tab for learning
// materials and an instructional video!
//
// Task
// You are given two classes, Person and Student, where Person is the base class
// and Student is the derived class. Completed code for Person and a declaration
// for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.
//
// Complete the Student class by writing the following:
//
// A Student class constructor, which has  parameters:
// A string, .
// A string, .
// An integer, .
// An integer array (or vector) of test scores, .
// A char calculate() method that calculates a Student object's average and returns
// the grade character representative of their calculated average:
//



// # Initial solution


using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};


class Student :  public Person{
	private:
		vector<int> testScores;
	public:

    Student(string fn, string ln, int id, vector<int> scores) :
        Person(fn,ln,id),
        testScores (scores) {}

    char calculate() {
        int avg = 0;
        for(auto i: testScores) avg += i;
        avg /= testScores.size();
        if(avg < 40) return 'T';
        else if(avg < 55) return 'D';
        else if(avg < 70) return 'P';
        else if(avg < 80) return 'A';
        else if(avg < 90) return 'E';
        else return 'O';
};

// # Improved solution
