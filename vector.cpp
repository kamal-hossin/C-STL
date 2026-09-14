#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

// 1. push_back()
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);

// 2. size()
cout << "Size: " << v.size() << endl;

// 3. capacity()
cout << "Capacity: " << v.capacity() << endl;

// 4. empty()
cout << "Empty: " << v.empty() << endl;

// 5. Access using index
cout << "v[0]: " << v[0] << endl;

// 6. at()
cout << "at(1): " << v.at(1) << endl;

// 7. front()
cout << "Front: " << v.front() << endl;

// 8. back()
cout << "Back: " << v.back() << endl;

// 9. Print vector
cout << "Vector: ";
for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
cout << endl;

// 10. pop_back()
v.pop_back();

cout << "After pop_back: ";
for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
cout << endl;

// 11. insert()
v.insert(v.begin() + 1, 100);

cout << "After insert: ";
for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
cout << endl;

// 12. Erase one element
v.erase(v.begin() + 1);

cout << "After erase: ";
for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
cout << endl;

// 13. Erase a range
v.erase(v.begin(), v.begin() + 2);

cout << "After range erase: ";
for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
cout << endl;

// 14. Clear
v.clear();

cout << "After clear, size: " << v.size() << endl;

// 15. Assign
v.assign(5, 50);

cout << "After assign: ";
for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
cout << endl;

// 16. Resize
v.resize(8);

cout << "After resize: ";
for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
cout << endl;

// 17. Resize with value
v.resize(10, 100);

cout << "After resize with value: ";
for (int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
cout << endl;

// 18. Swap
vector<int> a = {1, 2, 3};
vector<int> b = {10, 20, 30};

a.swap(b);

cout << "After swap, a: ";
for (int i = 0; i < a.size(); i++)
{
    cout << a[i] << " ";
}
cout << endl;

// 19. begin()
cout << "First element using begin(): " << *a.begin() << endl;

// 20. end()
cout << "Last element using end(): " << *(a.end() - 1) << endl;

// 21. rbegin()
cout << "First element using rbegin(): " << *a.rbegin() << endl;

// 22. rend()
cout << "Last element using rend(): " << *(a.rend() - 1) << endl;

// 23. sort()
vector<int> x = {50, 10, 40, 20, 30};

sort(x.begin(), x.end());

cout << "Sorted: ";
for (int i = 0; i < x.size(); i++)
{
    cout << x[i] << " ";
}
cout << endl;

// 24. Reverse
reverse(x.begin(), x.end());

cout << "Reversed: ";
for (int i = 0; i < x.size(); i++)
{
    cout << x[i] << " ";
}
cout << endl;

// 25. find()
auto it = find(x.begin(), x.end(), 30);

if (it != x.end())
{
    cout << "30 found" << endl;
}
else
{
    cout << "30 not found" << endl;
}

// 26. lower_bound()
sort(x.begin(), x.end());

auto lb = lower_bound(x.begin(), x.end(), 30);

cout << "Lower bound index: " << lb - x.begin() << endl;

// 27. upper_bound()
auto ub = upper_bound(x.begin(), x.end(), 30);

cout << "Upper bound index: " << ub - x.begin() << endl;

// 28. count()
int cnt = count(x.begin(), x.end(), 30);

cout << "Count of 30: " << cnt << endl;

// 29. min_element()
cout << "Minimum: " << *min_element(x.begin(), x.end()) << endl;

// 30. max_element()
cout << "Maximum: " << *max_element(x.begin(), x.end()) << endl;

// 31. Sum
int sum = accumulate(x.begin(), x.end(), 0);

cout << "Sum: " << sum << endl;

// 32. 2D Vector
vector<vector<int>> matrix(3, vector<int>(3));

matrix[0][0] = 10;
matrix[1][1] = 20;
matrix[2][2] = 30;

cout << "2D Vector: " << endl;

for (int i = 0; i < matrix.size(); i++)
{
    for (int j = 0; j < matrix[i].size(); j++)
    {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}

return 0;
}