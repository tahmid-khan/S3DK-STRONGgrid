/*
*  Common.cpp
*
*  Copyright (C) 2017 Luigi Vanfretti
*
*  This file is part of StrongridDLL.
*
*  StrongridDLL is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  StrongridDLL is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with StrongridDLL.  If not, see <http://www.gnu.org/licenses/>.
*
*/

#ifdef _WIN32
#	include <Windows.h>
#endif
#include "common.h"
#include <ctime>        // std::gmtime, std::mktime, std::time_t, std::tm

using namespace strongridbase;

std::tm TimeConversionHelper::SecondsSinceEpochToDateTime(uint64_t SecondsSinceEpoch)
{
	return *std::gmtime(reinterpret_cast<std::time_t*>(&SecondsSinceEpoch));
}

uint32_t TimeConversionHelper::GetSocByDateTime(const std::tm* tms)
{
	return std::mktime(const_cast<std::tm*>(tms));
}
