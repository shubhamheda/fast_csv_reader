#include <boost/python.hpp>
#include "CSVReader.h"

BOOST_PYTHON_MODULE(hello_ext) {
    using namespace boost::python;
    class_<CSVReader>("Reader", init<std::string>())
            .def("get_filename", &CSVReader::get_filename)
            ;
}
