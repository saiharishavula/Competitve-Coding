#        include <iostream>

using namespace std;

int main() {

char c = 0;
while ( c != '\n' ) {
cin.get(c);
cout << "-";
}
cout << endl;
return 0;
}
