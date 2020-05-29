// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<char> tasks;
//     int n;
//     cin >> n;
//     int *SS = (int *)calloc(10, sizeof(int));
//     //cin.ignore();
//     for (int i = 0; i < n; i++)
//     {
//         char temp;
//         cin >> temp;
//         tasks.push_back(temp);
//     }

//     for (int i = 0; i < n; i++) //https://leetcode.com/problems/task-scheduler/solution/
//     {
//         int c = int(tasks[i]);
//         SS[c - 65]++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << SS[i] << endl;
//     }
//     return 0;
// }
// A : 65 to Z : 90

// #include <iostream>
// using namespace std;

// int main()
// {
//     char c;
//     cout << "Enter a character: ";
//     cin >> c;
//     cout << "ASCII Value of " << c << " is " << int(c);
//     return 0;
// } //A:65 Z:90
