//[1] Reflection

// - Failed to solve it
// - I should have written try-catch
// - There are also java8 feature for this

// [2] Problem description

// The Calendar class is an abstract class that provides methods for converting between a specific instant in time and a set of calendar fields such as YEAR, MONTH, DAY_OF_MONTH, HOUR, and so on, and for manipulating the calendar fields, such as getting the date of the next week.

// You are given a date. Your task is to find what the day is on that date.

// Input Format

// A single line of input containing the space separated month, day and year, respectively, in   format.

// Constraints

// Output Format

// Output the correct day in capital letters.

// Sample Input

// 08 05 2015
// Sample Output

// WEDNESDAY
// Explanation

// The day on August th  was WEDNESDAY.

// [3] Original solution

// [4] Improved solution

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String month = in.next();
        String day = in.next();
        String year = in.next();
        String input_date = day + "/" + month + "/" + year;
        SimpleDateFormat format1 = new SimpleDateFormat("dd/MM/yyyy");
        try {
            DateFormat format2 = new SimpleDateFormat("EEEE"); 
            String final_day = format2.format(format1.parse(input_date));
            System.out.println(final_day.toUpperCase());
        }
        catch(Exception e){}
    }
}
public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int month = Integer.parseInt(in.next());
        int day = Integer.parseInt(in.next());
        int year = Integer.parseInt(in.next());
        
        LocalDate dt = LocalDate.of(year, month, day);
        System.out.print(dt.getDayOfWeek());
    }
}
