#include <iostream>
#include <vector>
using namespace std;
class Variety{
private:
    string name;
    int varietyID;
    int price;
    string companyName;
    static vector<int>StoredID;
    Variety(string name,int varietyID,int price,string companyName){
        this->name = name;
        this->price = price;
        this->companyName = companyName;
        this->varietyID = varietyID;
        StoredID.push_back(varietyID);
    }
public:
    Variety(){

    }
    void displayVarietyInfo(){
        cout<<"Name of the variety :- "<<name<<endl;
        cout<<"Price of the variety in Rupees:- "<<price<<endl;
        cout<<"VarietyId of the variety :- "<<varietyID<<endl;
        cout<<"Manufactured by "<<companyName<<" company\n";
        cout<<"Total number of this "<<name<<"variety available = "<<StoredID.size()<<endl;
    }
    Variety addVariety(){
        int ID;
        cout<<"Please enter your variety ID :- ";
        for(int i=0;i<StoredID.size();i++){
            if(StoredID[i]==ID){
                cout<<"Vaaiety cannot be added\n";
                cout<<"Variety having varietyID "<<varietyID<<" already exists\n";
                return;
            }
        }
        string Name;
        cout<<"Please enter the name of the variety :- ";
        cin>>Name;
        string company;
        cout<<"Please enter the company name :- ";
        cin>>company;
        int Price;
        cout<<"Please enter the price in Rupees :- ";
        cin>>Price;
        return Variety(Name,ID,Price,company);
    }
};
class Brand:Variety{
private:
    string name;
    float Rating;
    int BrandID;
    vector<Variety>varieties;
    static vector<int>StoredID;
    Brand(string name,float Rating,int BrandID,Variety V){
        this->BrandID = BrandID;
        this->name = name;
        this->Rating = Rating;
        varieties.push_back(V);
    }
public:
    Brand(){

    }
    Brand addBrand(){
        int ID;
        cout<<"Please enter your item ID :- ";
        for(int i=0;i<StoredID.size();i++){
            if(StoredID[i]==ID){
                cout<<"Brand cannot be added\n";
                cout<<"Brand having BrandID "<<ID<<" already exists\n";
                return;
            }
        }
        string Name;
        cout<<"Please enter the name of the Brand :- ";
        cin>>Name;
        float rating;
        cout<<"Please enter the rating of Brand out of 5 :- ";
        cin>>rating;
        Variety V;
        V = V.addVariety();
        return Brand(Name,rating,ID,V);
    }
    void displayBrandInfo(){
        cout<<"Name of the Brand :- "<<name<<endl;
        cout<<"BrandId of the Brand :- "<<BrandID<<endl;
        cout<<"Brand Rating :- "<<Rating<<"/5\n";
        cout<<"Each Variety of the "<<name<<" is given below:- \n";
        for(int i=0;i<varieties.size();i++){
            cout<<i+1<<"th variety detail :- \n";
            varieties[i].displayVarietyInfo();
        }
    }
};
class Item:public Brand{
private:
    string name;
    int itemID;
    static vector<int>StoredID;
    vector<Brand>Brands;
    Item(string name,int itemID,Brand B){
        this->name = name;
        this->itemID = itemID;
        Brands.push_back(B);
    }
public:
    Item(){

    }
    Item addItem(){
        int ID;
        cout<<"Please enter your item ID :- ";
        for(int i=0;i<StoredID.size();i++){
            if(StoredID[i]==ID){
                cout<<"Item cannot be added\n";
                cout<<"Item having itemID "<<ID<<" already exists\n";
                return;
            }
        }
        string Name;
        cout<<"Please enter the name of the item :- ";
        cin>>Name;
        Brand B;
        B = B.addBrand();
        return Item(Name,ID,B);
    }
    void displayItemInfo(){
        cout<<"Name of the Item :- "<<name<<endl;
        cout<<"ItemId of the Item :- "<<itemID<<endl;
        cout<<"Total number of brands avilable for this item :- "<<StoredID.size()<<endl;
        cout<<"Each Brand of the "<<name<<" is given below:- \n";
        for(int i=0;i<Brands.size();i++){
            cout<<i+1<<"th brand detail :- \n";
            Brands[i].displayBrandInfo();
        }
    }
    
};
class Product:Item{
private:
    string name;
    int productID;
    vector<Item>items;
    static vector<int>StoredID;
    Product(string name,int productID,Item I){
        this->name = name;
        this->productID = productID;
        items.push_back(I);
    }
public:
    Product(){

    }
    Product addProduct(){
        int ID;
        cout<<"Please enter your product ID :- ";
        for(int i=0;i<StoredID.size();i++){
            if(StoredID[i]==ID){
                cout<<"Product cannot be added\n";
                cout<<"Product having productID "<<ID<<" already exists\n";
                return;
            }
        }
        string Name;
        cout<<"Please enter the name of the product :- ";
        cin>>Name;
        Item I;
        I = I.addItem();
        return Product(Name,ID,I);
    }
    void displayProductInfo(){
        cout<<"Name of the Product :- "<<name<<endl;
        cout<<"ProductId of the product :- "<<productID<<endl;
        cout<<"Total number of items avilable for this product :- "<<StoredID.size();
        cout<<"Each item of the "<<name<<" is given below:- \n";
        for(int i=0;i<items.size();i++){
            cout<<i+1<<"th item detail :- \n";
            items[i].displayItemInfo();
        }
    }
};
class ShoppingManagementSystem{
private:
    const string name = "EasyBuy";
    float rating = 4.7;
    static vector<Product>Prod;
public:
    void displayProducts(){
        cout<<"Total number of products avilable in :- "<<name<<Prod.size();
        cout<<"Each product of the "<<name<<" is given below:- \n";
        for(int i=0;i<Prod.size();i++){
            cout<<i+1<<"th product detail :- \n";
            Prod[i].displayProductInfo();
        }
    }
};
