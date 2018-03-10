//
// Created by George on 10-Mar-18.
//
#pragma once

#include <boost/shared_ptr.hpp>
#include types.cpp

namespace debug {
    class chatParticipant {
    public:
        virtual ~chatParticipant() {}
        virtual void deliver(const chatParticipant msg) = 0;
    };

    typedef boost::shared_ptr<chatParticipant> chatPart;
}