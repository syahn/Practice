// 1. Reflection

// - I solved it.
// - Adding -1 to start index and +1 to end index make things easy.
// - Improved one is also for the any range that could be given.

// 2. Problem

// Given a sorted integer array where the range of elements are [0, 99] inclusive,
// return its missing ranges.
// For example, given [0, 1, 3, 50, 75], return [“2”, “4->49”, “51->74”, “76->99”]

// 3. Initial solution( complexity: time=>O(n) space=>O(n))

vector<string> missingRange(vector<int> v) {
        vector<int> cache(100, 0);
        vector<int> seq;
        vector<string> ret;

        for(int i=0; i<v.size(); i++){
          cache[v[i]]++;
        }

        bool isSeq = false;
        for(int j=0; j<100; j++){

          if(!cache[j]){

            if(j < 99 && !cache[j+1]){
              isSeq = true;
            }
            if(!isSeq) {
              ret.push_back(to_string(j));
            } else {
              seq.push_back(j);
            }
          } else {
            isSeq = false;
            if(seq.size() > 1){
              string rangeNum = to_string(seq.front()) + "->" + to_string(seq.back()) ;
              ret.push_back(rangeNum);
              seq.clear();
            }
          }
        }
        string rangeNum = to_string(seq.front()) + "->" + to_string(seq.back()) ;
        ret.push_back(rangeNum);
        return ret;
    }


// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

string outStr(int b, int e){
  return b - e ? to_string(b) + "->" + to_string(e) : to_string(b);
}

vector<string> missingRange(vector<int> v, int begin, int end) {
  vector<string> ret;
  int start = begin-1;
  for(int i=0; i<=v.size(); i++){
    int curr = (i==v.size()) ? end+1 : v[i];
    if(curr - start >= 2){
      ret.push_back(outStr(start+1, curr-1));
    }
    start = curr;
  }
  return ret;
}
