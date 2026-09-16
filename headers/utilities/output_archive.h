#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 25 member(s).
namespace tson {
class output_archive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finishNode@output_archive@tson@@QEAAXXZ
    void finishNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?saveValue@output_archive@tson@@QEAAXI@Z
    void saveValue(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?saveValue@output_archive@tson@@QEAAXH@Z
    void saveValue(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?saveValue@output_archive@tson@@QEAAXK@Z
    void saveValue(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?startNode@output_archive@tson@@QEAAXXZ
    void startNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z
    void write_string_bytes(uint64_t, void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z
    bool write_type(bool, int);
};
} // namespace tson
