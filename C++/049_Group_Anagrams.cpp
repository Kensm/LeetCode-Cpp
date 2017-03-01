
class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        vector<string> res;
		map<string, vector<string> > m;
		
		for(string str : strs)
		{
			string s = str;
			std::sort(s.begin(), s.end());
			if(m.find(s) != m.end())
			{
				m[s].push_back(str);
			}
			else
			{
				vector<string> v(1, str);
				m[s] = v;
			}
		}
			
		auto iter = m.begin();
		while(iter != m.end())
		{
			vector<string> tmp = iter->second;
			if(tmp.size() > 1)
			{
				res.insert(res.end(), tmp.begin(), tmp.end());
			}
			++iter;
		}

		return res;
    }
};

