#include <iostream>
#include <fstream>
using namespace std;

int main(int count, char* args[]){

    ifstream file(args[1]);
    ifstream result_file(args[2]);

    string magic;
    int width, height, gray;

    file >> magic >> width >> height >> gray;

    int ** pixels = new int* [height];
    for(int i = 0; i < height; i ++){
        pixels[i] = new int[width];
    }

    for(int i = 0; i < height; i ++){
        for(int j = 0; j < width; j++){
            file >> pixels[i][j];
        }
    }

    //cout << width << " x " << height << endl;

    //for(int i = 0; i < height; i ++){
    //    for(int j = 0; j < width; j++){
    //        cout << pixels[i][j] << " ";
    //    }
    //    cout << endl;
    //}


    for(int i = 0; i < height; i++){
        delete[] pixels[i];
    }
    delete[] pixels;

    return 0;
}