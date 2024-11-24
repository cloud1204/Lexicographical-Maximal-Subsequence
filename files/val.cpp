#include "testlib.h"

#include <bits/stdc++.h>
using namespace std;

int MINN = 1;
int MAXN = 1e6;
int MAXM = 1e6;
int SUMM = 1e6;

int32_t main(int32_t argc, char* argv[]) {
    registerValidation(argc, argv);
    
    /// start input ///
    if (validator.group() == "s1") {
        MAXM = 1;
    }
    if (validator.group() == "s2") {
        SUMM = 5000;
    }
    int n = inf.readInt(MINN, MAXN, "n");
    inf.readEoln();
    int summ = 0;
    for (int i = 0; i < n; i++){
        string s = inf.readWord();
        summ += s.size();
        for (char j : s) ensure('a' <= j and j <= 'z');
    	if (i < n - 1) inf.readSpace();
    	
    }
    inf.readEoln();
    inf.readEof();
    ensure(summ <= SUMM);
    return 0;
}