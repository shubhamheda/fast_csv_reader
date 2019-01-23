#include <utility>

//
// Created by lyderx on 16/01/19.
//

#ifndef UNTITLED_CSVREADER_H
#define UNTITLED_CSVREADER_H
#include <string>
#include <vector>


using namespace std;
class CSVReader {

private:
    std::string filename;
    std::string filepath;
    string extension;


public:
    CSVReader(std::string filepath);
    std::string get_filename();
    bool is_dir();
    bool is_file();
    vector<string> get_filenames();
    string get_file_extension();

};


#endif //UNTITLED_CSVREADER_H
