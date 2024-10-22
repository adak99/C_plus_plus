#include <iostream>
#include <string>
using namespace std;

class Engineer
{
protected:
    string engineeringStream;
    string projectCode;
    float totalSalary;

public:
    Engineer(string stream, string code, float salary)
    {
        engineeringStream = stream;
        projectCode = code;
        totalSalary = salary;
    }

    virtual void displayDetails()
    {
        cout << "Engineering Stream: " << engineeringStream << endl;
        cout << "Project Code: " << projectCode << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    float calculateEngineeringIncentive(float responsibility)
    {
        return (responsibility / 100) * 9000;
    }
};

class MBA
{
protected:
    int catScore;
    string mbaInstitute;
    string specialization;

public:
    MBA(int score, string institute, string spec)
    {
        catScore = score;
        mbaInstitute = institute;
        specialization = spec;
    }

    virtual void displayDetails()
    {
        cout << "CAT Score: " << catScore << endl;
        cout << "MBA Institute: " << mbaInstitute << endl;
        cout << "Specialization: " << specialization << endl;
    }

    float calculateManagementIncentive(float responsibility)
    {
        return (responsibility / 100) * 10000;
    }
};

class EngineerMBA : public Engineer, public MBA
{
private:
    float engineeringResponsibility;
    float managementResponsibility;

public:
    EngineerMBA(string stream, string code, float salary, int score, string institute,
                string spec, float engResponsibility, float manResponsibility)
        : Engineer(stream, code, salary), MBA(score, institute, spec)
    {
        engineeringResponsibility = engResponsibility;
        managementResponsibility = manResponsibility;
    }

    void displayDetails() override
    {
        Engineer::displayDetails();
        MBA::displayDetails();

        float engIncentive = calculateEngineeringIncentive(engineeringResponsibility);
        float manIncentive = calculateManagementIncentive(managementResponsibility);
        float grandTotal = totalSalary + engIncentive + manIncentive;

        cout << "Engineering Incentive: " << engIncentive << " [" << engineeringResponsibility << "% of Rs. 9000]" << endl;
        cout << "Management Incentive: " << manIncentive << " [" << managementResponsibility << "% of Rs. 10000]" << endl;
        cout << "Grand Total Salary: " << grandTotal << endl;
    }
};

int main()
{
    string engineeringStream, projectCode;
    float totalSalary;
    int catScore;
    string mbaInstitute, specialization;
    float engineeringResponsibility, managementResponsibility;

    cout << "Enter Engineering Stream: ";
    getline(cin, engineeringStream);
    cout << "Enter Project Code: ";
    getline(cin, projectCode);
    cout << "Enter Total Salary: ";
    cin >> totalSalary;

    cout << "Enter CAT Score: ";
    cin >> catScore;
    cin.ignore();
    cout << "Enter MBA Institute: ";
    getline(cin, mbaInstitute);
    cout << "Enter Specialization: ";
    getline(cin, specialization);

    cout << "Enter Engineering Responsibility (%): ";
    cin >> engineeringResponsibility;
    cout << "Enter Management Responsibility (%): ";
    cin >> managementResponsibility;

    EngineerMBA candidate(engineeringStream, projectCode, totalSalary, catScore,
                          mbaInstitute, specialization, engineeringResponsibility, managementResponsibility);

    cout << endl
         << "Candidate Details:" << endl;
    candidate.displayDetails();

    return 0;
}
