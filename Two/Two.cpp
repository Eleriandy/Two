#include <iostream>
#include <string>
using namespace std;

// Klasa bazowa
class Computer {
private:
    string brand; // Marka
    string model; // Model 
public:
    // Konstruktor domyślny
    Computer() : brand("Unknown"), model("Unknown") {}

    // Settery
    void setBrand(const string& newBrand) {
        brand = newBrand;
    }
    void setModel(const string& newModel) {
        model = newModel;
    }

    // Gettery
    string getBrand() const {
        return brand;
    }
    string getModel() const {
        return model;
    }

    // Metoda do wprowadzania ogólnych danych
    void inputBaseData() {
        string temp;
        cout << "Marka: ";
        cin >> temp;
        setBrand(temp); // Ustawiamy markę
        cout << "Model: ";
        cin >> temp;
        setModel(temp); // Ustawiamy model
    }

    // Metoda do wyświetlania ogólnych danych
    void displayBaseData() const {
        cout << "Marka: " << getBrand() << ", Model: " << getModel() << endl;
    }
};

// Klasa pochodna dla PC
class Desktop : public Computer {
private:
    string caseType; // Rodzaj obudowy (prywatne)
public:
    // Konstruktor domyślny
    Desktop() : caseType("Unknown") {}

    // Setter
    void setCaseType(const string& newCaseType) {
        caseType = newCaseType;
    }

    // Getter
    string getCaseType() const {
        return caseType;
    }

    // Metoda do wprowadzania danych
    void inputData() {
        inputBaseData(); // Wprowadzanie ogólnych danych
        string temp;
        cout << "Rodzaj obudowy: ";
        cin >> temp;
        setCaseType(temp); // Ustawiamy rodzaj obudowy
    }

    // Metoda do wyświetlania danych
    void displayData() const {
        displayBaseData(); // Wyświetlanie ogólnych danych
        cout << "Rodzaj obudowy: " << getCaseType() << endl;
    }
};

// Klasa pochodna dla laptopów
class Laptop : public Computer {
private:
    double screenDiagonal; // Długość przekątnej ekranu 
    string bodyColor;      // Kolor obudowy
public:
    // Konstruktor domyślny
    Laptop() : screenDiagonal(0.0), bodyColor("Unknown") {}

    // Settery
    void setScreenDiagonal(double newScreenDiagonal) {
        screenDiagonal = newScreenDiagonal;
    }
    void setBodyColor(const string& newBodyColor) {
        bodyColor = newBodyColor;
    }

    // Gettery
    double getScreenDiagonal() const {
        return screenDiagonal;
    }
    string getBodyColor() const {
        return bodyColor;
    }

    // Metoda do wprowadzania danych
    void inputData() {
        inputBaseData(); // Wprowadzanie ogólnych danych
        double diagonal;
        string color;
        cout << "Dlugosc przekatnej: ";
        cin >> diagonal;
        setScreenDiagonal(diagonal); // Ustawiamy długość przekątnej
        cout << "Kolor: ";
        cin >> color;
        setBodyColor(color); // Ustawiamy kolor
    }

    // Metoda do wyświetlania danych
    void displayData() const {
        displayBaseData(); // Wyświetlanie ogólnych danych
        cout << "Przekatna: " << getScreenDiagonal() << " cali" << endl;
        cout << "Kolor: " << getBodyColor() << endl;
    }
};

// Funkcja główna
int main() {
    Laptop myLaptop;
    Desktop myDesktop;

    cout << "Dane do laptopa:" << endl;
    myLaptop.inputData();
    cout << endl;

    cout << "Dane dla PC:" << endl;
    myDesktop.inputData();
    cout << endl;

    cout << "Dane o laptopie:" << endl;
    myLaptop.displayData();
    cout << endl;

    cout << "Dane o PC:" << endl;
    myDesktop.displayData();
    cout << endl;

    return 0;
}
