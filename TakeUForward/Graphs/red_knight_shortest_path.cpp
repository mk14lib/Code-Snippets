#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'printShortestPath' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER i_start
 *  3. INTEGER j_start
 *  4. INTEGER i_end
 *  5. INTEGER j_end
 *  https://www.hackerrank.com/challenges/red-knights-shortest-path/problem
 */

void printShortestPath(int n, int i_start, int j_start, int i_end, int j_end) {
    // valid moves of red knight
    int dx[] = {-1, 1, 2, 1, -1, -2};
    int dy[] = {-2, -2, 0, 2, 2, 0};
    
    int from[210][210];
    memset(from, -1, sizeof(from));

    queue<int> q;
    stack<int> moves;
    
    char moveNames[][5] = {"UL", "UR", "R", "LR", "LL", "L"};
    q.push(i_start*1000 + j_start);
    from[i_start][j_start] = 10;
    
    while(!q.empty()){
        int now = q.front();
        q.pop();
        j_start = now % 1000;
        i_start = now / 1000;
        if(j_start == j_end and i_start == i_end) break;
        
        for(int i=0; i<6; i++){
            int nx = j_start + dx[i];
            int ny = i_start + dy[i];
            
            if(nx < 0 or ny < 0 or nx >= n or ny >= n) 
                continue;
            
            if(from[ny][nx] == -1){
                from[ny][nx] = i;
                q.push(ny*1000 + nx);
            }
        }
    }
    
    if(j_start == j_end and i_start == i_end){
        while(from[i_start][j_start] != 10){
            moves.push(from[i_start][j_start]);
            int ny = i_start - dy[from[i_start][j_start]];
            int nx = j_start - dx[from[i_start][j_start]];
            i_start = ny;
            j_start = nx;
        }
        
        cout << (int)moves.size() << endl;
        while(!moves.empty()){
            int mo = moves.top();
            moves.pop();
            cout << moveNames[mo];
            if(moves.empty()) cout << "\n";
            else cout << " ";
        }
    }
    else{
        cout << "Impossible\n";
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int i_start = stoi(first_multiple_input[0]);

    int j_start = stoi(first_multiple_input[1]);

    int i_end = stoi(first_multiple_input[2]);

    int j_end = stoi(first_multiple_input[3]);

    printShortestPath(n, i_start, j_start, i_end, j_end);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
