#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {

    string directions = argv[1];
    string input = argv[2];
    
    int input_index = 0;
    char gate;
    
    vector<string> direction_path;
    
    while(input_index < input.length()){
        
        char x1 = directions[0];
        char x2 = directions[1];
        char x3 = directions[2];
        char x4 = directions[3];
        
        direction_path.push_back(directions);
        
        if(x1 == 'L'){
            //change x1 direction
            if(input[input_index] == '1'){
                directions[0] = 'C';
            }
            else{
                directions[0] = 'R';
            }
        
            if(x2 == 'L'){
                gate = 'B';
                directions[1] = 'R';
            }
            else{
                gate = 'C';
                directions[1] = 'L';
            }
        }
        else if(x1 == 'C'){
            //change x1 direction
            if(input[input_index] == '1'){
                directions[0] = 'R';
            }
            else{
                directions[0] = 'L';
            }
        
            if(x3 == 'L'){
                gate = 'C';
                directions[2] = 'R';
            }
            else{
                gate = 'D';
                directions[2] = 'L';
            }
        }
        else{
            //change x1 direction
            if(input[input_index] == '1'){
                directions[0] = 'L';
            }
            else{
                directions[0] = 'C';
            }
        
        
            if(x4 == 'L'){
                gate = 'D';
                directions[3] = 'R';
            }
            else{
                gate = 'E';
                directions[3] = 'L';
            }
        }

        input_index++;
    }

    direction_path.push_back(directions);
    
    for(int i = 0; i < direction_path.size()-1; i++){
        cout << direction_path[i] << "->";
    }
    
    cout << direction_path[direction_path.size()-1] << " " << gate << endl;
    
}