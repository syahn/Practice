// # Reflection

// - if a number is divisable by another number less than or equal to square root of number,
// it is not prime

// # Problem

// Objective
// Today we're learning about running time! Check out the Tutorial tab for learning
// materials and an instructional video!
//
// Task 
// A prime is a natural number greater than  that has no positive divisors other
// than  and itself. Given a number, , determine and print whether it's  or .


// # Initial solution

int main() {
    int n, t;

    cin >> n;
    for(int j=0; j<n; ++j){
        bool isPrime = true;
        cin >> t;
        if(t==1) isPrime = false;
        for(int i=2; i*i<=t; i++){
            if(t % i == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) cout << "Prime" << endl;
        else cout << "Not prime" << endl;
    }
    return 0;
}


// # Improved solution
