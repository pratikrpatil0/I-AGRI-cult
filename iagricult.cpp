

#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // For std::setw
using namespace std;


//----------------------------------------

//Farmers classes

class Farmer {
private:
    struct Profile {
        std::string name;
        int age;
        // Other profile details can be added here
    };

    std::string ID;
    std::string password;
    std::vector<std::string> paymentHistory;
    std::vector<std::string> addedCrops;
    std::vector<std::string> addedPrice;
    std::vector<std::string> addedStock;
    
    Profile farmerProfile;
    


public:
    // Setter methods
    void setID(const std::string& id) {
        ID = id;
    }

    void setPassword(const std::string& pass) {
        password = pass;
    }

    void PaymentID(const std::string& payment) {
        paymentHistory.push_back(payment);
    }

    void crop(const std::string& crop) {
        addedCrops.push_back(crop);
    }

    void price(const std::string& price) {
        addedPrice.push_back(price);
    }

     void stock(const std::string& stock) {
        addedStock.push_back(stock);
    }

    void setProfile(const std::string& name, int age) {
        farmerProfile.name = name;
        farmerProfile.age = age;
    }
        

    // Getter methods
    std::string getID() const {
        return ID;
    }

    std::string getPassword() const {
        return password;
    }

    std::vector<std::string> getPaymentHistory() const {
        return paymentHistory;
    }

    std::vector<std::string> getAddedCrops() const {
        return addedCrops;
    }

     std::vector<std::string> getAddedStock() const {
        return addedStock;
    }

    std::vector<std::string> getAddedPrice() const {
        return addedPrice;
    }


    Profile getProfile() const {
        return farmerProfile;
    }


    void accessFarmerDetails(const std::string& username, const vector<Farmer>& farmersList) const {
        bool found = false;

        for (const Farmer& farmer : farmersList) {
            if (username == farmer.getID()) {
                found = true;
                cout << "Farmer ID: " << farmer.getID() << endl;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                cout << "Password: " << farmer.getPassword() << endl;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;

                // Print payment history
                cout << "Payment History:" << endl;
                for (const string& payment : farmer.getPaymentHistory()) {
                    cout << payment << endl;
                }
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;

                // Print added crops
                cout << "Your Crops:" << endl;
                for (const string& crop : farmer.getAddedCrops()) {
                    cout << crop << endl;
                }
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;

                cout << "Crop Price:" << endl;
                for (const string& price : farmer.getAddedPrice()) {
                    cout << price << endl;
                }
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;

                 cout << "Crop Stock:" << endl;
                for (const string& stock : farmer.getAddedStock()) {
                    cout << stock << endl;
                }
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;


                // Print farmer profile
                cout << "Profile:" << endl;
                cout << "Name: " << farmer.getProfile().name << endl;
                cout << "Age: " << farmer.getProfile().age << endl;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;

                break;
            }
        }

        if (!found) {
            cout << "Farmer with username " << username << " not found." << endl;
        }
    }
};

//FARMER CLASSES ENDS HERE

//--------------------------------------

//----------------------------------------

//CUSTOMER CLASSES STARTS HERE
class Customer {
private:
    struct Profile {
        std::string name;
        int age;
        // Other profile details can be added here
    };

    std::string ID;
    std::string password;
    Profile customerProfile;
    std::vector<std::string> paymentHistory;
    


public:
    // Setter methods
    void setID(const std::string& id) {
        ID = id;
    }

    void setPassword(const std::string& pass) {
        password = pass;
    }

    void PaymentID(const std::string& payment) {
        paymentHistory.push_back(payment);
    }


    void setProfile(const std::string& name, int age) {
        customerProfile.name = name;
        customerProfile.age = age;
    }
        

    // Getter methods
    std::string getID() const {
        return ID;
    }

    std::string getPassword() const {
        return password;
    }

    std::vector<std::string> getPaymentHistory() const {
        return paymentHistory;
    }

    Profile getProfile() const {
        return customerProfile;
    }


