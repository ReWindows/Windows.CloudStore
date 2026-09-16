#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 12 member(s).
class GetReferencesCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterField@GetReferencesCallback@@UEAAXPEBUMetadata@bond@@W4BondDataType@4_bond_enumerators@3@G@Z
    virtual void EnterField(WindissectOpaque const *, int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterList@GetReferencesCallback@@UEAAXAEBVRuntimeSchema@bond@@_K@Z
    virtual void EnterList(WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterMap@GetReferencesCallback@@UEAAXW4BondDataType@2_bond_enumerators@bond@@AEBVRuntimeSchema@4@_K@Z
    virtual void EnterMap(int, WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterSet@GetReferencesCallback@@UEAAXW4BondDataType@2_bond_enumerators@bond@@_K@Z
    virtual void EnterSet(int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterStructure@GetReferencesCallback@@UEAAXAEBVRuntimeSchema@bond@@_N@Z
    virtual void EnterStructure(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveField@GetReferencesCallback@@UEAAXPEBUMetadata@bond@@W4BondDataType@4_bond_enumerators@3@G@Z
    virtual void LeaveField(WindissectOpaque const *, int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveList@GetReferencesCallback@@UEAAXAEBVRuntimeSchema@bond@@_K@Z
    virtual void LeaveList(WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveMap@GetReferencesCallback@@UEAAXW4BondDataType@2_bond_enumerators@bond@@AEBVRuntimeSchema@4@_K@Z
    virtual void LeaveMap(int, WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveSet@GetReferencesCallback@@UEAAXW4BondDataType@2_bond_enumerators@bond@@_K@Z
    virtual void LeaveSet(int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveStructure@GetReferencesCallback@@UEAAXAEBVRuntimeSchema@bond@@_N@Z
    virtual void LeaveStructure(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScalarFound@GetReferencesCallback@@UEAAXAEBUtagPROPVARIANT@@@Z
    virtual void ScalarFound(tagPROPVARIANT const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetReferencesCallback@@QEAA@XZ
    ~GetReferencesCallback();
};
