void copyStack(int a[], int b[]) {

int p = a.pop();

if (a.length == 0) {

b.push(p);

}

copyStack(a,b);

b.push(p);

}
