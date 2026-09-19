class Solution {
public:

    int countValidWords(string sentence) {

        int wordCount = 0;
        string word = "";

        for(int i = 0; i <= sentence.length(); i++)
        {
            // If we reached a space OR the end of sentence
            if(i == sentence.length() || sentence[i] == ' ')
            {
                // Validate only if we actually have a word
                if(word != "")
                {
                    bool valid = true;
                    int hyphenCount = 0;

                    for(int j = 0; j < word.length(); j++)
                    {
                        // Digit is never allowed
                        if(isdigit(word[j]))
                        {
                            valid = false;
                            break;
                        }

                        // Hyphen
                        if(word[j] == '-')
                        {
                            hyphenCount++;

                            // More than one hyphen
                            if(hyphenCount > 1)
                            {
                                valid = false;
                                break;
                            }

                            // Hyphen cannot be first or last
                            if(j == 0 || j == word.length()-1)
                            {
                                valid = false;
                                break;
                            }

                            // Both sides of hyphen must be lowercase letters
                            if(!isalpha(word[j-1]) || !isalpha(word[j+1]))
                            {
                                valid = false;
                                break;
                            }
                        }

                        // Punctuation
                        if(word[j] == '!' || word[j] == ',' || word[j] == '.')
                        {
                            // Punctuation must be the last character
                            if(j != word.length()-1)
                            {
                                valid = false;
                                break;
                            }
                        }
                    }

                    if(valid)
                    {
                        wordCount++;
                    }

                    word = "";
                }
            }
            else
            {
                word += sentence[i];
            }
        }

        return wordCount;
    }
};