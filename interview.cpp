Class Solution{
	Char ans(int n , int x){ 
	vector<char> st(27);  

	Int q=1;
		for(auto i=65;i<91;i++){  O(1)
		char c=i;
		st[q]=c;	
		q++;
		}
		Int rem=0;
		if(x%n==0) rem=x/n; O(1)
	else rem=(x/n)+1;
            return st[rem]; 
}

};

