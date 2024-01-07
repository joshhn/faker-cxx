#pragma once

#include "../NameFormats.h"
#include "../PeopleNames.h"
#include "ThaiFirstNames.h"
#include "ThaiLastNames.h"
#include "ThaiPrefixes.h"

namespace faker
{
const NameFormats thaiPersonNameFormats{{{"{firstName} {lastName}", 99}, {"{prefix} {firstName} {lastName}", 1}}};

const PeopleNames thaiPeopleNames{{thaiMalesFirstNames, {}, thaiLastNames, thaiMalesPrefixes, {}},
                                     {thaiFemalesFirstNames, {}, thaiLastNames, thaiFemalesPrefixes, {}},
                                     thaiPersonNameFormats};

}
