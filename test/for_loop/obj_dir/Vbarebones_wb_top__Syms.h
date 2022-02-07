// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VBAREBONES_WB_TOP__SYMS_H_
#define _VBAREBONES_WB_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vbarebones_wb_top.h"
#include "Vbarebones_wb_top_barebones_wb_top.h"
#include "Vbarebones_wb_top_memory_2rw_wb__Ab.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vbarebones_wb_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vbarebones_wb_top*             TOPp;
    Vbarebones_wb_top_barebones_wb_top TOP__barebones_wb_top;
    Vbarebones_wb_top_memory_2rw_wb__Ab TOP__barebones_wb_top__memory;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_barebones_wb_top__memory;
    
    // CREATORS
    Vbarebones_wb_top__Syms(Vbarebones_wb_top* topp, const char* namep);
    ~Vbarebones_wb_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
