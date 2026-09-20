class Solution {
public:
    string generateTag(string caption) {
        string newCaption = "#";
        bool firstLetter = true;

        for(int i = 0; i < caption.size(); i++)
        {
            if(newCaption.size() >= 100)
                break;

            if(caption[i] == ' ')
            {
                continue;
            }

            if(firstLetter)
            {
                if(caption[i] >= 'A' && caption[i] <= 'Z')
                    newCaption += (caption[i] + 32);
                else
                    newCaption += caption[i];

                firstLetter = false;
            }
            else if(caption[i-1] == ' ')
            {
                if(caption[i] >= 'a' && caption[i] <= 'z')
                    newCaption += (caption[i] - 32);
                else
                    newCaption += caption[i];
            }
            else
            {
                if(caption[i] >= 'A' && caption[i] <= 'Z')
                    newCaption += (caption[i] + 32);
                else
                    newCaption += caption[i];
            }
        }

        return newCaption;
    }
};