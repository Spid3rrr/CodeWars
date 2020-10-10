#include<vector>

std::vector<unsigned long long> partsSum(const std::vector<unsigned long long>& ls){
  //your code here
    unsigned long long sum=0;
    std::vector<unsigned long long> ans;
    for(unsigned long long f=0;f<ls.size();f++)
        {
            sum=sum+ls[f];
        }
    ans.push_back(sum);
    for(unsigned long long i=0;i<ls.size();i++)
        {
            sum=sum-ls[i];
            ans.push_back(sum);
        }
    return ans;
}