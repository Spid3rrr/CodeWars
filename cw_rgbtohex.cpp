#include <iostream>
class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b)
    {
        std::string rs,gs,bs,ans;
        if(r<0) {r=0;} if(r>255){r=255;}
        if(g<0) {g=0;} if(g>255){g=255;}
        if(b<0) {b=0;} if(b>255){b=255;}

        int r1=r/16;
        int r2=r%16;
        if(r1>9) {rs=('A'+r1-10);} else {rs=std::to_string(r1);}
        if(r2>9) {rs+=('A'+r2-10);} else {rs+=std::to_string(r2);}
        std::cout << rs << " // ";

        int g1=g/16;
        int g2=g%16;
        if(g1>9) {gs=('A'+g1-10);} else {gs=std::to_string(g1);}
        if(g2>9) {gs+=('A'+g2-10);} else {gs+=std::to_string(g2);}
        std::cout << gs<< " // ";

        int b1=b/16;
        int b2=b%16;
        if(b1>9) {bs=('A'+b1-10);} else {bs=std::to_string(b1);}
        if(b2>9) {bs+=('A'+b2-10);} else {bs+=std::to_string(b2);}
        std::cout << bs<< " // \n ";




        ans = rs+gs+bs;
        return ans;
        


    }
};
