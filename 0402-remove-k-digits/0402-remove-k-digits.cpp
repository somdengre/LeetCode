class Solution {
 public:
  string removeKdigits(string num, int k) {
    if (num.length() == k)
      return "0";

    string ans;
    vector<char> s;

    for (int i = 0; i < num.length(); ++i) {
      while (k > 0 && !s.empty() && s.back() > num[i]) {
        s.pop_back();
        --k;
      }
      s.push_back(num[i]);
    }

    while (k-- > 0)
      s.pop_back();

    for (const char c : s) {
      if (c == '0' && ans.empty())
        continue;
      ans += c;
    }

    return ans.empty() ? "0" : ans;
  }
};