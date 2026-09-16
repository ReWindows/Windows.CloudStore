#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 19 member(s).
class schematized_data {
public:
    class state;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_blob@schematized_data@@QEBAAEBVblob@bond@@XZ
    WindissectOpaque const & as_blob() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_walkable@schematized_data@@QEBAAEBVstructure@walkable@@XZ
    WindissectOpaque const & as_walkable() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?compare@schematized_data@@QEBAHAEBV1@@Z
    int compare(schematized_data const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_content@schematized_data@@QEBAPEBDXZ
    char const * get_content() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_length@schematized_data@@QEBAIXZ
    unsigned int get_length() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?has_blob@schematized_data@@QEBA_NXZ
    bool has_blob() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?has_fbData@schematized_data@@QEBA_NXZ
    bool has_fbData() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0schematized_data@@QEAA@AEBVRuntimeSchema@bond@@AEBVblob@2@@Z
    schematized_data(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0schematized_data@@QEAA@AEBVRuntimeSchema@bond@@$$QEAVstructure@walkable@@@Z
    schematized_data(WindissectOpaque const &, WindissectOpaque &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0schematized_data@@QEAA@AEBV0@@Z
    schematized_data(schematized_data const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0schematized_data@@QEAA@AEBVRuntimeSchema@bond@@@Z
    schematized_data(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0schematized_data@@QEAA@PEBUSchema@reflection@@@Z
    schematized_data(::reflection::Schema const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1schematized_data@@QEAA@XZ
    ~schematized_data();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_blob_no_lock@schematized_data@@AEBAAEBVblob@bond@@XZ
    WindissectOpaque const & as_blob_no_lock() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?as_walkable_no_lock@schematized_data@@AEBAAEBVstructure@walkable@@XZ
    WindissectOpaque const & as_walkable_no_lock() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ensure_default@schematized_data@@AEBAXXZ
    void ensure_default() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?propagate_default_state@schematized_data@@CAXPEAUstate@1@AEBU21@_N@Z
    static void propagate_default_state(WindissectOpaque *, WindissectOpaque const &, bool);
};
