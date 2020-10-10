using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window)
    {
    int seen=-1;
        if( h>0 && bounce>0 && bounce<1 && window<h ) {
            while(  h   >  window)
            {
                    h=h*bounce;
                    seen=seen+2;
            }
        }
     return seen; 
    }
};