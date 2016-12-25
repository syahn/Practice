//와일드카드 패턴 w가 문자열s에 대응되는지 여부를 반환한다.
bool match(const string &w, const string& s){
    //w[pos]와 s[pos]를 맞춰나간다.
    int pos = 0;
    while(pos < s.size() && pos < w.size() && (w[pos] == '?' || w[pos] == s[pos]))
        ++pos;
    //더이상 대응할 수 없으면 왜 while문이 끝났는지 확인한다.
    //2. 패턴 끝에 도달해서 끝난경우: 문자열도 끝났어야 대응됨
    if(pos==w.size())
        return pos = s.size();
    //4. *를 만나서 끝난경우: *에 몇 글자를 대응해야 할지 재귀 호출하면서 확인한다.
    if(w[pos] == '*')
        for(int skip = 0; pos+skip <= s.size(); ++skip)
            if(match(w.substr(pos+1), s.substr))
                return true;

    return false;
}

//-1은 아직 답이 계산되지 않았음을 의미한다.
//1은 해당 입력들이 서로 대응됨을 의미한다.
//0은 해당 입력들이 서로 대응되지 않음을 의미한다.
int cache[101][101];
//패턴과 문자열
string W, S;
//와일드 카드 패턴 W[w...]가 문자열 S[s...]에 대응되는지 여부를 반환한다.
bool matchMemoized(int w, int s){
    //메모이제이션
    int& ret = cache[w][s];
    if(ret != -1) return ret;
    //W[w]와 S[s]를 맞춰나간다.
    while(s < S.size() && w < W.size() && W[w] == "?" || W[w] == S[s])){
        ++w;
        ++s;
    }
}
