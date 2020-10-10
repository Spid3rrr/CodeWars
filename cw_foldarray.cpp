#include<iostream>
class Kata
{
public:
    std::vector<int> foldArray(std::vector<int> array, int runs)
    {
        std::vector<int> temp;
        int l=array.size();
        for(int t=0;t<runs;t++){
            int j=0;
            for(j=0;j<=(l/2);j++)
            {
                if  (j==(l/2)) 
                    {temp.push_back(array[j]);
                    std::cout<<" this "<<array[j]<<"\n";}
                else 
                    temp.push_back(array[j]+array[l-j-1]);
                    std::cout<<" this "<<array[j]<<" and "<<array[l-j-1]<<"\n";
            }
            array.swap(temp);
            temp.clear();
            if(l==2){l=1;} else l=array.size();
            for (auto x =array.begin(); x != array.end(); ++x)
                    std::cout << *x << ' ';
            std::cout << " \\ ";
        }   



        return array;
    }
};