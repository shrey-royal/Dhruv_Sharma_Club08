#include<iostream>
using namespace std;

class Patient {
protected:
    string name;
    int age;
    string illness;
public:
    Patient(string name, int age, string illness) : name(name), age(age), illness(illness) {} 
};

class InPatient : public Patient {
private:
    int bedNumber;
public:
    InPatient(string name, int age, string illness) : Patient(name, age, illness), bedNumber(0) {}

    void assignBed() {
        bedNumber = generateBedNumber();
        cout << name << " has been assigned to bed number " << bedNumber << "." << endl;
    }

    void prescribeMedication() {
        cout << "Prescribing medication for inpatient " << name << "." << endl;
    }

    int generateBedNumber() {
        static int nextBedNumber = 101;
        return nextBedNumber++;
    }
};

class OutPatient : public Patient {
public:
    OutPatient(string name, int age, string illness) : Patient(name, age, illness) {}
    
    void assignBed() {
        cout << "OutPatients do not require a bed assignment." << endl;
    }

    void prescribeMedication() {
        cout << "Prescribing medication for outpatient " << name << "." << endl;
    }
};


int main() {
    InPatient inPatient("Jigar", 45, "Appendicitis");
    OutPatient outPatient("Rajesh", 30, "Flu");

    inPatient.assignBed();
    inPatient.prescribeMedication();

    cout << endl;

    outPatient.assignBed();
    outPatient.prescribeMedication();

    return 0;
}