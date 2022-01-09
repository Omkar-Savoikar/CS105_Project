/*
    AUTHOR: MCA.2104
    PROGRAM: PROJECT
    DATE CREATED: 18 NOV 2021
    DATE MODIFIED: 29 DEC 2021
*/
//DS Designer
#ifndef EMPLOYEE
    #define EMPLOYEE

    typedef struct salary salstr;
    typedef struct employee empstr;
    typedef struct list listNd; //list of employees
    typedef struct empNode empNd;

    struct salary{
        float basicPay;
        float HRA; //20%
        float DA; //20%
        float TA; //20%
        float PA; //20%
        float bonus;
        float total;
    };

    struct employee{
        int empID;
        char name[40];
        char address[100];
        char department[20];
        struct salary sal;
        char prjAssigned[100];
        float salAdvance;
        float salLeft;
        int leavesTotal;
        int leavesTaken;
        int leavesLeft;
    };
    
    struct list{
        int empCount;
        int eID;
        struct empNode *firstEmp;
    };

    struct empNode{
        struct employee emp;
        struct empNode *nextEmp;
    };

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    listNd* createList();

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    float calcSal(listNd *list, int empID);
    
    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    empNd* insertEmployee(listNd *list, empstr emp);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    void refresh(listNd *list);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    int grantBonus(listNd *list, int empID, float bonus);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    int advanceSal(listNd *list, int empID, float sal);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    int grantLeave(listNd *list, int empID, int leave);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    int displayEmployee(listNd *list, int empID);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    void displayAllEmployees(listNd *list);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    int deleteEmployee(listNd* list, int ID);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    void destroyList(listNd *list);
#endif