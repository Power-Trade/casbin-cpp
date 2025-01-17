/*
* Copyright 2020 The casbin Authors. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "pch.h"

#ifndef SET_SUBSTRACT_CPP
#define SET_SUBSTRACT_CPP


#include <unordered_map>

#include "./util.h"

namespace casbin {

// SetSubtract returns the elements in `a` that aren't in `b`.
std::vector<std::string> SetSubtract(std::vector<std::string> a, std::vector<std::string> b) {
    std::unordered_map<std::string, bool> mb;

    for (int i = 0 ; i < b.size() ; i++)
        mb[b[i]] = true;

    std::vector<std::string> diff;
    for (int i = 0 ; i < a.size() ; i++)
        if (!mb[a[i]])
            diff.push_back(a[i]);
    return diff;
}

} // namespace casbin

#endif // SET_SUBSTRACT_CPP
