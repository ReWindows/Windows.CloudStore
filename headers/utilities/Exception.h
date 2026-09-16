#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 6 member(s).
namespace bond {
class Exception {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Exception@bond@@QEAA@AEBV01@@Z
    Exception(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?what@Exception@bond@@UEBAPEBDXZ
    virtual char const * what() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Exception@bond@@UEAA@XZ
    virtual ~Exception();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Exception@bond@@IEAA@PEBD@Z
    Exception(char const *);
};
} // namespace bond
