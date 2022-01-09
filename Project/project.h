/*
    AUTHOR: MCA.2104
    PROGRAM: PROJECT
    DATE CREATED: 18 NOV 2021
    DATE MODIFIED: 29 DEC 2021
*/
//DS Designer
#ifndef PROJECT
    #define PROJECT
    
    typedef struct project prjstr;
    typedef struct graphNode graphNd; //graph of projects
    typedef struct projectNode projectNd;
    typedef struct linkNode linkNd; //link to employees on the project

    struct project{
        int projectID;
        char projectName[50];
        char projectDescription[1000];
        int empCount;
    };
    
    struct graphNode{
        int prjCount;
        int pID;
        struct projectNode *firstProject;
    };

    struct projectNode{
        prjstr prj;
        struct projectNode *nextProject;
        struct linkNode *firstEmp;
    };

    struct linkNode{
        struct employee destination;
        struct linkNode *nextLink;
    };

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    graphNd* createGraph();

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    projectNd* insertProject(graphNd *graph, prjstr name);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    int addEmployee(graphNd *graph, int prjID, listNd *list, int empID);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    void displayAllProject(graphNd *graph);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    int displayProject(graphNd *graph, int prjID);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    int removeEmployee(graphNd *graph, int prjID, listNd *list, int empID);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    int deleteProject(graphNd* graph, int prjID, listNd *list);

    /*
        function name: 
        function: 
        input: 
        pre-condition: 
        output: 
        post-condition: 
    */
    void destroyGraph(graphNd *graph, listNd *list);
#endif