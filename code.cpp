#include<iostream>
#include<fstream>

using namespace std;

class shopping{
    private:
    int pcode;
    float price;
    float dis;
    string pname;

    public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void update();
    void del();
    void list();
    void receipt();

};

void shopping :: menu(){
    m:
    int choice;
    string email;
    string password;
    cout<<"\t\t\t\t___________________________|\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|     Super Market Menu    |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|__________________________|\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t| 1.) Administrator        |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t| 2.) Buyer                |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t| 3.) Exit                 |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|__________________________|\t\t\t\t"<<endl;

    cout<<"Choose from the given option"<<endl;

    cin>>choice;

    switch(choice){
        case 1:
        cout<<"Enter the email"<<endl;
        cin>>email;
        cout<<"Enter the password"<<endl;
        cin>>password;

        if(email=="j" && password=="8"){
            administrator();
        }
        else{
            cout<<"Invalid Credentials"<<endl;
        }

        break;

        case 2:
        buyer();
        break;

        case 3:
        exit(0);
        break;

        default:
        cout<<"Kindly select from the given option"<<endl;

    }
    goto m;
}

void shopping :: administrator(){
    m:
    int choice;
    cout<<"\t\t\t\t __________________________\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|     Adminitrator         |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|__________________________|\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t| 1.) Add the product      |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t| 2.) Modify the product   |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t| 3.) Delete the product   |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t| 4.) Back to the Main menu|\t\t\t\t"<<endl;         
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|__________________________|\t\t\t\t"<<endl;

    cout<<"Select one option"<<endl;
    cin>>choice;

    switch (choice){
        case 1:
        add();
        break;

        case 2:
        update();
        break;

        case 3:
        del();
        break;

        case 4:
        menu();
        break;

        default:
        cout<<"Kindly select from the given option"<<endl;
    }

    goto m;
}

void shopping :: buyer(){
    int choice;
    cout<<"\t\t\t\t___________________________\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|           Buyer          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|__________________________|\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t| 1.) Buy the product      |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t| 2.) Back to main menu    |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|                          |\t\t\t\t"<<endl;
    cout<<"\t\t\t\t|__________________________|\t\t\t\t"<<endl;

    cout<<"Select one option"<<endl;
    cin >> choice;

    switch (choice){
        case 1:
        receipt();
        break;

        case 2:
        menu();
        break;

        default:
        cout<<"Kindly select from the given option"<<endl;
    }
}

void shopping :: add(){
    m:
    fstream data;
    int c;
    int token=0;
    float p;
    float d;
    string n;

    cout<<"Add the product"<<endl;
    cout<<"Product code of the code"<<endl;
    cin>>pcode;
    cout<<"Name of the product"<<endl;
    cin>>pname;
    cout<<"Price on the product"<<endl;
    cin>>price;
    cout<<"Discount on the product"<<endl;
    cin>>dis;

    data.open("database.txt",ios::in);

    if(!data){
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
        data.close();
    }
    else{
        data>>c>>n>>p>>d;
        while(!data.eof()){
            if(c==pcode){
                token++;
            }
            else{
                data>>c>>n>>p>>d;
            }
        }
        data.close();
    }
    if(token==1){
        goto m;
    }
    else{
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
        data.close();
    }

    cout<<"Record Inserted"<<endl;
}

void shopping :: update(){
    fstream data,data1;
    int p,d,c;
    string n;
    int pkey;
    int token =0;

    cout<<"Modify the data"<<endl;
    cout<<"Enter the code of the product"<<endl;
    cin>>pkey;

    data.open("database.txt",ios::in);
    if(!data){
        cout<<"Data doesn't exist"<<endl;
    }
    else{
        data1.open("database1.txt",ios::app|ios::out);

        data>>pcode>>pname>>price>>dis;
        while(!data.eof()){
            if(pkey==pcode){
                cout<<"Product new code"<<endl;
                cin>>c;
                cout<<"Name of the Product"<<endl;
                cin>>n;
                cout<<"Price"<<endl;
                cin>>p;
                cout<<"Discount"<<endl;
                cin>>d;
                data<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<endl;
                cout<<"Record edited"<<endl;
                token++;
            }
            else{
                data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
            }
            data>>pcode>>pname>>price>>dis;
        }
        data.close();
        data1.close();
    }
    remove("database.txt");
    rename("database1.txt","database.txt");

    if(token==0){
        cout<<"Record Not Found"<<endl;
    }
}

void shopping :: del(){
    fstream data,data1;
    int pkey;
    int token=0;

    cout<<"Delete the product"<<endl;
    cout<<"Product code"<<endl;
    cin>>pkey;

    data.open("database.txt",ios::in);
    if(!data){
        cout<<"File doesn't exist"<<endl;
    }
    else{
        data1.open("database.txt",ios::app|ios::out);
        data>>pcode>>pname>>price>>dis;
        while(!data.eof()){
            if(pkey==pcode){
                cout<<"Product deleted successfully"<<endl;
                token++;
            }
            else{
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
            }
            data>>pcode>>pname>>price>>dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt","database.txt");

        if(token==0){
            cout<<"Record not found"<<endl;
        }
    }
}

void shopping ::list(){
    fstream data;
    data.open("database.txt",ios::in);
    cout<<endl;
    cout<<"_______________________________________________________"<<endl;
    cout<<"\t\t\tProduct No. \t\t Name \t\t Price"<<endl;
    cout<<"_______________________________________________________"<<endl;
    data>>pcode>>pname>>price>>dis;
    while(!data.eof()){
        cout<<pcode<<" "<<pname<<" "<<price<<" "<<endl;
        data>>pcode>>pname>>price>>dis;
    }
    data.close();

}

void shopping :: receipt(){
    m:
    fstream data;
    int arrc[100];      //array of code
    int arrq[100];      // array of quantity
    char choice;
    int count=0;
    float dis=0;
    float amount =0;
    float total=0;

    cout<<"\n\t\t\t Receipt"<<endl;
    data.open("database.txt",ios::in);
    if(!data){
        cout<<"Empty Database"<<endl;
    }
    else{
        data.close();

        list();
        cout<<"\n_______________________________________ "<<endl;
        cout<<" |                                       |"<<endl;
        cout<<" |         Place the order               |"<<endl;
        cout<<" |_______________________________________|"<<endl;
        do{
            cout<<"Enter the product code"<<endl;
            cin>>arrc[count];
            cout<<"Enter the quantity"<<endl;
            cin>>arrq[count];
            for(int i=0;i<count;i++){
                if(arrc[count]==arrc[i]){
                    cout<<"Duplicate product code. please try Again "<<endl;
                    goto m;
                }
            }
            count++;
            cout<<"Do you want to choose another product? if yes then press y else no"<<endl;
            cin>>choice;
        }while(choice=='y');
        
        cout<<"\t\t\t\t__________________________Receipt_____________________________"<<endl;
        cout<<"Product Name \t Product Quantity \t Price \t Amount \t Amount with discount"<<endl;

        for(int i=0;i<count;i++){
            data.open("database.txt",ios::in);
            data>>pcode>>pname>>price>>dis;
            while(!data.eof()){
                if(pcode==arrq[i]){
                    amount=price*arrq[i];
                    dis=amount - (amount*dis/100);
                    total=total+dis;
                    cout<<"\n"<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t\t"<<amount<<"\t\t"<<dis<<endl;
                }
            data>>pcode>>pname>>price>>dis;    
            }
        }
        data.close();
    }
    cout<<"\n\n______________________________________________"<<endl;
    cout<<"Total Amount : "<<total;
}

int main(){
    shopping s;
    s.menu();
}
