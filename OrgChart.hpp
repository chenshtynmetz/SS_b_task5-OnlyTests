#include <string>
#include <iostream>
#include <vector>

namespace ariel{
    class OrgChart{
        private:
            typedef struct Node{
                std::string name;
                std::vector<std::string> sons;
                Node* prev;
                Node* next;
            }node, *pnode;
        public:
            //constructor
            OrgChart();
            //destructor
            ~OrgChart();
            //add root to the orgchart
            OrgChart& add_root(std::string name);
            //add son to node
            OrgChart& add_sub(std::string name1, std::string name2);
            // ostream operator
            friend std::ostream& operator<<(std::ostream& os, const OrgChart& chart);
            //level order iterator
            class level_order{
                private:
                    // Node* root;
                    pnode head;
                    // std::string *curr;
                public:
                    //constructor
                    level_order();
                    //add destructor?
                    // != operator
                    bool operator!=(const level_order& lo)const;
                    //== operator
                    bool operator==(const level_order& lo)const;
                    //++ operator
                    level_order& operator++();
                    // = operator
                    level_order operator=(level_order& lo);
                    // * operator
                    friend level_order& operator*(level_order& lo);
                    // ostream operator
                    friend std::ostream& operator<<(std::ostream& os, const level_order& lo);

            };
            // return the start point
            std::string* begin_level_order(); //check if bacame all to string*
            // return the end point
            std::string* end_level_order();
            // reverse order iterator
            class reversee_order{
                private:
                    // Node* root;
                    pnode head;
                    // std::string *curr;
                public:
                    // constructor
                    reversee_order();
                    //!= operator
                    bool operator!=(const reversee_order& lo)const;
                    //== operator
                    bool operator==(const reversee_order& lo)const;
                    //++ operator
                    reversee_order& operator++();
                    // = operator
                    reversee_order operator=(reversee_order& lo);
                    //* operator
                    friend reversee_order& operator*(reversee_order& lo);
                    // ostream operator
                    friend std::ostream& operator<<(std::ostream& os, const reversee_order& lo);

            };
            // return the start point
            std::string* begin_reverse_order();
            // return the end point
            std::string* reverse_order(); //add end
            //preorder iterator
            class preorder{
                private:
                    // Node* root;
                    pnode head;
                    // std::string *curr;
                public:
                    //constructor
                    preorder();
                    // != operator
                    bool operator!=(const preorder& pr)const;
                    // == operator
                    bool operator==(const preorder& pr)const;
                    // ++ operator
                    preorder& operator++();
                    // = operator
                    preorder operator=(preorder& pr);
                    // * operator
                    friend preorder& operator*(preorder& pr);
                    // ostream operator
                    friend std::ostream& operator<<(std::ostream& os, const preorder& pr);
            };
            // return the start point
            std::string* begin_preorder();
            // return the end point
            std::string* end_preorder();
            // return the start point
            // int* begin();
            // return the end point
            // int* end();
            std::string* begin();
            std::string* end();
    };
}