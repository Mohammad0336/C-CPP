vector<int> solution(vector<int> numbers) {
	vector<int> test;
	for(int i = 0; i < numbers.size() - 2; i++){
		int a = numbers[i];
		int b = numbers[i+1];	
		int c = numbers[i+2];
		if(a < b && b > c){
			test.push_back(1);
		}
		else if(a > b && b < c){
			test.push_back(1);
		}
		else{
			test.push_back(0);
		}
	}
	return test;
}