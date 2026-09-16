#pragma once
#include "../windissect_forwards.h"

// Reconstructed from biwinrt.dll by Windissect. 3 member(s).
class RestrictedErrorChainEnumerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Previous@RestrictedErrorChainEnumerator@@QEAAXPEAPEAUIRestrictedErrorInfo@@@Z
    void Previous(IRestrictedErrorInfo * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RestrictedErrorChainEnumerator@@QEAA@PEAUIRestrictedErrorInfo@@@Z
    RestrictedErrorChainEnumerator(IRestrictedErrorInfo *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RestrictedErrorChainEnumerator@@QEAA@XZ
    ~RestrictedErrorChainEnumerator();
};