   void accessCustomerDetails(const std::string& username, const vector<Customer>& customersList) const {
        bool found = false;

        for (const Customer& customer : customersList) {
            if (username == customer.getID()) {
                found = true;
                cout << "Customer ID: " << customer.getID() << endl;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
                cout << "Password: " << customer.getPassword() << endl;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;

                // Print payment history
                cout << "Payment History:" << endl;
                for (const string& payment : customer.getPaymentHistory()) {
                    cout << payment << endl;
                }
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;

                // Print customer profile
                cout << "Profile:" << endl;
                cout << "Name: " << customer.getProfile().name << endl;
                cout << "Age: " << customer.getProfile().age << endl;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;

                string crops[50] = {"Corn","Rice","Corn","Corn","Barley","Barley","Barley","Barley","Barley","Barley","Tomato","Tomato","Tomato","Tomato","Tomato","Peas","Peas","Peas","Peas","Peas","Peas","Corn","Corn","Corn","Corn","Corn","Pulses","Pulses","Pulses","Pulses","Pulses","sugarcane","sugarcane","sugarcane","sugarcane","sugarcane","Mustard","Mustard","Mustard","Mustard","Mustard","Cabbage","Cabbage","Cabbage","Banana","Banana","Guava","Guava","Guava","Guava"};
                string places[50] = {"Jalgaon" , "Konkan" , "Hyderabad" , "Ahmedabad" , "Shikohabad" , "Rajwada" , "Kalikat" , "Marathwada" , "Pachora" , "Shirpur" , "Badu Collective" , "Gandhinagar" ,"Sitapur" , "Igatpuri" , "Ilahabad" , "Kurukshetra" , "Cochin" , "Periya" , "Varkala" , "Munnar" , "Shalimar" "Darbhanga" , "Amritsar" , "Danapur" , "Champaran" , "Sanjeevani" , "Kalighat" ,"Pimpri Chinchwad" , "Kanyakumari" , "Chennai" , "Srikakulam" ,"Karachi" , "Nagpur" , "Tiruvanantpuram" , "Noida" , "Laddakh" , "Hyderabad" , "Sillod" , "Aurangabad" , "Pune" , "Palghar" , "Wada","Vijaywada" , "Barhanpur" , "Bhusaval" , "Gitanjali" , "Kashi","Manali", "Kishorgarh" , "Vasepur" , "Dahanu" };
                string prices[50] = {"163","154","154","154","200","200","200","200","154","200","154","250","250","154","250","170","170","170","178","154","100","100","100","100","154","100","154","100","100","154","100","100","100","154","100","100","154","100","100","167","100","194","168","115","100","100","100","254","100","187"};
                string stocks[50] = {"38 KG","30 KG","38 KG","76 KG","70 KG","90 KG","38 KG","88 KG","10 KG","30 KG","38 KG","37 KG","50 KG","56 KG","38 KG","97 KG","30 KG","45 KG","50 KG","38 KG","30 KG","71 KG","30 KG","38 KG","30 KG","71 KG","30 KG","71 KG","30 KG","30 KG","71 KG","30 KG","30 KG","30 KG","71 KG","30 KG","30 KG","30 KG","71 KG","30 KG","30 KG","30 KG","71 KG","30 KG","30 KG","71 KG","30 KG","30 KG","30 KG","71 KG"};


                     cout<<"                                                                                                                                    " <<endl;
                     cout<<"                                                                                                                                    " <<endl;
                     cout<<"                                                                                                                                    " <<endl;
                std::cout << std::left << std::setw(20) << "| Crops" << std::setw(20) << "| Places" << std::setw(20) << "| Prices" << std::setw(20) << "| Stocks" << std::endl;
                std::cout << "|---------------------------------------------------------------------------------------------------------------------|" << std::endl;

                for (int i = 0; i < 50; ++i) {
                std::cout << "| " << std::setw(20) << crops[i] << "| " << std::setw(20) << places[i] << "| " << std::setw(20) << prices[i] << "| " << std::setw(20) << stocks[i] << "|" << std::endl;
                }

                std::cout << "|---------------------------------------------------------------------------------------------------------------------|" << std::endl;




                break;
            }
        }

        if (!found) {
            cout << "Customer with username " << username << " not found." << endl;
        }
    }
};


//CUSTOMER CLASSES ENDS HERE

//----------------------------------------------


//==================================================

//FARMERS FUNCTIONS

void print_welcome(){
    std::cout << "                                                                                   " << std::endl;
    std::cout << "                                                                                   " << std::endl;
    std::cout << "*************************************************************************************" << std::endl;
    std::cout << "#                                                                                   #" << std::endl;
    std::cout << "#                                                                                   #" << std::endl;
    std::cout << "#                 _|_                 .--.                           _|_            #" << std::endl;
    std::cout << "#        ______/_/___\\_              |o_o |                 ______/_/___\\_          #" << std::endl;
    std::cout << "#  [_[_________|__|____\\____         |:/  |          [__[_________|__|____\\____     #" << std::endl;
    std::cout << "#           (o)--------(o)          //   \\ \\                (o)--------(o)          #" << std::endl;
    std::cout << "#                                   (|     | )                                      #" << std::endl;
    std::cout << "#                                   /'\\_   _/`\\                                     #" << std::endl;
    std::cout << "#                                   \\_)=(_/                                         #" << std::endl;
    std::cout << "#                                                                                   #" << std::endl;
    std::cout << "#                                                                                   #" << std::endl;
    std::cout << "#                               Welcome to I AGRIcult!                              #" << std::endl;
    std::cout << "#                            Your Smart Agriculture Companion                       #" << std::endl;
    std::cout << "#                               EAT Healthy, LIVE Healthy!                          #" << std::endl;
    std::cout << "#                                                                                   #" << std::endl;
    std::cout << "#                                                                                   #" << std::endl;
    std::cout << "*************************************************************************************" << std::endl << std::endl << std::endl;
}


int farmer_customer(){
    int choose1;
    std::cout << "                                                                                   " << std::endl;
    std::cout << "                                                                                   " << std::endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"If Farmer choose 1 ; If customer choose 2 |"<<endl;
    cout<<"1. Farmer                                 |"<<endl;
    cout<<"2. Customer                               |"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cin>>choose1;

    return choose1;
}
 

string successful_login(const vector<Farmer>& farmersList, int farm_choice) {
    string status;
    if (farm_choice == 1) {
        string USERNAME;
        string PASSWORD;

        cout << "Enter your USERNAME!" << endl;
        cin >> USERNAME;
        cout << "Enter your PASSWORD!" << endl;
        cin >> PASSWORD;

        bool log_in = false;

        for (const Farmer& farmer : farmersList) {
            if (USERNAME == farmer.getID()) {
                log_in = true;
                break;
            }
        }

        if (log_in == true && PASSWORD == "iagricult@123") {
            status = "You are Successfully Logged In!";
            cout << "You are Successfully Logged In!" << endl;
        } else {
            status = "Invalid USERNAME or PASSWORD!";
            cout << "Invalid USERNAME or PASSWORD!" << endl;
        }
    }

    return status;
}

    

   



