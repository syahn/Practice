// [1] Reflection

// - solved

// [2] Problem description

// We define the following terms:

// Lexicographical Order, also known as alphabetic or dictionary order, orders characters as follows: 
// For example, ball < cat, dog < dorm, Happy < happy, Zoo < ball.

// A substring of a string is a contiguous block of characters in the string. For example, the substrings of abc are a, b, c, ab, bc, and abc.
// Given a string, , and an integer, , complete the function so that it finds the lexicographically smallest and largest substrings of length .

// Input Format

// The first line contains a string denoting . 
// The second line contains an integer denoting .

// Constraints

//  consists of English alphabetic letters only (i.e., [a-zA-Z]).
// Output Format

// Return the respective lexicographically smallest and largest substrings as a single newline-separated string.

// Sample Input 0

// welcometojava
// 3
// Sample Output 0

// ava
// wel
// Explanation 0

// String  has the following lexicographically-ordered substrings of length :

// We then return the first (lexicographically smallest) substring and the last (lexicographically largest) substring as two newline-separated values (i.e., ava\nwel).

// The stub code in the editor then prints ava as our first line of output and wel as our second line of output.


// [3] Original solution

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
  
    public static String getSmallestAndLargest(String s, int k) {
        String smallest = s.substring(0, k);
        String largest = s.substring(0, k);
        
        for (int idx = 0; idx < s.length()-k+1; idx++) {
            String subString = s.substring(idx, idx+k);
            if(smallest.compareTo(subString) > 0) smallest = subString;
            else if(largest.compareTo(subString) < 0) largest = subString;
        }
        
        return smallest + "\n" + largest;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}

// [4] Improved solution
