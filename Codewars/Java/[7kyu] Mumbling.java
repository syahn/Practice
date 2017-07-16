// 1. Reflection

// - Failed. 
// - Learned how to convert char toUpperCase

// 2. Problem

// This time no story, no theory. The examples below show you how to write function accum:

// Examples:

// Accumul.accum("abcd");    // "A-Bb-Ccc-Dddd"
// Accumul.accum("RqaEzty"); // "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
// Accumul.accum("cwAt");    // "C-Ww-Aaa-Tttt"
// The parameter of accum is a string which includes only letters from a..z and A..Z.


// 3. Initial solution( complexity: time=>O() space=>O())

public class Accumul {
    
    public static String accum(String s) {
        int count = 0;
         List<String> ret = new ArrayList<String>();
         char[] arrStr = s.toCharArray();
         for (char c : arrStr) {
            StringBuilder str = new StringBuilder();
            
            str.append(Character.toUpperCase(c));
            for (int i = 0; i<count; i++) {
                str.append(Character.toLowerCase(c));
            }
            count++;
            ret.add(str.toString());
         }
         return String.join("-", ret);
    }
}


// 4. Improved solution( complexity: time=>O() space=>O() )

public class Accumul {
    
    public static String accum(String s) {
      int count = 0;
      StringBuilder str = new StringBuilder();
      for (char c : s.toCharArray()) {
				if (count > 0) str.append("-");
        str.append(Character.toUpperCase(c));
        for (int i = 0; i<count; i++) {
          str.append(Character.toLowerCase(c));
        }
        count++;
      }
      return str.toString();
    }
}
