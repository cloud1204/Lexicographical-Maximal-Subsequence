#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
 
int MINN = 1;
int MAXN = 1000000;
int MINM = 1;
int MAXM = 1000000;
int SUMM = 1000000;
int CNT = 26;
int p = 50000;
int32_t main(int32_t argc, char* argv[]) {
    registerGen(argc, argv, 1);
    
    if (has_opt("minn")) MINN = opt<int>("minn");
    if (has_opt("maxn")) MAXN = opt<int>("maxn");
    if (has_opt("minm")) MINM = opt<int>("minm");
    if (has_opt("maxm")) MAXM = opt<int>("maxm");
    if (has_opt("summ")) SUMM = opt<int>("summ");
    if (has_opt("cnt")) CNT = opt<int>("cnt");
    
    vector<string> s;
    
    string type = opt<string>("type");
    /// types ///
    int summ = 0;
    if (type == "random") {
    	while (1){
    	    int m = rnd.next(MINM, MAXM);
    	    if (summ + m > SUMM) break;
    	    summ += m;
    	    string tmp = "";
    	    for (int i = 0; i < m; i++){
    	        tmp += char('a' + rnd.next(0, CNT - 1));
    	    }
    	    s.push_back(tmp);
    	    if (rnd.next(0, p) == 0 and CNT > 1) CNT--; 
    	}
    }
    if (type == "tle") {
    	int n = SUMM / 3;
    	for (int i = 0; i < n; i++) s.push_back("cba");
    }
    int n = s.size();
    cout << n << '\n';
    for (int i = 0; i < n; i++){
        cout << s[i] << (i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
