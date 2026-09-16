#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 28 member(s).
namespace walkable {
class scalar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?compare@scalar@walkable@@QEBAHAEBV12@@Z
    int compare(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_bond_type@scalar@walkable@@QEBA?AW4BondDataType@3_bond_enumerators@bond@@XZ
    int get_bond_type() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_bool@scalar@walkable@@QEBA_NXZ
    bool get_bool() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_double@scalar@walkable@@QEBANXZ
    double get_double() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_float@scalar@walkable@@QEBAMXZ
    float get_float() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_int16@scalar@walkable@@QEBAFXZ
    short get_int16() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_int32@scalar@walkable@@QEBAHXZ
    int get_int32() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_int64@scalar@walkable@@QEBA_JXZ
    int64_t get_int64() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_int8@scalar@walkable@@QEBACXZ
    signed char get_int8() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_string@scalar@walkable@@QEBAPEBDXZ
    char const * get_string() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_uint16@scalar@walkable@@QEBAGXZ
    unsigned short get_uint16() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_uint32@scalar@walkable@@QEBAIXZ
    unsigned int get_uint32() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_uint64@scalar@walkable@@QEBA_KXZ
    uint64_t get_uint64() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_uint8@scalar@walkable@@QEBAEXZ
    unsigned char get_uint8() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_wstring@scalar@walkable@@QEBAPEBGXZ
    unsigned short const * get_wstring() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?make@scalar@walkable@@SA?AV12@N@Z
    static WindissectOpaque make(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make@scalar@walkable@@SA?AV12@_J@Z
    static WindissectOpaque make(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make@scalar@walkable@@SA?AV12@C@Z
    static WindissectOpaque make(signed char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make@scalar@walkable@@SA?AV12@_K@Z
    static WindissectOpaque make(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make@scalar@walkable@@SA?AV12@H@Z
    static WindissectOpaque make(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make@scalar@walkable@@SA?AV12@F@Z
    static WindissectOpaque make(short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_default@scalar@walkable@@SA?AV12@AEBUMetadata@bond@@W4BondDataType@5_bond_enumerators@4@@Z
    static WindissectOpaque make_default(WindissectOpaque const &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1scalar@walkable@@QEAA@XZ
    ~scalar();
};
} // namespace walkable
