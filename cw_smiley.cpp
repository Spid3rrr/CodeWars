int countSmileys(std::vector<std::string> arr)
{
    int ans = 0 , i = 0 ;
    for(int i=0;i<arr.size();i++){
        if(arr[0]==':' || arr[0]==';' ) {
            if(arr[1]==')' || arr[1]=='D') 
            {
                    ans++;
            }
            else if(arr[1]=='-' || arr[1]=='~') 
            {
                    if(arr[2]==')' || arr[2]=='D') 
            {
                    ans++;
            }
            }
        }
    }


  return ans;
}