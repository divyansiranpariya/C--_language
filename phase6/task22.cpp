#include <iostream>
using namespace std;

class Hotel
 {
private:
	
    int hotel_id;
    string hotel_name;
    string hotel_type;
    int hotel_staff_size;
    int hotel_room_size;
    int hotel_establish_year;
    string hotel_country;
    string hotel_rating_type;
    string hotel_website;

public:
    
    Hotel(int id, string name, string type, int staff_size, int room_size,
          int establish_year, string country, string rating_type, string website)
       {
       	 this->hotel_id=id;
   this->hotel_name=name;
  this->hotel_type=type;
     this->hotel_staff_size=staff_size;
    this->hotel_room_size=room_size;
    this->hotel_establish_year=establish_year;
    this->hotel_country=country;
    string hotel_rating_type=rating_type;
    string hotel_website=website;

	   }

    
    void getdata()
	 {
        cout << "Hotel ID: " << hotel_id << endl;
        cout << "Hotel Name: " << hotel_name << endl;
        cout << "Type: " << hotel_type << endl;
        cout << "Staff Size: " << hotel_staff_size << endl;
        cout << "Room Size: " << hotel_room_size << endl;
        cout << "Established Year: " << hotel_establish_year << endl;
        cout << "Country: " << hotel_country << endl;
        cout << "Rating Type: " << hotel_rating_type << endl;
        cout << "Website: " << hotel_website << endl;
    }
};

int main() {

    Hotel hotel1(1, "Grand Hotel", "Luxury", 100, 200, 1990, "United States", "5-star", "www.grandhotel.com");

  
    hotel1.getdata();

    return 0;
}

