// [1] Reflection

// - fail
// - Learned about toCharArray();

// [2] Problem description

// Two strings,  and , are called anagrams if they contain all the same characters in the same frequencies. For example, the anagrams of CAT are CAT, ACT, TAC, TCA, ATC, and CTA.

// Complete the function in the editor. If  and  are case-insensitive anagrams, return true; otherwise, return false instead.

// Input Format

// The first line contains a string denoting . 
// The second line contains a string denoting .

// Constraints

// Strings  and  consist of English alphabetic characters.
// The comparison should NOT be case sensitive.
// Output Format

// Return true if  and  are case-insensitive anagrams of each other; otherwise, return false instead.

// [3] Original solution

    static boolean isAnagram(String a, String b) {
        a = a.toLowerCase();
        b = b.toLowerCase();
        Map<Character, Integer> dict = new HashMap<Character, Integer>();
        boolean hasSameCount = true;
        for (Character c : a.toCharArray()){
            Integer countChar = dict.get(c);
            int nexCountChar = countChar == null ? 1 : countChar + 1;
            dict.put(c, nexCountChar);
        }
        
        Set<Character> filteredSet = new LinkedHashSet<Character>();
        
        for (Character c : b.toCharArray()){
            filteredSet.add(c);
        }
        
        for (Character c : filteredSet) {
            int count = b.length() - b.replace(String.valueOf(c), "").length();
            if (dict.get(c) != count) {
                hasSameCount = false;
            }
        }

        return hasSameCount;   
    }

// [4] Improved solution

    static boolean isAnagram(String a, String b) {
        char arrayA[] = a.toLowerCase().toCharArray();
        char arrayB[] = b.toLowerCase().toCharArray();
        
        Arrays.sort(arrayA);
        Arrays.sort(arrayB);
        
        return Arrays.equals(arrayA, arrayB);
    }