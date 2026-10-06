class Solution {
public:
    bool equalFrequency(string word) {
        // bool flag = true;
        // int arr[1000]={0};
        // for(int i=0; i<word.length(); i++)
        //     {if(word.find(word[i])==1)
        //         {arr[i]++;
        //         }
        //      else
        //         {continue;
        //         }
        //     }
        // for(int i=0; (i+1)<word.length(); i++)
        //     {if(arr[i]==1 && arr[i+1]==1)
        //         {continue;
        //         }
        //      else { flag = false; }
        //     }
        // return (flag);

        // bool chPresFlag=false, foundFlag=false;
        // int pos, sizeOfFreq=0;
        // int freq[100] = {0} ;
        // for(int i=0; i<word.length(); i++)
        //     {pos = word.find(word[i], i+1);
        //      bool flag = false;
        //      if(flag==true && freq[1]!=0) // eg : aaabc, more than 2 letters of same char are present 
        //         { break; }
        //      while(pos!=-1)
        //         {word.erase(pos,1);
        //          pos = word.find(word[i], i+1);
        //          freq[sizeOfFreq]++;
        //          if(pos!=-1)
        //             {flag = true;
        //             }
        //          else { sizeOfFreq++; }
        //         }
             
        //     }
        // return (freq[1]==0);
    
        
        int freq[26] = {0};

        // Count frequency of every character
        for(int i = 0; i < word.length(); i++) {
            freq[word[i] - 'a']++;
        }

        // Try removing one occurrence of each character
        for(int i = 0; i < 26; i++) {
            
            if(freq[i] == 0)
                continue;

            // Remove one occurrence
            freq[i]--;

            bool flag = true;
            int required = 0;

            // Check whether all remaining frequencies are equal
            for(int j = 0; j < 26; j++) {
                
                if(freq[j] == 0)
                    continue;

                if(required == 0) {
                    required = freq[j];
                }
                else if(freq[j] != required) {
                    flag = false;
                    break;
                }
            }

            // Restore the frequency
            freq[i]++;

            if(flag == true)
                return true;
        }
        return false;
    }
};
