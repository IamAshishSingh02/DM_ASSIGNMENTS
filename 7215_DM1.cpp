#include<bits/stdc++.h>
using namespace std;

void printSet(set<int> s) {
    for (int x : s)
        cout << x << " ";
    cout << endl;
}

set<int> unionOfSets(set<int> s1, set<int> s2) {
    set<int> unionSet = s1;
    for (int x : s2)
        unionSet.insert(x);
    return unionSet;
}

set<int> intersectionOfSets(set<int> s1, set<int> s2) {
    set<int> intersectionSet;
    for (int x : s1)
        if (s2.find(x)!= s2.end())
            intersectionSet.insert(x);
    return intersectionSet;
}

set<int> differenceOfSets(set<int> s1, set<int> s2) {
    set<int> differenceSet;
    for (int x : s1)
        if (s2.find(x) == s2.end())
            differenceSet.insert(x);
    return differenceSet;
}

int main() {
    int n1, n2;
    cout << "Enter the number of elements in set A: ";
    cin >> n1;
    set<int> s1;
    cout << "Enter elements of set A: ";
    for (int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        s1.insert(x);
    }

    cout << "Enter the number of elements in set B: ";
    cin >> n2;
    set<int> s2;
    cout << "Enter elements of set B: ";
    for (int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        s2.insert(x);
    }

    cout << "Set A: ";
    printSet(s1);
    cout << "Set B: ";
    printSet(s2);

    set<int> unionSet = unionOfSets(s1, s2);
    cout << "Union of A & B: ";
    printSet(unionSet);

    set<int> intersectionSet = intersectionOfSets(s1, s2);
    cout << "Intersection of A & B: ";
    printSet(intersectionSet);

    set<int> differenceSet1 = differenceOfSets(s1, s2);
    cout << "Set difference A-B: ";
    printSet(differenceSet1);

    set<int> differenceSet2 = differenceOfSets(s2, s1);
    cout << "Set difference B-A: ";
    printSet(differenceSet2);

    return 0;
}