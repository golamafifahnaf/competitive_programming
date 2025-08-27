#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int start = a[0];
    int ocr = 1;
    int count = 0;

    for(int i=1; i<n; i++){
      if(start == a[i]) ocr++;
      else{
        if(ocr > start) count += ocr - start;
        else if(ocr < start) count += ocr;

        ocr = 1;
        start = a[i];
      }
    }

    if(ocr > start) count += ocr - start;
    else if(ocr < start) count += ocr;

    cout << count << endl;

    return 0;
}
