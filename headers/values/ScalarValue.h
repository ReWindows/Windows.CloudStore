#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.CloudStore.dll by Windissect. 5 member(s).
namespace Windows::Data::Platform::Encryption {
class ScalarValue {
public:
    class Schema;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScalarValue@Encryption@Platform@Data@Windows@@QEAA@XZ
    ScalarValue();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScalarValue@Encryption@Platform@Data@Windows@@QEAA@AEBU01234@@Z
    ScalarValue(::Windows::Data::Platform::Encryption::ScalarValue const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScalarValue@Encryption@Platform@Data@Windows@@QEAA@$$QEAU01234@@Z
    ScalarValue(::Windows::Data::Platform::Encryption::ScalarValue &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScalarValue@Encryption@Platform@Data@Windows@@QEAA@XZ
    ~ScalarValue();
};
} // namespace Windows::Data::Platform::Encryption
