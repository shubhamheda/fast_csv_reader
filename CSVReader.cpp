//
// Created by lyderx on 16/01/19.
//

#include "CSVReader.h"
#include <fstream>
#include <iostream>
#include <boost/algorithm/string.hpp>
#include <boost/filesystem.hpp>

using namespace boost;
using namespace std;

CSVReader::CSVReader(std::string filepath): filepath(std::move(filepath)) {
    //this->filename = std::move(filename);
    std::fstream fileread(this->filename);
    if (fileread.is_open()){
        std::string data;
        while(getline(fileread, data))
            std::cout << data << std::endl;
    }
}

string CSVReader::get_filename() {
    /* Get Filename in a given path*/
    vector<string> list_data;
    if (is_file()) {
        split(list_data, filepath, is_any_of("/"));
        string filename_with_ext = list_data.back();
        list_data.clear();
        split(list_data, filename_with_ext, is_any_of("."));
        filename = list_data.front();
        extension = list_data.back();
        return filename;
    }
    return nullptr;
}

bool CSVReader::is_file() {
    /*Check file path is a regular file or not*/
    return filesystem::is_regular_file(filepath);
}

bool CSVReader::is_dir() {
    /* Check given file path is a directory or not */
    return filesystem::is_directory(filepath);
}

std::vector<string> CSVReader::get_filenames() {
    /* Get list of file names in a directory*/
    return vector<string>();
}

string CSVReader::get_file_extension() {
    // Returns the File extension
    return extension;
}

