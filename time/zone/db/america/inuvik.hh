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

    namespace detail::inuvik
    {
        inline constexpr array<country::code, 1> country_codes{
            "CA",
        };

        inline constexpr array<zone::offset, 5> offsets{{
            {"-00", 0, false},
            {"PDDT", -21600, true},
            {"PST", -28800, false},
            {"MST", -25200, false},
            {"MDT", -21600, true},
        }};

        inline constexpr array<zone::transition, 120> transitions{{
            {2, -536457600},
            {1, -147888000},
            {2, -131558400},
            {3, 294228000},
            {4, 325674000},
            {3, 341395200},
            {4, 357123600},
            {3, 372844800},
            {4, 388573200},
            {3, 404899200},
            {4, 420022800},
            {3, 436348800},
            {4, 452077200},
            {3, 467798400},
            {4, 483526800},
            {3, 499248000},
            {4, 514976400},
            {3, 530697600},
            {4, 544611600},
            {3, 562147200},
            {4, 576061200},
            {3, 594201600},
            {4, 607510800},
            {3, 625651200},
            {4, 638960400},
            {3, 657100800},
            {4, 671014800},
            {3, 688550400},
            {4, 702464400},
            {3, 720000000},
            {4, 733914000},
            {3, 752054400},
            {4, 765363600},
            {3, 783504000},
            {4, 796813200},
            {3, 814953600},
            {4, 828867600},
            {3, 846403200},
            {4, 860317200},
            {3, 877852800},
            {4, 891766800},
            {3, 909302400},
            {4, 923216400},
            {3, 941356800},
            {4, 954666000},
            {3, 972806400},
            {4, 986115600},
            {3, 1004256000},
            {4, 1018170000},
            {3, 1035705600},
            {4, 1049619600},
            {3, 1067155200},
            {4, 1081069200},
            {3, 1099209600},
            {4, 1112518800},
            {3, 1130659200},
            {4, 1143968400},
            {3, 1162108800},
            {4, 1173603600},
            {3, 1194163200},
            {4, 1205053200},
            {3, 1225612800},
            {4, 1236502800},
            {3, 1257062400},
            {4, 1268557200},
            {3, 1289116800},
            {4, 1300006800},
            {3, 1320566400},
            {4, 1331456400},
            {3, 1352016000},
            {4, 1362906000},
            {3, 1383465600},
            {4, 1394355600},
            {3, 1414915200},
            {4, 1425805200},
            {3, 1446364800},
            {4, 1457859600},
            {3, 1478419200},
            {4, 1489309200},
            {3, 1509868800},
            {4, 1520758800},
            {3, 1541318400},
            {4, 1552208400},
            {3, 1572768000},
            {4, 1583658000},
            {3, 1604217600},
            {4, 1615712400},
            {3, 1636272000},
            {4, 1647162000},
            {3, 1667721600},
            {4, 1678611600},
            {3, 1699171200},
            {4, 1710061200},
            {3, 1730620800},
            {4, 1741510800},
            {3, 1762070400},
            {4, 1772960400},
            {3, 1793520000},
            {4, 1805014800},
            {3, 1825574400},
            {4, 1836464400},
            {3, 1857024000},
            {4, 1867914000},
            {3, 1888473600},
            {4, 1899363600},
            {3, 1919923200},
            {4, 1930813200},
            {3, 1951372800},
            {4, 1962867600},
            {3, 1983427200},
            {4, 1994317200},
            {3, 2014876800},
            {4, 2025766800},
            {3, 2046326400},
            {4, 2057216400},
            {3, 2077776000},
            {4, 2088666000},
            {3, 2109225600},
            {4, 2120115600},
            {3, 2140675200},
        }};
    }

    inline constexpr db::entry inuvik{"America/Inuvik",
                                      "Mountain - NT (west)",
                                      "+682059-1334300",
                                      detail::inuvik::country_codes,
                                      detail::inuvik::offsets,
                                      detail::inuvik::transitions};

    // clang-format on
}
