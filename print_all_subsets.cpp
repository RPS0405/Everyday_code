void allSubsets(string str, int i, string subset) {
    if(i == str.size()) {
        cout << subset << endl;
        return;
    }

    char ch = str[i];
    allSubsets(str, i+1, subset);
    allSubsets(str, i+1, subset+ch);
}