#include<iostream>
using namespace std;

class User {
protected:
    string username;
    int followers;
    int posts;

public:
    User(string name, int numFollowers, int numPosts) : username(name), followers(numFollowers), posts(numPosts) {}

    void createPost() {
        posts++;
        cout << "Post created by " << username << endl;
    }

    void likePost() {
        cout << username << " liked a post." << endl;
    }

    void displayProfile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers << endl;
        cout << "Posts: " << posts << endl;
    }
};

class Influencer : public User {
public:
    Influencer(string name, int follows, int posts) : User(name, follows, posts) {}

    void promoteProduct() {
        cout << username << " promoted a product." << endl;
    }
};

class RegularUser : public User {
public:
    RegularUser(string name, int follows, int posts) : User(name, follows, posts) {}

    void commentOnPost() {
        cout << username << " commented on a post." << endl;
    }
};


int main() {
    User user("Dhruv", 100, 5);
    Influencer influencer("Technical Guruji", 10000, 20);
    RegularUser regularUser("Shrey", 10, 0);

    user.createPost();
    influencer.promoteProduct();
    regularUser.commentOnPost();

    cout << "\nUser Profile: " << endl;
    user.displayProfile();

    cout << "\nInfluencer Profile: " << endl;
    influencer.displayProfile();
    
    cout << "\nRegular User Profile: " << endl;
    regularUser.displayProfile();

    return 0;
}