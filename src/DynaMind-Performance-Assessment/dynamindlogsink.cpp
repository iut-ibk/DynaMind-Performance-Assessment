/**
 * CityDrain3 is an open source software for modelling and simulating integrated 
 * urban drainage systems.
 * 
 * Copyright (C) 2012 Michael Mair
 * 
 * This program is free software; you can redistribute it and/or modify it under 
 * the terms of the GNU General Public License as published by the Free Software 
 * Foundation; version 2 of the License.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY 
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A 
 * PARTICULAR PURPOSE. See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along with 
 * this program; if not, write to the Free Software Foundation, Inc., 51 Franklin 
 * Street, Fifth Floor, Boston, MA 02110-1301, USA.
 **/

#include "dynamindlogsink.h"

DynaMindStreamLogSink::DynaMindStreamLogSink(DM::LogSink &ostream) : out(ostream) {

}

LogSink &DynaMindStreamLogSink::operator<<(const std::string &s) {
	out << s;
	return *this;
}

LogSink &DynaMindStreamLogSink::operator<<(const char *s) {
	out << s;
	return *this;
}

LogSink &DynaMindStreamLogSink::operator<<(int i) {
	out << i;
	return *this;
}

LogSink &DynaMindStreamLogSink::operator<<(LSEndl e) {
    out << "\n";
	return *this;
}
