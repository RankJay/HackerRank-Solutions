#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int a[3], b[3];
  int pointa = 0, pointb = 0;
  for (int i = 0; i < 3; i++) {
    cin >> a[i];
  
  for (int i = 0; i < 3; i++) {
    cin >> b[i];
  
  for (int i = 0; i < 3; i++) {
    if (a[i] > b[i]) {
      pointa++;
    
  
  for (int i = 0; i < 3; i++) {
    if (b[i] > a[i]) {
      pointb++;
    
  
  cout << pointa << " " << pointb;
  return 0;
}
