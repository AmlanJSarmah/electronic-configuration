#include <iostream>
#include <vector>
using namespace std;
int find_atomic_number(string element);
void print_config_from_vector(string element,vector<int> config,int atomic_number);
vector<int> shell_to_pseudo_orbital_structure(vector<int> config,int atomic_number);
