int solution(vector<int> a, vector<int> b, int k) {
	int count = 0;
	int j = b.size() - 1;
	vector<int> test;
	for(int i = 0; i < a.size(); i++){
		string s1 = to_string(a[i]);
		string s2 = to_string(b[j]);
		string s = s1 + s2;
		int c = stoi(s);
		test.push_back(c);
		if(test[i] < k){
			count++;
		}
		j--;
	}
	return count;
}