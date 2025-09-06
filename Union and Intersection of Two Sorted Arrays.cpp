#include <iostream>
using namespace std;

void printUnion(int a[], int b[], int n, int m) {
    int i = 0, j = 0;
    cout << "Union: ";
    while(i < n && j < m) {
        if(a[i] < b[j]) cout << a[i++] << " ";
        else if(b[j] < a[i]) cout << b[j++] << " ";
        else {
            cout << a[i] << " ";
            i++; j++;
        }
    }
    while(i < n) cout << a[i++] << " ";
    while(j < m) cout << b[j++] << " ";
    cout << endl;
}

void printIntersection(int a[], int b[], int n, int m) {
    int i = 0, j = 0;
    cout << "Intersection: ";
    while(i < n && j < m) {
        if(a[i] < b[j]) i++;
        else if(b[j] < a[i]) j++;
        else {
            cout << a[i] << " ";
            i++; j++;
        }
    }
    cout << endl;
}

int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    int a[n];
    cout << "Enter elements of first (sorted) array: ";
    for(int i = 0; i < n; i++) cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> m;
    int b[m];
    cout << "Enter elements of second (sorted) array: ";
    for(int i = 0; i < m; i++) cin >> b[i];

    printUnion(a, b, n, m);
    printIntersection(a, b, n, m);

    return 0;
}

