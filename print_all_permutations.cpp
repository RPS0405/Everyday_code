void allPermutations(string str, string ans) {
    if(str.size() == 0) {
        cout << ans << endl;
        return;
    }

    for(int i=0; i<str.size(); i++) {
        string newStr = str.substr(0, i) + str.substr(i+1, i+str.size());
        allPermutations(newStr, ans+str[i]);
    }
}