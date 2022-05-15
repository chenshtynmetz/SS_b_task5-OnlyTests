#include "OrgChart.hpp"
#include <string>

namespace ariel{
    std::string s = "hi"; //for compiler
    OrgChart::OrgChart(){
        
    }
    OrgChart& OrgChart::add_root(std::string name){
        return *this;
    }
    OrgChart& OrgChart::add_sub(std::string name1, std::string name2){
        return *this;
    }
    std::ostream& operator<<(std::ostream& os, const OrgChart& chart){
        return os;
    }
    OrgChart::level_order::level_order(){
        
    }
    bool OrgChart::level_order::operator!=(const level_order& lo)const{
        return true;
    }
    bool OrgChart::level_order::operator==(const level_order& lo)const{
        return true;
    }
    OrgChart::level_order& OrgChart::level_order::operator++(){
        return *this;
    }
    OrgChart::level_order OrgChart::level_order::operator=(level_order& lo){
        return lo;
    }
    OrgChart::level_order& operator*(OrgChart::level_order& lo){
        return lo;
    }
    std::ostream& operator<<(std::ostream& os, const OrgChart::level_order& lo){
        return os;
    }
    std::string* OrgChart::begin_level_order(){
        std::string *str = &s;
        return str;
    }
    std::string* OrgChart::end_level_order(){
        std::string *str = &s;
        return str;
    }
    OrgChart::reversee_order::reversee_order(){}
    bool OrgChart::reversee_order::operator!=(const reversee_order& ro)const{
        return true;
    }
    bool OrgChart::reversee_order::operator==(const reversee_order& ro)const{
        return true;
    }
    OrgChart::reversee_order& OrgChart::reversee_order::operator++(){
        return *this;
    }
    OrgChart::reversee_order OrgChart::reversee_order::operator=(OrgChart::reversee_order& ro){
        return ro;
    }
    OrgChart::reversee_order& operator*(OrgChart::reversee_order& ro){
        return ro;
    }
    std::ostream& operator<<(std::ostream& os, const OrgChart::reversee_order& ro){
        return os;
    }
    std::string* OrgChart::begin_reverse_order(){
        std::string *str = &s;
        return str;
    }
    std::string* OrgChart::reverse_order(){
        std::string *str = &s;
        return str;
    }
    OrgChart::preorder::preorder(){}
    bool OrgChart::preorder::operator!=(const preorder& pr)const{
        return true;
    }
    bool OrgChart::preorder::operator==(const preorder& pr)const{
        return true;
    }
    OrgChart::preorder& OrgChart::preorder::operator++(){
        return *this;
    }
    OrgChart::preorder OrgChart::preorder::operator=(preorder& pr){
        return pr;
    }
    OrgChart::preorder& operator*(OrgChart::preorder& pr){
        return pr;
    }
    std::ostream& operator<<(std::ostream& os, const OrgChart::preorder& pr){
        return os;
    }
    std::string* OrgChart::begin_preorder(){
        std::string *str = &s;
        return str;
    }
    std::string* OrgChart::end_preorder(){
        std::string *str = &s;
        return str;
    }
    int* OrgChart::begin(){
        int *a = NULL;
        return a;
    }
    int* OrgChart::end(){
        int *a = NULL;
        return a;
    }
    OrgChart::~OrgChart(){

    }
}