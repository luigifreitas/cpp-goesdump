#ifndef _DCSFILENAMEHEADER_H
#define _DCSFILENAMEHEADER_H

#include <string>
#include "XRITBaseHeader.h"

using namespace std;
namespace GOESDump {
    struct DCSFilenameRecord {
        uint8_t type;
        uint16_t size;
        
        string Filename;
    };

    class DCSFilenameHeader: public XRITBaseHeader {
        public:
            string Filename;
            bool Init = false;
            
            DCSFilenameHeader(){}

            void Define(DCSFilenameRecord data) {
                Type = (HeaderType)132;
                Filename = data.Filename;
                Init = true;
            }
    };
}

#endif