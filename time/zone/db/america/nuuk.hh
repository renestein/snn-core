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

namespace snn::time::zone::db::america
{
    // clang-format off

    namespace detail::nuuk
    {
        inline constexpr array<country::code, 1> country_codes{
            "GL",
        };

        inline constexpr array<zone::offset, 5> offsets{{
            {"LMT", -12416, false},
            {"-03", -10800, false},
            {"-03", -10800, false},
            {"-02", -7200, true},
            {"-02", -7200, true},
        }};

        inline constexpr array<zone::transition, 118> transitions{{
            {1, -1686083584},
            {4, 323845200},
            {2, 338950800},
            {3, 354675600},
            {2, 370400400},
            {3, 386125200},
            {2, 401850000},
            {3, 417574800},
            {2, 433299600},
            {3, 449024400},
            {2, 465354000},
            {3, 481078800},
            {2, 496803600},
            {3, 512528400},
            {2, 528253200},
            {3, 543978000},
            {2, 559702800},
            {3, 575427600},
            {2, 591152400},
            {3, 606877200},
            {2, 622602000},
            {3, 638326800},
            {2, 654656400},
            {3, 670381200},
            {2, 686106000},
            {3, 701830800},
            {2, 717555600},
            {3, 733280400},
            {2, 749005200},
            {3, 764730000},
            {2, 780454800},
            {3, 796179600},
            {2, 811904400},
            {3, 828234000},
            {2, 846378000},
            {3, 859683600},
            {2, 877827600},
            {3, 891133200},
            {2, 909277200},
            {3, 922582800},
            {2, 941331600},
            {3, 954032400},
            {2, 972781200},
            {3, 985482000},
            {2, 1004230800},
            {3, 1017536400},
            {2, 1035680400},
            {3, 1048986000},
            {2, 1067130000},
            {3, 1080435600},
            {2, 1099184400},
            {3, 1111885200},
            {2, 1130634000},
            {3, 1143334800},
            {2, 1162083600},
            {3, 1174784400},
            {2, 1193533200},
            {3, 1206838800},
            {2, 1224982800},
            {3, 1238288400},
            {2, 1256432400},
            {3, 1269738000},
            {2, 1288486800},
            {3, 1301187600},
            {2, 1319936400},
            {3, 1332637200},
            {2, 1351386000},
            {3, 1364691600},
            {2, 1382835600},
            {3, 1396141200},
            {2, 1414285200},
            {3, 1427590800},
            {2, 1445734800},
            {3, 1459040400},
            {2, 1477789200},
            {3, 1490490000},
            {2, 1509238800},
            {3, 1521939600},
            {2, 1540688400},
            {3, 1553994000},
            {2, 1572138000},
            {3, 1585443600},
            {2, 1603587600},
            {3, 1616893200},
            {2, 1635642000},
            {3, 1648342800},
            {2, 1667091600},
            {3, 1679792400},
            {2, 1698541200},
            {3, 1711846800},
            {2, 1729990800},
            {3, 1743296400},
            {2, 1761440400},
            {3, 1774746000},
            {2, 1792890000},
            {3, 1806195600},
            {2, 1824944400},
            {3, 1837645200},
            {2, 1856394000},
            {3, 1869094800},
            {2, 1887843600},
            {3, 1901149200},
            {2, 1919293200},
            {3, 1932598800},
            {2, 1950742800},
            {3, 1964048400},
            {2, 1982797200},
            {3, 1995498000},
            {2, 2014246800},
            {3, 2026947600},
            {2, 2045696400},
            {3, 2058397200},
            {2, 2077146000},
            {3, 2090451600},
            {2, 2108595600},
            {3, 2121901200},
            {2, 2140045200},
            {2, 2147483647},
        }};
    }

    inline constexpr db::entry nuuk{"America/Nuuk",
                                    "Greenland (most areas)",
                                    "+6411-05144",
                                    detail::nuuk::country_codes,
                                    detail::nuuk::offsets,
                                    detail::nuuk::transitions};

    // clang-format on
}
