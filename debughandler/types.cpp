//
// Created by George on 10-Mar-18.
//
#pragma once

#include <string>
#include <deque>
#include <boost/shared_ptr.hpp>
namespace debug {
    typedef boost::shared_ptr<std::string> message;
    typedef std::deque<message> messageQueue;
}