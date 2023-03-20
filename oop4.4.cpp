#include <iostream>
using namespace std;
class Amount;
class Book{
    char name[51];
    char author[51];
    public:
    void read(Book* b);
    friend void display(Book* b,Amount* a,int u,int l);
};
class Amount{
    int price;
    public:
    void read(Amount* a);
    friend void display(Book* b,Amount* a,int u,int l);
};

void Book::read(Book* b){
    cout<<"Enter the name of the book: ";
    cin>>b->name;
    cout<<"Enter the Author's name: ";
    cin>>b->author;
}
void Amount::read(Amount* b){
    cout<<"Enter the price of the book: ";
    cin>>b->price;
}

 void display(Book* b,Amount* a,int l,int u){
     if((a->price >= l)&&(a->price <= u)){
         cout<<"Book Name: "<<b->name<<endl;
         cout<<"Author Name: "<<b[i]->author<<endl;
         cout<<"Price Name: "<<a[i]->price<<endl;
     }
    
     if((a->price >l)&&(a->price<r)){
         cout<<"Book Name: "<<b->name<<endl;
         cout<<"Author Name: "<<b->author<<endl;
         cout<<"Price Name: "<<a->price<<endl;
     }
 }

void display(Book* b,Amount* a,int u, int l){
    if((a->price >= l) && (a->price <= u)){
        cout<<"Book Name: "<<b->name<<endl;
        cout<<"Author Name: "<<b->author<<endl;
        cout<<"Price Name: "<<a->price<<endl;
    }
}

int main(){
    Book *o_book;
    Amount *a;
    int size;
    cout<<"Enter number of books: ";
    cin>>size;
    o_book = new Book[size];
    a = new Amount[size];
    cout<<"Enter the input for all books: "<<endl;
    for(int i = 0;i<size;i++){
        cout<<i+1<<": "<<endl;
        o_book->read(&o_book[i]);
        a->read(&a[i]);
    }
    cout<<endl<<"Details of books: "<<endl;
    int lower,upper;
    cout<<"Enter the range: ";
    cin>>lower>>upper;
    for(int i = 0;i<size;i++){
        display(&o_book[i],&a[i],upper,lower);
    }

    delete [] o_book;
    delete [] a;
    return 0;
}
