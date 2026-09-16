#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace boost::detail {
class sp_counted_base {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ref_copy@sp_counted_base@detail@boost@@QEAAXXZ
    void add_ref_copy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?destroy@sp_counted_base@detail@boost@@UEAAXXZ
    virtual void destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?release@sp_counted_base@detail@boost@@QEAAXXZ
    void release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0sp_counted_base@detail@boost@@QEAA@XZ
    sp_counted_base();
};
} // namespace boost::detail
