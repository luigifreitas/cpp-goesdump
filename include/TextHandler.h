#ifndef _TEXTHANDLER_H_
#define _TEXTHANDLER_H_

#include <string>
#include <iostream>
#include "XRITHeader.h"
#include "Tools.h"

using namespace std;
namespace GOESDump {
    class TextHandler {
        private: 

        public:
            TextHandler() {}

            void HandleFile(string filename, string outputFolder);
            void ProcessFile(string file, XRITHeader header, string outputFolder);
    }; 
}

#endif