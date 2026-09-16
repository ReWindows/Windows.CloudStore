#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 152 member(s).
namespace bond {
class detail {
public:
    class RecursionGuard;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?checked_add@detail@bond@@YAPEBDPEBDI@Z
    char const * checked_add(char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?schema_depth@detail@bond@@YAGAEBVRuntimeSchema@2@@Z
    unsigned short schema_depth(WindissectOpaque const &);
};
} // namespace bond
