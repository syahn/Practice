// [1] Reflection

// - solved
// - Became to know about stringBuilder

// [2] Problem description

// Given a string , print Yes if it is a palindrome, print No otherwise.

// Constraints

//  will consist at most  lower case english letters.
// Sample Input

// madam
// Sample Output

// Yes

// [3] Original solution

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String reversedA = new StringBuilder(A).reverse().toString();
        System.out.print(A.equals(reversedA) ? "Yes": "No");
    }
}


// [4] Improved solution