int enterDetailsFar(std::string x) {
    int choice;
    if(x == "You are Successfully Logged In!" ){
    std::cout << "                                                                                   " << std::endl;
    std::cout << "                                                                                   " << std::endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"1. Your Crops                           |"<<endl;
    cout<<"2. Payment History                      |"<<endl;
    cout<<"3. Profile                              |"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<< "Enter your choice(between 1 to 3): ";
    cin>>choice;
    }
    return choice;
}


int your_crops() {
    
  int choose1;
  std::cout << "                                                                                   " << std::endl;
  std::cout << "                                                                                   " << std::endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"YOUR CROPS                                |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"1. Crops details                          |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<< "Enter your choice(Press 1 for Crop Details): ";
  
  cin>>choose1;

  return choose1;
}



int payment_history() {
    
  int choose1;
  std::cout << "                                                                                   " << std::endl;
  std::cout << "                                                                                   " << std::endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"PAYMENT HISTORY                          |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"1. Payment Details                       |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout << "Enter your choice(Press 1 for Payment Details): ";

  cin>>choose1;

  return choose1;
}





int profile(){
  int choose1;
  std::cout << "                                                                                   " << std::endl;
  std::cout << "                                                                                   " << std::endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"PROFILE                                  |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"1. Your Profile                          |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout << "Enter your choice(Press 1 for Your Profile): ";

  cin>>choose1;

  return choose1;
}


int fun_choice(int d){
    int ret_value;
    int q;
    int r;
    int s;
    if(d == 1){
       q =  your_crops();
       ret_value = q;
    }

    else if(d == 2){
        r = payment_history();
        ret_value = r;
    }

    else if(d == 3){
        s = profile();
        ret_value = s;
    }

return  ret_value;
}

//FARMERS FUNCTIONS ENDS HERE

//============================================

//==================================================

//CUSTOMERS FUNCTIONS





// Customer Part 

string successful_login(const vector<Customer>& customersList , int farm_choice){

    
    string status;
    if(farm_choice == 2){
        string USERNAME;
        string PASSWORD;

        cout<<"Enter your USERNAME!"<<endl;
        cin>>USERNAME;
        cout<<"Enter your PASSWORD!"<<endl;
        cin>>PASSWORD;

        bool log_in = false;

        
       
        for (const Customer& customer : customersList) {
            if (USERNAME == customer.getID()) {
                log_in = true;
                break;
            }
        }

        if (log_in == true && PASSWORD == "iagricult@123") {
            status = "You are Successfully Logged In!";
            cout << "You are Successfully Logged In!" << endl;
        } else {
            status = "Invalid USERNAME or PASSWORD!";
            cout << "Invalid USERNAME or PASSWORD!" << endl;
        }
    }

    return status;
}


int enterDetailsCus(std::string x){
    int choice;
    if(x == "You are Successfully Logged In!" ){
    std::cout << "                                                                                   " << std::endl;
    std::cout << "                                                                                   " << std::endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"1. Buying Options                       |"<<endl;
    cout<<"2. Payment History                      |"<<endl;
    cout<<"3. Profile                              |"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<< "Enter your choice(between 1 to 3): ";
    cin>>choice;
    }
    return choice;
}

int cus_buying_options() {
    
  int choose1;
  std::cout << "                                                                                   " << std::endl;
  std::cout << "                                                                                   " << std::endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"BUYING OPTIONS                            |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"1. Buying Stats                           |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<< "Enter your choice(press 1 for Buying Options): ";
  
  cin>>choose1;

  return choose1;
}


int cus_payment_history() {
    
  int choose1;
  std::cout << "                                                                                   " << std::endl;
  std::cout << "                                                                                   " << std::endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"PAYMENT HISTORY                           |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"1. Payment Details                        |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout << "Enter your choice(Press 1 for Payment Details): ";

  cin>>choose1;

  return choose1;
}



int cus_profile(){
  int choose1;
  std::cout << "                                                                                   " << std::endl;
  std::cout << "                                                                                   " << std::endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"PROFILE                                   |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout<<"1. Your Profile                           |"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
  cout << "Enter your choice(Press 1 for Your Profile): ";

  cin>>choose1;

  return choose1;
}


int cust_choice(int d){
    int ret_value;
    int q;
    int r;
    int s;
    if(d == 1){
       q =  cus_buying_options();
       ret_value = q;
    }
    else if(d == 2){
        r = cus_payment_history();
        ret_value = r;
    }
    else if(d == 3){
        s = cus_profile();
        ret_value = s;
    }
return  ret_value;
}

//CUSTOMERS FUNCTION ENDS HERE

//================================================

//..............................................

//INT MAIN STARTS FROM HERE

