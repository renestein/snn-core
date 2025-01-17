// Copyright (c) 2022 Mikael Simonsson <https://mikaelsimonsson.com>.
// SPDX-License-Identifier: BSL-1.0

// This file is generated, DO NOT EDIT MANUALLY.

// IANA Time Zone Database (public domain).

#pragma once

#include "snn-core/array.hh"
#include "snn-core/country/code.hh"
#include "snn-core/time/zone/offset.hh"
#include "snn-core/time/zone/transition.hh"
#include "snn-core/time/zone/db/entry.hh"

namespace snn::time::zone::db::asia
{
    // clang-format off

    namespace detail::omsk
    {
        inline constexpr array<country::code, 1> country_codes{
            "RU",
        };

        inline constexpr array<zone::offset, 11> offsets{{
            {"LMT", 17610, false},
            {"+05", 18000, false},
            {"+07", 25200, true},
            {"+06", 21600, false},
            {"+06", 21600, false},
            {"+07", 25200, true},
            {"+06", 21600, true},
            {"+05", 18000, false},
            {"+07", 25200, false},
            {"+07", 25200, true},
            {"+06", 21600, false},
        }};

        inline constexpr array<zone::transition, 66> transitions{{
            {1, -1582088010},
            {3, -1247547600},
            {2, 354909600},
            {3, 370717200},
            {2, 386445600},
            {3, 402253200},
            {2, 417981600},
            {3, 433789200},
            {2, 449604000},
            {4, 465336000},
            {5, 481060800},
            {4, 496785600},
            {5, 512510400},
            {4, 528235200},
            {5, 543960000},
            {4, 559684800},
            {5, 575409600},
            {4, 591134400},
            {5, 606859200},
            {4, 622584000},
            {5, 638308800},
            {4, 654638400},
            {6, 670363200},
            {7, 686091600},
            {4, 695768400},
            {5, 701812800},
            {4, 717537600},
            {5, 733262400},
            {4, 748987200},
            {5, 764712000},
            {4, 780436800},
            {5, 796161600},
            {4, 811886400},
            {5, 828216000},
            {4, 846360000},
            {5, 859665600},
            {4, 877809600},
            {5, 891115200},
            {4, 909259200},
            {5, 922564800},
            {4, 941313600},
            {5, 954014400},
            {4, 972763200},
            {5, 985464000},
            {4, 1004212800},
            {5, 1017518400},
            {4, 1035662400},
            {5, 1048968000},
            {4, 1067112000},
            {5, 1080417600},
            {4, 1099166400},
            {5, 1111867200},
            {4, 1130616000},
            {5, 1143316800},
            {4, 1162065600},
            {5, 1174766400},
            {4, 1193515200},
            {5, 1206820800},
            {4, 1224964800},
            {5, 1238270400},
            {4, 1256414400},
            {5, 1269720000},
            {4, 1288468800},
            {8, 1301169600},
            {4, 1414263600},
            {4, 2147483647},
        }};
    }

    inline constexpr db::entry omsk{"Asia/Omsk",
                                    "MSK+03 - Omsk",
                                    "+5500+07324",
                                    detail::omsk::country_codes,
                                    detail::omsk::offsets,
                                    detail::omsk::transitions};

    // clang-format on
}
