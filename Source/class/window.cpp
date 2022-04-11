#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class TextWindow {
   private:
    int _width;
    int _height;
    char _backgroundCharacter;
    string _scene;

    void generateScene() {
        for (int i = 0; i < _height; i++) {
            for (int j = 0; j < _width; j++) {
                _scene += _backgroundCharacter;
            }
            _scene += "\n";
        }
    }

   public:
    /* Construct that sets the default properties of the window class */
    TextWindow(int width, int height) {
        _width = width;
        _height = height;
        _backgroundCharacter = '#';
        _scene = "";
    }

    void UpdateWindow(){
        generateScene();
        ofstream Window("Window.txt");
        Window << _scene;
    }

    int getWidth() const { return _width; }
    int getHeight() const { return _height; }
};