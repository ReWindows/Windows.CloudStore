#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 1 member(s).
namespace Windows::Internal::Storage::Cloud::Policy {
class GroupPolicyImpl {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupPolicyStateForSyncGroup@GroupPolicyImpl@Policy@Cloud@Storage@Internal@Windows@@AEAA_NAEBU_GUID@@0@Z
    bool GetGroupPolicyStateForSyncGroup(_GUID const &, _GUID const &);
};
} // namespace Windows::Internal::Storage::Cloud::Policy
