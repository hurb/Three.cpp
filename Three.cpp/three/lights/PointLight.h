//
//  PointLight.h
//  Three.cpp
//
//  Created by Saburo Okita on 02/07/14.
//  Copyright (c) 2014 Saburo Okita. All rights reserved.
//

#ifndef __Three_cpp__PointLight__
#define __Three_cpp__PointLight__

#include <iostream>

#include "Light.h"

namespace three {
    class PointLight : public Light {
    public:
        /** Constructors **/
        PointLight();
        PointLight( float intensity, float distance );
        PointLight( const PointLight& rhs );
        PointLight clone();
        ~PointLight();
    
        /* Data members */
        float intensity;
        float distance;
        
        
        /** Output stream overloading */
        friend std::ostream &operator <<( std::ostream& os, const PointLight& obj ) {
            os << "PointLight {" << std::endl;
            os << "\tintensity: " << obj.intensity << std::endl;
            os << "\tdistance : " << obj.distance  << std::endl;
            os << "}";
            return os;
        }
    };
}

#endif /* defined(__Three_cpp__PointLight__) */
