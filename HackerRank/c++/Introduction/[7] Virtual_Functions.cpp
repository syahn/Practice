// # Reflection



// # Problem



// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
}

class Professor : public Person
{
private:
    int cur_id;
    int publications;
public:
    void getdata(){
        cin >> name >> age >> publications;
    };
    void putdata(){
        cout << name << " " << age << " " << publications;
    }
}

class Student : public Person
{
private:
    int marks[6];
    int cur_id;
public:
    void getdata(){
        cin >> name >> age;
        scanf("%d %d %d %d %d %d", marks[0], marks[1], marks[2], marks[3], marks[4], marks[5]);
        
    };
    void putdata(){
        cout << name << " " << age << " ";
    }
}

int main(){

}
// # Improved solution
