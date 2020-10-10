
int checkpalin(std::string st) {
    int ans=1;
    for(int i=0;i<st.len();i++) 
    {
      if(st[i]!=st[st.len()-i]) {ans=0;}
    } 
    return ans;
}

int longest_palindrome(const std::string &s)
{ 
    int b=0;
    std::string a ;
    for(int i=0;i<s.len();i++) 
    {
     if(s[s.len()-i]==s[i]) {
         a = s.substr (i,s[s.len()-i]);
         if (checkpalin(a)) b++;
         }
    } 
    return b; //your code here
}