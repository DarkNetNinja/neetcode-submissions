class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string str:strs)
        {
            
            encoded += to_string(str.length());
            encoded += "#";
            encoded += str;
            
        }
        return encoded;

    }

    vector<string> decode(string s) {
        vector<string> answer;
        for(int i{0};i < static_cast<int>(s.length());)
        {
            int delimiter = s.find('#',i);

            string lengthString = s.substr(i,delimiter-i);
            int num = stoi(lengthString);
            string word = s.substr(delimiter + 1,num);
            answer.push_back(word);

            i = delimiter + 1 + num;

        }
        return answer;
    }
};
