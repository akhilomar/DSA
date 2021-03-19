  Q : Longest possible chunked pallindrom i.e (ghi)(abcdef)(hello)(adam)(hello)(abcdef)(ghi)

  int longestPalchunked(string s){
      return Processor(s, 0, 0 , s);
  }

  int Processor(string s, int res, int len, string text){
      if(s.empty())
        return res;
      if(s.size() == 1){
          if(text.size() - len == 1)
            return res+1;
          else
            return 1;
      }
      int n = s.size();
      for(int i = 0; i < n/2; i++){
          if(!s.substr(0, i+1).compare(s.substr(n - 1 - i), i+1))
            Processor(s.substr(i+1, n - 2i - 2), res+2, len + (i+1)*2, text);
      }
    return res+1;
  }


  //easy to understand just follow the conditions