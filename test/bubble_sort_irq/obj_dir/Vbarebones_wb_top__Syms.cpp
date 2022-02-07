// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbarebones_wb_top__Syms.h"
#include "Vbarebones_wb_top.h"
#include "Vbarebones_wb_top_barebones_wb_top.h"
#include "Vbarebones_wb_top_memory_2rw_wb__Ab.h"



// FUNCTIONS
Vbarebones_wb_top__Syms::Vbarebones_wb_top__Syms(Vbarebones_wb_top* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__barebones_wb_top(Verilated::catName(topp->name(), "barebones_wb_top"))
    , TOP__barebones_wb_top__memory(Verilated::catName(topp->name(), "barebones_wb_top.memory"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->barebones_wb_top = &TOP__barebones_wb_top;
    TOPp->barebones_wb_top->memory = &TOP__barebones_wb_top__memory;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__barebones_wb_top.__Vconfigure(this, true);
    TOP__barebones_wb_top__memory.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_barebones_wb_top__memory.configure(this, name(), "barebones_wb_top.memory", "memory", VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_barebones_wb_top__memory.varInsert(__Vfinal,"mem", &(TOP__barebones_wb_top__memory.mem), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,2047,0);
    }
}
