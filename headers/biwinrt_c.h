// Flat C exports observed in biwinrt.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef BIWINRT_C_H
#define BIWINRT_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: BiRtCreateEventForApp (ABI unverified)
// Export: DllGetActivationFactory (ABI unverified)
// Export: DllMain (ABI unverified)
// Export: DllCanUnloadNow (ABI unverified)
// Export: BiRtRegisterWorkItem (ABI unverified)
// Export: BiRtIsValidActivationTypeForEventType (ABI unverified)
// Export: DllGetClassObject (ABI unverified)
// Export: BiRtDeleteEventForApp (ABI unverified)
// Export: BiRtEnumerateBrokeredEvents (ABI unverified)
// Export: BiRtQueryBrokerEventId (ABI unverified)
// Export: BiRtRegisterWorkItemClsid (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // BIWINRT_C_H
