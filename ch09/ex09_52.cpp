#include<stack>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	auto& expr = "This is (fkashfuasd(0fsadfodsj))) fah (sifdlja) over";
	auto repl ='#';
	auto seen = 0;

	stack<char> stk;
	
	for ( auto c : expr) {
		stk.push(c);
		if (c == '(') ++seen;
		if(seen && c == ')') {
			while (stk.top() != ')') stk.pop();
			stk.pop();
			stk.push(repl);
			--seen;
		}
	}

	string output;
	for (; !stk.empty(); stk.pop())
		output.insert(output.begin(), stk.top());
	cout << output << endl;
	return 0;
}
