// Project2 ABCU.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
//declare internal structures
struct Course {
    string courseNum;
    string courseName;
    vector<string>prereq;
};

int numPrerequisitecourses(Tree<Course> courses) {
//print left and right child of node c
    totalPrereq = left->right->node * c;
    for (prereq c in totalPrereq) {
        c->data.prereq=course.prereq
    }
    cout << "Total Prerequisites: " << totalPrereq;
}
void printSampleSchedule(Tree<course> courses) {
    //for all nodes of courses
    for (courses in courses) {
        //print course name
        cout << courseName << endl;
        if (node * ->left) {
            cout << "Prerequisite: " << prereq << endl;// print left node of prereq
        }
        if (node * ->right) {
            cout << "Prerequisite: " << prereq << endl;// pring right node of prereq
        }
    }
}
void loadCourse(string csvPath, BinarySearchTree* bst) {//load csv file
    cout << "Loading CSV file" << csvPath << endl;
    //initialize csv parser given path
    csv::Parser file = csv::Parser(csvPath);
    vector<string>header = file.getHeader();
    for (auto const& c : header) {
        cout << c << "|";
    }
    cout << "" << endl;

}
void printCourseInfo(Tree<course> courses, String courseNum) {
    for (nodes != nullptr) {//as long as nodes aren't empty
        if (course == courseNum) {
            cout << node * << endl;
        }
        if (course < courseNum) {//print left node
            cout << data->left << endl;
        }
        if (course > courseNUm) {//print right node
            cout << data->right << endl;
        }
        break;
    }
}

void printAlphaNumeric(Tree<course> courses, string course) {
    std::sort(files.begin(), files.end().compareNat)//compare nodes
        for (int i = 0, i < (int)files.size(); i++) {//increment size
            std::cout << files[i] + "\n"
                return;
        }
}

int main(int argc, char* argv[]) {
    std::vector<std::string>files;//increment through file until EOF
    if (file != EOF) {
        files.push_back(course)
    }
    else {
        break;
    }
    
    int choice = 0;
    //display menu
    while (choice != 0) {
        cout << "Welcome to Course planner:" << endl;
        cout << endl;
        cout << "1. Load Data structure." << endl;
        cout << "2. Print Course List" << endl;
        cout << "3. Print Course" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: " << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            bst = new BinarySearchTree();
            loadCourse(csvPath, bst);
            cout << courses << endl;
            break;
        case 2:
            bst->InOrder();
            break;
        case 3:
            for (nodes != nullptr) {
                if (course == courseNum) {
                    cout << courseInfo << endl;
                }
                if (course < courNum) {
                    inOrder(root->left);
                    cout << root->data;
                }
                if (course > courseNum) {
                    inOrder(root->right);
                    cout << root->data;
                    }
                beak;
                else {
                    if (node == root) {
                        root->left = currNode;
                    }
                    else {
                        root->right = currNode;
                    }
                }
            }
        case 0:
            if choice == 0;
            cout << "Goodbye" << endl;
            break;
        }
        

    }
    return 0;
}