int main(){
    //int main (farmer)

     std::vector<Farmer> farmersList(50); // Create a list of 50 farmers

    // Set details for different farmers
    farmersList[0].setID("farmer001");
    farmersList[0].setPassword("iagricult@123");
    farmersList[0].PaymentID("PaymentID: Paytm@modi1");
    farmersList[0].crop("Corn");
    farmersList[0].price("163");
    farmersList[0].stock("38 KG");
    farmersList[0].setProfile("Hritik", 35);

    farmersList[1].setID("farmer002");
    farmersList[1].setPassword("iagricult@123");
    farmersList[1].PaymentID("PaymentID: Paytm@modi2");
    farmersList[1].crop("Rice");
    farmersList[1].price("154");
    farmersList[1].stock("30 KG");
    farmersList[1].setProfile("Jane Smith", 40);

    farmersList[2].setID("farmer003");
    farmersList[2].setPassword("iagricult@123");
    farmersList[2].PaymentID("PaymentID: Paytm@modi3");
    farmersList[2].crop("Corn");
    farmersList[2].price("154");
    farmersList[2].stock("38 KG");
    farmersList[2].setProfile("RamCharan", 35);

    farmersList[3].setID("farmer004");
    farmersList[3].setPassword("iagricult@123");
    farmersList[3].PaymentID("PaymentID: Paytm@modi4");
    farmersList[3].crop("Corn");
    farmersList[3].price("154");
    farmersList[3].stock("76 KG");
    farmersList[3].setProfile("John Cena", 35);

    farmersList[4].setID("farmer005");
    farmersList[4].setPassword("iagricult@123");
    farmersList[4].PaymentID("PaymentID: Paytm@modi5");
    farmersList[4].crop("Barley");
    farmersList[4].price("200");
    farmersList[4].stock("70 KG");
    farmersList[4].setProfile("Ram Bahadur", 35);

    farmersList[5].setID("farmer006");
    farmersList[5].setPassword("iagricult@123");
    farmersList[5].PaymentID("Payment ID: Paytm@6");
    farmersList[5].crop("Barley");
    farmersList[5].price("200");
    farmersList[5].stock("90 KG");
    farmersList[5].setProfile("Shyam singh", 35);

    farmersList[6].setID("farmer007");
    farmersList[6].setPassword("iagricult@123");
    farmersList[6].PaymentID("Payment ID: Paytm@7");
    farmersList[6].crop("Barley");
    farmersList[6].price("200");
    farmersList[6].stock("38 KG");
    farmersList[6].setProfile("Surender", 35);

    farmersList[7].setID("farmer008");
    farmersList[7].setPassword("iagricult@123");
    farmersList[7].PaymentID("Payment ID: Paytm@8");
    farmersList[7].crop("Barley");
    farmersList[7].price("200");
    farmersList[7].stock("88 KG");
    farmersList[7].setProfile("Babu Lal", 35);

    farmersList[8].setID("farmer009");
    farmersList[8].setPassword("iagricult@123");
    farmersList[8].PaymentID("Payment ID: Paytm@9");
    farmersList[8].crop("Barley");
    farmersList[8].price("154");
    farmersList[8].stock("10 KG");
    farmersList[8].setProfile("Birender", 35);

    farmersList[9].setID("farmer010");
    farmersList[9].setPassword("iagricult@123");
    farmersList[9].PaymentID("Payment ID: Paytm@10");
    farmersList[9].crop("Barley");
    farmersList[9].price("200");
    farmersList[9].stock("30 KG");
    farmersList[9].setProfile("Jatin", 35);

    farmersList[10].setID("farmer011");
    farmersList[10].setPassword("iagricult@123");
    farmersList[10].PaymentID("Payment ID: Paytm@11");
    farmersList[10].crop("Tomato");
    farmersList[10].price("154");
    farmersList[10].stock("38 KG");
    farmersList[10].setProfile("Messi", 35);

    farmersList[11].setID("farmer012");
    farmersList[11].setPassword("iagricult@123");
    farmersList[11].PaymentID("Payment ID: Paytm@12");
    farmersList[11].crop("Tomato");
    farmersList[11].price("250");
    farmersList[11].stock("37 KG");
    farmersList[11].setProfile("Ronaldo", 35);

    farmersList[12].setID("farmer013");
    farmersList[12].setPassword("iagricult@123");
    farmersList[12].PaymentID("Payment ID: Paytm@13");
    farmersList[12].crop("Tomato");
    farmersList[12].price("250");
    farmersList[12].stock("50 KG");
    farmersList[12].setProfile("Sunil Gavaskar", 35);

    farmersList[13].setID("farmer014");
    farmersList[13].setPassword("iagricult@123");
    farmersList[13].PaymentID("Payment ID: Paytm@14");
    farmersList[13].crop("Tomato");
    farmersList[13].price("154");
    farmersList[13].stock("56 KG");
    farmersList[13].setProfile("Virat Kohli", 35);

    farmersList[14].setID("farmer015");
    farmersList[14].setPassword("iagricult@123");
    farmersList[14].PaymentID("Payment ID: Paytm@15");
    farmersList[14].crop("Tomato");
    farmersList[14].price("250");
    farmersList[14].stock("38 KG");
    farmersList[14].setProfile("Sanjeev Dubey", 35);

    farmersList[15].setID("farmer0016");
    farmersList[15].setPassword("iagricult@123");
    farmersList[15].PaymentID("Payment ID: Paytm@16");
    farmersList[15].crop("Peas");
    farmersList[15].price("170");
    farmersList[15].stock("97 KG");
    farmersList[15].setProfile("Sanjeev Verma", 35);

    farmersList[16].setID("farmer017");
    farmersList[16].setPassword("iagricult@123");
    farmersList[16].PaymentID("Payment ID: Paytm@17");
    farmersList[16].crop("Peas");
    farmersList[16].price("170");
    farmersList[16].stock("30 KG");
    farmersList[16].setProfile("Ram Verma", 35);

    farmersList[17].setID("farmer018");
    farmersList[17].setPassword("iagricult@123");
    farmersList[17].PaymentID("Payment ID: Paytm@18");
    farmersList[17].crop("Peas");
    farmersList[17].price("170");
    farmersList[17].stock("45 KG");
    farmersList[17].setProfile("Ram Yadav", 35);

    farmersList[18].setID("farmer018");
    farmersList[18].setPassword("iagricult@123");
    farmersList[18].PaymentID("Payment ID: Paytm@19");
    farmersList[18].crop("Peas");
    farmersList[18].price("178");
    farmersList[18].stock("50 KG");
    farmersList[18].setProfile("Ram Singh", 35);

    farmersList[19].setID("farmer020");
    farmersList[19].setPassword("iagricult@123");
    farmersList[19].PaymentID("Payment ID: Paytm@20");
    farmersList[19].crop("Peas");
    farmersList[19].price("154");
    farmersList[19].stock("38 KG");
    farmersList[19].setProfile("Ramu", 35);

    farmersList[20].setID("farmer021");
    farmersList[20].setPassword("iagricult@123");
    farmersList[20].PaymentID("Payment ID: Paytm@21");
    farmersList[20].crop("Peas");
    farmersList[20].price("100");
    farmersList[20].stock("30 KG");
    farmersList[20].setProfile("Sumit Singh", 35);

    farmersList[21].setID("farmer022");
    farmersList[21].setPassword("iagricult@123");
    farmersList[21].PaymentID("Payment ID: Paytm@22");
    farmersList[21].crop("Corn");
    farmersList[21].price("100");
    farmersList[21].stock("71 KG");
    farmersList[21].setProfile("Chandan Singh", 35);

    farmersList[22].setID("farmer023");
    farmersList[22].setPassword("iagricult@123");
    farmersList[22].PaymentID("Payment ID: Paytm@23");
    farmersList[22].crop("Corn");
    farmersList[22].price("100");
    farmersList[22].stock("30 KG");
    farmersList[22].setProfile("Sweety Yadav", 35);

    farmersList[23].setID("farmer024");
    farmersList[23].setPassword("iagricult@123");
    farmersList[23].PaymentID("Payment ID: Paytm@24");
    farmersList[23].crop("Corn");
    farmersList[23].price("100");
    farmersList[19].stock("38 KG");
    farmersList[23].setProfile("Deepti Chauhan", 35);

    farmersList[24].setID("farmer025");
    farmersList[24].setPassword("iagricult@123");
    farmersList[24].PaymentID("Payment ID: Paytm@25");
    farmersList[24].crop("Corn");
    farmersList[24].price("154");
    farmersList[24].stock("30 KG");
    farmersList[24].setProfile("Akanksha Rani", 35);

    farmersList[25].setID("farmer026");
    farmersList[25].setPassword("iagricult@123");
    farmersList[25].PaymentID("Payment ID: Paytm@126");
    farmersList[25].crop("Corn");
    farmersList[25].price("100");
    farmersList[25].stock("71 KG");
    farmersList[25].setProfile("Rani Jii", 35);

    farmersList[26].setID("farmer027");
    farmersList[26].setPassword("iagricult@123");
    farmersList[26].PaymentID("Payment ID: Paytm@27");
    farmersList[26].crop("Pulses");
    farmersList[26].price("154");
    farmersList[26].stock("30 KG");
    farmersList[26].setProfile("Tushar", 35);

    farmersList[27].setID("farmer028");
    farmersList[27].setPassword("iagricult@123");
    farmersList[27].PaymentID("Payment ID: Paytm@28");
    farmersList[27].crop("Pulses");
    farmersList[27].price("100");
    farmersList[27].stock("71 KG");
    farmersList[27].setProfile("Jeeshan", 35);

    farmersList[28].setID("farmer029");
    farmersList[28].setPassword("iagricult@123");
    farmersList[28].PaymentID("Payment ID: Paytm@29");
    farmersList[28].crop("Pulses");
    farmersList[28].price("100");
    farmersList[28].stock("30 KG");
    farmersList[28].setProfile("Jhunjhuwala", 35);

    farmersList[29].setID("farmer030");
    farmersList[29].setPassword("iagricult@123");
    farmersList[29].PaymentID("Payment ID: Paytm@30");
    farmersList[29].crop("Pulses");
    farmersList[29].price("154");
    farmersList[29].stock("30 KG");
    farmersList[29].setProfile("Dawud", 35);

    farmersList[30].setID("farmer031");
    farmersList[30].setPassword("iagricult@123");
    farmersList[30].PaymentID("Payment ID: Paytm@31");
    farmersList[30].crop("Pulses");
    farmersList[30].price("100");
    farmersList[30].stock("71 KG");
    farmersList[30].setProfile("Dhirendra", 35);

    farmersList[31].setID("farmer032");
    farmersList[31].setPassword("iagricult@123");
    farmersList[31].PaymentID("Payment ID: Paytm@32");
    farmersList[31].crop("sugarcane");
    farmersList[31].price("100");
    farmersList[31].stock("30 KG");
    farmersList[31].setProfile("Krishna", 35);

    farmersList[32].setID("farmer033");
    farmersList[32].setPassword("iagricult@123");
    farmersList[32].PaymentID("Payment ID: Paytm@33");
    farmersList[32].crop("sugarcane");
    farmersList[32].price("100");
    farmersList[32].stock("30 KG");
    farmersList[32].setProfile("Shastri", 35);

    farmersList[33].setID("farmer034");
    farmersList[33].setPassword("iagricult@123");
    farmersList[33].PaymentID("Payment ID: Paytm@34");
    farmersList[33].crop("sugarcane");
    farmersList[33].price("154");
    farmersList[3].stock("30 KG");
    farmersList[33].setProfile("Ram", 35);

    farmersList[34].setID("farmer035");
    farmersList[34].setPassword("iagricult@123");
    farmersList[34].PaymentID("Payment ID: Paytm@35");
    farmersList[34].crop("sugarcane");
    farmersList[34].price("100");
    farmersList[34].stock("71 KG");
    farmersList[34].setProfile("Manohar", 35);

    farmersList[35].setID("farmer036");
    farmersList[35].setPassword("iagricult@123");
    farmersList[35].PaymentID("Payment ID: Paytm@36");
    farmersList[35].crop("sugarcane");
    farmersList[35].price("100");
    farmersList[35].stock("30 KG");
    farmersList[35].setProfile("Lohia", 35);

    farmersList[36].setID("farmer037");
    farmersList[36].setPassword("iagricult@123");
    farmersList[36].PaymentID("Payment ID: Paytm@37");
    farmersList[36].crop("Mustard");
    farmersList[36].price("154");
    farmersList[36].stock("30 KG");
    farmersList[36].setProfile("Unnati", 35);

    farmersList[37].setID("farmer038");
    farmersList[37].setPassword("iagricult@123");
    farmersList[37].PaymentID("Payment ID: Paytm@38");
    farmersList[37].crop("Mustard");
    farmersList[37].price("100");
    farmersList[37].stock("30 KG");
    farmersList[37].setProfile("Prateek", 35);

    farmersList[38].setID("farmer039");
    farmersList[38].setPassword("iagricult@123");
    farmersList[38].PaymentID("Payment ID: Paytm@39");
    farmersList[38].crop("Mustard");
    farmersList[38].price("100");
    farmersList[38].stock("71 KG");
    farmersList[38].setProfile("Anshika Yadav", 35);

    farmersList[39].setID("farmer040");
    farmersList[39].setPassword("iagricult@123");
    farmersList[39].PaymentID("Payment ID: Paytm@40");
    farmersList[39].crop("Mustard");
    farmersList[39].price("167");
    farmersList[39].stock("30 KG");
    farmersList[39].setProfile("Anant", 35);

    farmersList[40].setID("farmer041");
    farmersList[40].setPassword("iagricult@123");
    farmersList[40].PaymentID("Payment ID: Paytm@41");
    farmersList[40].crop("Mustard");
    farmersList[40].price("100");
    farmersList[40].stock("30 KG");
    farmersList[40].setProfile("Vijeta", 35);

    farmersList[41].setID("farmer042");
    farmersList[41].setPassword("iagricult@123");
    farmersList[41].PaymentID("Payment ID: Paytm@42");
    farmersList[41].crop("Cabbage");
    farmersList[41].price("194");
    farmersList[41].stock("30 KG");
    farmersList[41].setProfile("Murshad", 35);

    farmersList[42].setID("farmer043");
    farmersList[42].setPassword("iagricult@123");
    farmersList[42].PaymentID("Payment ID: Paytm@43");
    farmersList[42].crop("Cabbage");
    farmersList[42].price("168");
    farmersList[42].stock("71 KG");
    farmersList[42].setProfile("Jashbeer", 35);

    farmersList[43].setID("farmer044");
    farmersList[43].setPassword("iagricult@123");
    farmersList[43].PaymentID("Payment ID: Paytm@44");
    farmersList[43].crop("Cabbage");
    farmersList[43].price("115");
    farmersList[43].stock("30 KG");
    farmersList[43].setProfile("Khan Sir", 35);

    farmersList[44].setID("farmer045");
    farmersList[44].setPassword("iagricult@123");
    farmersList[44].PaymentID("Payment ID: Paytm@45");
    farmersList[44].crop("Banana");
    farmersList[44].price("100");
    farmersList[44].stock("30 KG");
    farmersList[44].setProfile("Maheshwari", 35);

    farmersList[45].setID("farmer046");
    farmersList[45].setPassword("iagricult@123");
    farmersList[45].PaymentID("Payment ID: Paytm@46");
    farmersList[45].crop("Banana");
    farmersList[45].price("100");
    farmersList[45].stock("71 KG");
    farmersList[45].setProfile("Sujan", 35);

    farmersList[46].setID("farmer047");
    farmersList[46].setPassword("iagricult@123");
    farmersList[46].PaymentID("Payment ID: Paytm@47");
    farmersList[46].crop("Guava");
    farmersList[46].price("100");
    farmersList[46].stock("30 KG");
    farmersList[46].setProfile("Gayatri Chhibba", 35);

    farmersList[47].setID("farmer048");
    farmersList[47].setPassword("iagricult@123");
    farmersList[47].PaymentID("Payment ID: Paytm@48");
    farmersList[47].crop("Guava");
    farmersList[47].price("254");
    farmersList[47].stock("30 KG");
    farmersList[47].setProfile("Raghav", 35);

    farmersList[48].setID("farmer049");
    farmersList[48].setPassword("iagricult@123");
    farmersList[48].PaymentID("Payment ID: Paytm@49");
    farmersList[48].crop("Guava");
    farmersList[48].price("100");
    farmersList[48].stock("30 KG");
    farmersList[48].setProfile("Tarranum", 35);

    farmersList[49].setID("farmer050");
    farmersList[49].setPassword("iagricult@123");
    farmersList[49].PaymentID("Payment ID: Paytm@50");
    farmersList[49].crop("Guava");
    farmersList[49].price("187");
    farmersList[49].stock("71 KG");
    farmersList[49].setProfile("Anjali", 35);


    //Farmer Part 
    print_welcome();
    int farm_choice = farmer_customer();
    string success = successful_login(farmersList, farm_choice);
    int details_choice = enterDetailsFar(success);
    int my_choice = fun_choice(details_choice);

    if (my_choice == 1) {
        string username;
        cout << "Enter your USERNAME!" << endl;
        cin >> username;
        cout<<"                                         "<< endl;
        cout<<"                                         "<< endl;
        cout<<"                                         "<< endl;
        cout<<"****************************************|"<< endl;
        farmersList[0].accessFarmerDetails(username, farmersList);
        cout<<"****************************************|"<< endl;
        cout<<"                                         "<< endl;
        cout<<"                                         "<< endl;
        cout<<"                                         "<< endl;
        
    }

std::vector<Customer> customersList(50); // Create a list of 50 farmers

        // Set details for different customers
    customersList[0].setID("customer001");
    customersList[0].setPassword("iagricult@123");
    customersList[0].PaymentID("Payment reference: PTMBN001");
    customersList[0].setProfile("Rahul", 35);

    customersList[1].setID("customer002");
    customersList[1].setPassword("iagricult@123");
    customersList[1].PaymentID("Payment reference: PTMBN002");
    customersList[1].setProfile("Jane Smitha", 40);

    customersList[2].setID("customer003");
    customersList[2].setPassword("iagricult@123");
    customersList[2].PaymentID("Payment reference: PTMBN003");
    customersList[2].setProfile("Binde", 35);

    customersList[3].setID("customer004");
    customersList[3].setPassword("iagricult@123");
    customersList[3].PaymentID("Payment reference: PTMBN004");
    customersList[3].setProfile("John ", 35);

    customersList[4].setID("customer005");
    customersList[4].setPassword("iagricult@123");
    customersList[4].PaymentID("Payment reference: PTMBN005");
    customersList[4].setProfile(" Bahadur", 35);

    customersList[5].setID("customer006");
    customersList[5].setPassword("iagricult@123");
    customersList[5].PaymentID("Payment reference: PTMBN006");
    customersList[5].setProfile("Shyam ", 35);

    customersList[6].setID("customer007");
    customersList[6].setPassword("iagricult@123");
    customersList[6].PaymentID("Payment reference: PTMBN007");
    customersList[6].setProfile("Surender", 35);

    customersList[7].setID("customer008");
    customersList[7].setPassword("iagricult@123");
    customersList[7].PaymentID("Payment reference: PTMBN008");
    customersList[7].setProfile("Babu ", 35);

    customersList[8].setID("customer009");
    customersList[8].setPassword("iagricult@123");
    customersList[8].PaymentID("Payment reference: PTMBN009");
    customersList[8].setProfile("Biru", 35);

    customersList[9].setID("customer010");
    customersList[9].setPassword("iagricult@123");
    customersList[9].PaymentID("Payment reference: PTMBN0010");
    customersList[9].setProfile("Jatin", 35);

    customersList[10].setID("customer011");
    customersList[10].setPassword("iagricult@123");
    customersList[10].PaymentID("Payment reference: PTMBN0011");
    customersList[10].setProfile("vishal", 35);

    customersList[11].setID("customer012");
    customersList[11].setPassword("iagricult@123");
    customersList[11].PaymentID("Payment reference: PTMBN0012");
    customersList[11].setProfile("satyam", 35);

    customersList[12].setID("customer013");
    customersList[12].setPassword("iagricult@123");
    customersList[12].PaymentID("Payment reference: PTMBN0013");
    customersList[12].setProfile("Sunil ", 35);

    customersList[13].setID("customer014");
    customersList[13].setPassword("iagricult@123");
    customersList[13].PaymentID("Payment reference: PTMBN0014");
    customersList[13].setProfile("Virat ", 35);

    customersList[14].setID("customer015");
    customersList[14].setPassword("iagricult@123");
    customersList[14].PaymentID("Payment reference: PTMBN0015");
    customersList[14].setProfile("Sanjeev ", 35);

    customersList[15].setID("customer0016");
    customersList[15].setPassword("iagricult@123");
    customersList[15].PaymentID("Payment reference: PTMBN0016");
    customersList[15].setProfile("sonu Verma", 35);

    customersList[16].setID("customer017");
    customersList[16].setPassword("iagricult@123");
    customersList[16].PaymentID("Payment reference: PTMBN0017");
    customersList[16].setProfile("Ramehwar", 35);

    customersList[17].setID("customer018");
    customersList[17].setPassword("iagricult@123");
    customersList[17].PaymentID("Payment reference: PTMBN0018");
    customersList[17].setProfile("pappu Yadav", 35);

    customersList[18].setID("customer018");
    customersList[18].setPassword("iagricult@123");
    customersList[18].PaymentID("Payment reference: PTMBN0019");
    customersList[18].setProfile("Rohit Singh", 35);

    customersList[19].setID("customer020");
    customersList[19].setPassword("iagricult@123");
    customersList[19].PaymentID("Payment reference: PTMBN0020");
    customersList[19].setProfile("Rampravesh", 35);

    customersList[20].setID("customer021");
    customersList[20].setPassword("iagricult@123");
    customersList[20].PaymentID("Payment reference: PTMBN0021");
    customersList[20].setProfile("Sumit ", 35);

    customersList[21].setID("customer022");
    customersList[21].setPassword("iagricult@123");
    customersList[21].PaymentID("Payment reference: PTMBN0022");
    customersList[21].setProfile("Chandan ", 35);

    customersList[22].setID("customer023");
    customersList[22].setPassword("iagricult@123");
    customersList[22].PaymentID("Payment reference: PTMBN0023");
    customersList[22].setProfile("Sweety ", 35);

    customersList[23].setID("customer024");
    customersList[23].setPassword("iagricult@123");
    customersList[23].PaymentID("Payment reference: PTMBN0024");
    customersList[23].setProfile("Pankaj Chauhan", 35);

    customersList[24].setID("customer025");
    customersList[24].setPassword("iagricult@123");
    customersList[24].PaymentID("Payment reference: PTMBN0025");
    customersList[24].setProfile("Akanksha ", 35);

    customersList[25].setID("customer026");
    customersList[25].setPassword("iagricult@123");
    customersList[25].PaymentID("Payment reference: PTMBN0026");
    customersList[25].setProfile("santosh Jii", 35);

    customersList[26].setID("customer027");
    customersList[26].setPassword("iagricult@123");
    customersList[26].PaymentID("Payment reference: PTMBN0027");
    customersList[26].setProfile("Tushar", 35);

    customersList[27].setID("customer028");
    customersList[27].setPassword("iagricult@123");
    customersList[27].PaymentID("Payment reference: PTMBN0028");
    customersList[27].setProfile("jay", 35);

    customersList[28].setID("customer029");
    customersList[28].setPassword("iagricult@123");
    customersList[28].PaymentID("Payment reference: PTMBN0029");
    customersList[28].setProfile("vikki", 35);

    customersList[29].setID("customer030");
    customersList[29].setPassword("iagricult@123");
    customersList[29].PaymentID("Payment reference: PTMBN0030");
    customersList[29].setProfile("vinod", 35);

    customersList[30].setID("customer031");
    customersList[30].setPassword("iagricult@123");
    customersList[30].PaymentID("Payment reference: PTMBN0031");
    customersList[30].setProfile("Dabbu", 35);

    customersList[31].setID("customer032");
    customersList[31].setPassword("iagricult@123");
    customersList[31].PaymentID("Payment reference: PTMBN0032");
    customersList[31].setProfile("Kavi", 35);

    customersList[32].setID("customer033");
    customersList[32].setPassword("iagricult@123");
    customersList[32].PaymentID("Payment reference: PTMBN0033");
    customersList[32].setProfile("Shastri", 35);

    customersList[33].setID("customer034");
    customersList[33].setPassword("iagricult@123");
    customersList[33].PaymentID("Payment reference: PTMBN0034");
    customersList[33].setProfile("Raju", 35);

    customersList[34].setID("customer035");
    customersList[34].setPassword("iagricult@123");
    customersList[34].PaymentID("Payment reference: PTMBN0035");
    customersList[34].setProfile("Monu", 35);

    customersList[35].setID("customer036");
    customersList[35].setPassword("iagricult@123");
    customersList[35].PaymentID("Payment reference: PTMBN0036");
    customersList[35].setProfile("Laloo", 35);

    customersList[36].setID("customer037");
    customersList[36].setPassword("iagricult@123");
    customersList[36].PaymentID("Payment reference: PTMBN0037");
    customersList[36].setProfile("Unnati", 35);

    customersList[37].setID("customer038");
    customersList[37].setPassword("iagricult@123");
    customersList[37].PaymentID("Payment reference: PTMBN0038");
    customersList[37].setProfile("Pratik", 35);

    customersList[38].setID("customer039");
    customersList[38].setPassword("iagricult@123");
    customersList[38].PaymentID("Payment reference: PTMBN0039");
    customersList[38].setProfile("Anshika ", 35);

    customersList[39].setID("customer040");
    customersList[39].setPassword("iagricult@123");
    customersList[39].PaymentID("Payment reference: PTMBN0040");
    customersList[39].setProfile("Don", 35);

    customersList[40].setID("customer041");
    customersList[40].setPassword("iagricult@123");
    customersList[40].PaymentID("Payment reference: PTMBN0041");
    customersList[40].setProfile("Virendra", 35);

    customersList[41].setID("customer042");
    customersList[41].setPassword("iagricult@123");
    customersList[41].PaymentID("Payment reference: PTMBN0042");
    customersList[41].setProfile("Murshad", 35);

    customersList[42].setID("customer043");
    customersList[42].setPassword("iagricult@123");
    customersList[42].PaymentID("Payment reference: PTMBN0043");
    customersList[42].setProfile("Mureed", 35);

    customersList[43].setID("customer044");
    customersList[43].setPassword("iagricult@123");
    customersList[43].PaymentID("Payment reference: PTMBN0044");
    customersList[43].setProfile("Mahi", 35);

    customersList[44].setID("customer045");
    customersList[44].setPassword("iagricult@123");
    customersList[44].PaymentID("Payment reference: PTMBN0045");
    customersList[44].setProfile("suresh ", 35);

    customersList[45].setID("customer046");
    customersList[45].setPassword("iagricult@123");
    customersList[45].PaymentID("Payment reference: PTMBN0046");
    customersList[45].setProfile("Sujan", 35);

    customersList[46].setID("customer047");
    customersList[46].setPassword("iagricult@123");
    customersList[46].PaymentID("Payment reference: PTMBN0047");
    customersList[46].setProfile("Gayatri singh", 35);

    customersList[47].setID("customer048");
    customersList[47].setPassword("iagricult@123");
    customersList[47].PaymentID("Payment reference: PTMBN0048");
    customersList[47].setProfile("Raghav singh", 35);

    customersList[48].setID("customer049");
    customersList[48].setPassword("iagricult@123");
    customersList[48].PaymentID("Payment reference: PTMBN0049");
    customersList[48].setProfile("Jyoti", 35);

    customersList[49].setID("customer050");
    customersList[49].setPassword("iagricult@123");
    customersList[49].PaymentID("Payment reference: PTMBN0050");
    customersList[49].setProfile("Hari", 35);

    //Farmer Part 
  
    //Customer Part
   
    string cust_success = successful_login(customersList , farm_choice);
    int details_cust_choice = enterDetailsCus(cust_success);
    int my_cust_choice = cust_choice(details_cust_choice);

    if(my_cust_choice == 1){
        string username;
        cout << "Enter your USERNAME!" << endl;
        cin >> username;
        cout<<"                                         "<< endl;
        cout<<"                                         "<< endl;
        cout<<"                                         "<< endl;
        cout<<"****************************************|"<< endl;
        customersList[0].accessCustomerDetails(username, customersList);
        cout<<"                                         "<< endl;
        cout<<"                                         "<< endl;
        cout<<"                                         "<< endl;
    }
    
    return 0;
}
