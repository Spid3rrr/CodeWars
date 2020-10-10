#include<string>  
class Printer
{
public:
    static std::string printerError(const std::string &s){
  
      int counter=0;
      int i;
      printf("YEET");
      for(i=0;i<s.length();i++){
        
        if( (s[i]<'a') || (s[i]>'m') ) {
            
            counter+=1;

        }
      }
        std::string ans=""+std::to_string(counter)+"/"+std::to_string(s.length()) ;
      return ans;
    }
    
};