
for(std::vector<int>::iterator it = vec.begin(); i != vec.end(); ++it) {
    total += *it;
}
  
for(auto val : vec) {
    total += val;
}


std::vector<int>::iterator it = vec.begin();
for(; it != vec.end(); ++it) {
    if(*it > x && *it < y) {
        break;
    }
}


auto it = find_if(begin(vec), end(vec), [=](int val) {return val > x && val < y;});
