```c++
stack<char> stk;
string str;
cin >> str;
for (int i = 0; i < str.length(); i++)
{
	if (stk.top() == str[i])
		stk.pop();
	else
		stk.push(str[i]);
}
int count = 0;
if (stk.empty())
	count++;
->�̰� N�� �ݺ�
cout << count;
```
