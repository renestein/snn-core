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
#include "snn-core/time/zone/db/asia/nicosia.hh"

namespace snn::time::zone::db::europe
{
    // clang-format off

    namespace detail::nicosia
    {
        inline constexpr array<country::code, 1> country_codes{
            "CY",
        };
    }

    inline constexpr db::entry nicosia{"Europe/Nicosia",
                                       "Cyprus (most areas)",
                                       "+3510+03322",
                                       detail::nicosia::country_codes,
                                       asia::detail::nicosia::offsets,
                                       asia::detail::nicosia::transitions};

    // clang-format on
}
