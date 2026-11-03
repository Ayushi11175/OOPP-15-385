
// Question 1 — Method Overloading
// Question:

// An authentication and alert service must send verification codes to users through different communication channels.

// Implement a class NotificationService that utilizes method overloading to provide a unified sendAlert() interface:

// sendAlert(long phoneNumber, int otp) for SMS dispatch.
// sendAlert(string email, string subject, string body) for Email dispatch.
// sendAlert(string deviceToken, string title, string payload, int priority) for Push Notifications.

// Write a program demonstrating the invocation of each overloaded method.
#include <iostream>
#include <string>
using namespace std;

class NotificationService {
public:

    // SMS
    void sendAlert(long phoneNumber, int otp) {
        cout << "SMS Notification" << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "OTP: " << otp << endl;
        cout << "SMS sent successfully!" << endl;
    }

    // Email
    void sendAlert(string email, string subject, string body) {
        cout << "\nEmail Notification" << endl;
        cout << "Email: " << email << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
        cout << "Email sent successfully!" << endl;
    }

    // Push Notification
    void sendAlert(string deviceToken, string title,
                   string payload, int priority) {
        cout << "\nPush Notification" << endl;
        cout << "Device Token: " << deviceToken << endl;
        cout << "Title: " << title << endl;
        cout << "Payload: " << payload << endl;
        cout << "Priority: " << priority << endl;
        cout << "Push notification sent successfully!" << endl;
    }
};

int main() {

    NotificationService notification;

    // Calling SMS version
    notification.sendAlert(9876543210L, 1234);

    // Calling Email version
    notification.sendAlert(
        "user@gmail.com",
        "Verification Code",
        "Your OTP is 1234"
    );

    // Calling Push Notification version
    notification.sendAlert(
        "ABC123TOKEN",
        "Login Verification",
        "Your OTP is 1234",
        1
    );

    return 0;
}