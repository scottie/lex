// Copyright (c) 2015-2017 The Bitcoin Core developers
// Copyright (c) 2017 The LEX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Functionality for communicating with LEXGate.
 */
#ifndef BITCOIN_LEXCONTROL_H
#define BITCOIN_LEXCONTROL_H

#include <string>

#include <boost/function.hpp>
#include <boost/chrono/chrono.hpp>
#include <boost/thread.hpp>

extern const std::string DEFAULT_LEX_CONTROL;
static const bool DEFAULT_LISTEN_ONION = true;

void StartLEXControl(boost::thread_group& threadGroup);
void InterruptLEXControl();
void StopLEXControl();

#endif /* BITCOIN_LEXCONTROL_H */


