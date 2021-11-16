package javaapplication4;

class A {

    int i, j;

    void showij() {
        System.out.println(i + " " + j);
    }
}

class B extends A {

    int k;

    void showk() {
        System.out.println(k);
    }

    void sum() {
        System.out.println(i + j + k);
    }
}
public Class SimpleInheritance {
public static void main(String args[]){
A superOb = newA();
B subOb = new B();
superOb.i = 10;
superOb.j = 20;
superOb.showij();
subOb.i = 7;
subOb.j = 8;
subOb.k = 9;
subOb.showij();
subOb.showk();
subOb.sum();
}
}
