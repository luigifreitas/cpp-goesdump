#ifndef _ANNOTATIONHEADER_H
#define _ANNOTATIONHEADER_H

#include <string>
#include "XRITBaseHeader.h"

using namespace std;
namespace GOESDump {
    struct AnnotationRecord {
        uint8_t type;
        uint16_t size;
        
        string Filename;
    };

    class AnnotationHeader: public XRITBaseHeader {
        public:
            string Filename;
            bool Init = false;

            AnnotationHeader() {}

            void Define(AnnotationRecord data) {
                Type = (HeaderType)4;
                Filename = data.Filename;
                Init = true;
            }
    };
}

#endif