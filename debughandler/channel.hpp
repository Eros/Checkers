//
// Created by George on 10-Mar-18.
//

#pragma once
#include <string>
#include <set>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/thread/shared_mutex.hpp>
#include <boost/thread/locks.hpp>
#include "types.hpp"
#include "participant.hpp"
namespace debug {
    class channel {
    public:
        channel(const std::string & name, const std::string & title) : name_(name), title_(title) {}
            const std::string & GetTitle() const{ return title_; }
            const std::string & GetName() const {return name_; }

        bool join(const chatParticipantPtr & participantPtr){
            boost::unique_lock<boost::shared_mutex> lock(sync_);
            return participantPtr.insert(participantPtr).second;
        }
    };
}

