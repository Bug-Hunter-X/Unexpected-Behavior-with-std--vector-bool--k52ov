std::vector<bool> is not a true vector, and it often leads to unexpected performance and behavior.  It uses bit packing for space efficiency, but this can make operations like accessing individual elements slower and more complex than with std::vector<T> where T is not bool.  Additionally, iterators are not standard random-access iterators. This means algorithms expecting random-access iterators might not work as intended.