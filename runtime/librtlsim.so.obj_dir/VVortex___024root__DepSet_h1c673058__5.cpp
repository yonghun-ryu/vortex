// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "VVortex__pch.h"
#include "VVortex__Syms.h"
#include "VVortex___024root.h"

VL_INLINE_OPT void VVortex___024root___nba_comb__TOP__50(VVortex___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex___024root___nba_comb__TOP__50\n"); );
    // Init
    CData/*3:0*/ Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out = 0;
    CData/*3:0*/ Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__rsp_ready_out;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__rsp_ready_out = 0;
    CData/*0:0*/ Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_rsp_fire;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_rsp_fire = 0;
    // Body
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT____Vcellout__rsp_arb__ready_in 
        = (((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
             [0U] & (IData)((2U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT____Vcellinp__rsp_arb__valid_in)))) 
            << 1U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__out_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__ready
                      [0U] & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT____Vcellinp__rsp_arb__valid_in)));
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_rsp_fire 
        = ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT____Vcellout__rsp_arb__ready_in) 
           & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_core_rsp_buf__BRA__0__KET____DOT__core_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__valid_out_r));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_core_rsp_buf__BRA__0__KET____DOT__core_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__g_core_rsp_buf__BRA__0__KET____DOT__core_rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__valid_out_r)) 
                 | (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT____Vcellout__rsp_arb__ready_in)));
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__rsp_ready_out 
        = ((0xfffffff8U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT____Vcellout__rsp_arb__ready_in) 
                            << 2U) & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_pack__DOT____VdfgRegularize_h305aea41_0_4) 
                                      << 3U))) | ((0xfffffffcU 
                                                   & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT____Vcellout__rsp_arb__ready_in) 
                                                       << 1U) 
                                                      & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_pack__DOT____VdfgRegularize_h305aea41_0_3) 
                                                         << 2U))) 
                                                  | ((0xfffffffeU 
                                                      & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT____Vcellout__rsp_arb__ready_in) 
                                                         & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_pack__DOT____VdfgRegularize_h305aea41_0_2) 
                                                            << 1U))) 
                                                     | (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT____Vcellout__rsp_arb__ready_in) 
                                                         >> 1U) 
                                                        & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__stream_pack__DOT____VdfgRegularize_h305aea41_0_1)))));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_pop 
        = Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_rsp_fire;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out 
        = Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_adapters__BRA__0__KET____DOT__lmem_adapter__DOT__rsp_ready_out;
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
        = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots;
    if (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_pop) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
               | (0xfU & ((IData)(1U) << (3U & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__core_bus_tmp_if__BRA__0__KET__.rsp_data[0U]))));
    }
    if (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__ibuf_push) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n 
            = ((~ ((IData)(1U) << (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__acquire_addr_r))) 
               & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    }
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multiple_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multiple_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__0__KET____DOT__xbar_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__valid_out_r)) 
                 | (IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out)));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multiple_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multiple_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__1__KET____DOT__xbar_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__valid_out_r)) 
                 | ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 1U)));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multiple_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multiple_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__2__KET____DOT__xbar_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__valid_out_r)) 
                 | ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 2U)));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multiple_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__flow_out 
        = (1U & ((~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_xbar__DOT__g_multiple_inputs__DOT__g_multiple_outputs__DOT__g_xbar_arbs__BRA__3__KET____DOT__xbar_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__valid_out_r)) 
                 | ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__local_mem__DOT__rsp_ready_out) 
                    >> 3U)));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[3U] 
        = (1U & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[4U] 
        = (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
                 >> 1U));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[5U] 
        = (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
                 >> 2U));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_sel__DOT__g_lzc__DOT__find_first__DOT__s_n[6U] 
        = (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__free_slots_n) 
                 >> 3U));
}

VL_INLINE_OPT void VVortex___024root___nba_comb__TOP__53(VVortex___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex___024root___nba_comb__TOP__53\n"); );
    // Init
    CData/*3:0*/ Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__curr_barrier_mask_p1;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__curr_barrier_mask_p1 = 0;
    CData/*0:0*/ Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push = 0;
    CData/*0:0*/ Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop = 0;
    CData/*0:0*/ Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____VdfgRegularize_h5c3bd567_0_0;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____VdfgRegularize_h5c3bd567_0_0 = 0;
    CData/*1:0*/ Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_ready;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_ready = 0;
    CData/*0:0*/ Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_out;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_out = 0;
    CData/*0:0*/ Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_out;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_out = 0;
    VlWide<6>/*191:0*/ __Vtemp_4;
    // Body
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot 
        = ((0U != (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            ? ((~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_pri_reqs)) 
               & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__masked_reqs))
            : ((~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arbiter__DOT__g_round_robin__DOT__rr_arbiter__DOT__g_model1__DOT__unmasked_pri_reqs)) 
               & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_valid)));
    if ((0x15fU >= (0x1ffU & ((IData)(0xb0U) * (1U 
                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                   >> 1U)))))) {
        __Vtemp_4[0U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                                   ((IData)(1U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                            (0xfU & (((IData)(0xb0U) 
                                      * (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                               >> 1U))) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0xb0U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                         >> 1U))))));
        __Vtemp_4[1U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                                   ((IData)(2U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                            ((IData)(1U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[2U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                                   ((IData)(3U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                            ((IData)(2U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[3U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                                   ((IData)(4U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                            ((IData)(3U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[4U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                                   ((IData)(5U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                            ((IData)(4U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                  >> 1U))))));
        __Vtemp_4[5U] = (((0U == (0x1fU & ((IData)(0xb0U) 
                                           * (1U & 
                                              ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                               >> 1U)))))
                           ? 0U : (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                                   ((IData)(6U) + (0xfU 
                                                   & (((IData)(0xb0U) 
                                                       * 
                                                       (1U 
                                                        & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                           >> 1U))) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0xb0U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                       >> 1U))))))) 
                         | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_data[
                            ((IData)(5U) + (0xfU & 
                                            (((IData)(0xb0U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                    >> 1U))) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0xb0U) 
                                         * (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                                                  >> 1U))))));
    } else {
        __Vtemp_4[0U] = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand_h519368a0__0[0U];
        __Vtemp_4[1U] = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand_h519368a0__0[1U];
        __Vtemp_4[2U] = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand_h519368a0__0[2U];
        __Vtemp_4[3U] = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand_h519368a0__0[3U];
        __Vtemp_4[4U] = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand_h519368a0__0[4U];
        __Vtemp_4[5U] = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vxrand_h519368a0__0[5U];
    }
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_more_inputs__DOT__g_one_output__DOT__out_buf__data_in[0U] 
        = __Vtemp_4[0U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_more_inputs__DOT__g_one_output__DOT__out_buf__data_in[1U] 
        = __Vtemp_4[1U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_more_inputs__DOT__g_one_output__DOT__out_buf__data_in[2U] 
        = __Vtemp_4[2U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_more_inputs__DOT__g_one_output__DOT__out_buf__data_in[3U] 
        = __Vtemp_4[3U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_more_inputs__DOT__g_one_output__DOT__out_buf__data_in[4U] 
        = __Vtemp_4[4U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT____Vcellinp__g_more_inputs__DOT__g_one_output__DOT__out_buf__data_in[5U] 
        = ((0x10000U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot) 
                        << 0xfU)) | (0xffffU & __Vtemp_4[5U]));
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_ready 
        = ((- (IData)((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__no_buffer))) 
           & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__rsp_arb__DOT__g_more_inputs__DOT__g_one_output__DOT__arb_onehot));
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_out 
        = (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state) 
                 & (IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_ready)));
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_out 
        = ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state) 
           & ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_ready) 
              >> 1U));
    vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid 
        = (1U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state) 
                  & (IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_switch__DOT__pe_rsp_ready)) 
                 & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[0U]));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state_n 
        = ((2U == (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_in) 
                    << 1U) | (IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_out)))
            ? (1U | (2U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state) 
                           << 1U))) : ((1U == (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_in) 
                                                << 1U) 
                                               | (IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_out)))
                                        ? (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state) 
                                                 >> 1U))
                                        : (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state)));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state_n 
        = ((2U == (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_in) 
                    << 1U) | (IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_out)))
            ? (1U | (2U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state) 
                           << 1U))) : ((1U == (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_in) 
                                                << 1U) 
                                               | (IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fire_out)))
                                        ? (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state) 
                                                 >> 1U))
                                        : (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state)));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs_n 
        = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs;
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps_n 
        = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps;
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks_n 
        = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks;
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__curr_barrier_mask_p1 
        = (0xfU & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks) 
                   >> (7U & VL_SHIFTL_III(3,32,32, 
                                          (1U & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                 >> 6U)), 2U))));
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__curr_barrier_mask_p1 
        = ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__curr_barrier_mask_p1) 
           | (0xfU & ((IData)(1U) << (3U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                            >> 0xdU)))));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
        = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks;
    if (((IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                  >> 0x23U)) & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__is_single_warp))) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps_n 
            = (0xfU & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps_n) 
                       | (IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                                  >> 0x1fU))));
        if ((1U & (IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                           >> 0x1fU)))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (1U | (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n));
        }
        if ((1U & (IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                           >> 0x20U)))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (0x10U | (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n));
        }
        if ((1U & (IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                           >> 0x21U)))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (0x100U | (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n));
        }
        if ((1U & (IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                           >> 0x22U)))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (0x1000U | (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n));
        }
    }
    if (((IData)(vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
         & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[2U] 
            >> 0x1cU))) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps_n 
            = (((~ ((IData)(1U) << (3U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                          >> 0xdU)))) 
                & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__active_warps_n)) 
               | (0xfU & ((0U != (0xfU & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[2U] 
                                          >> 0x18U))) 
                          << (3U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                    >> 0xdU)))));
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
            = (((~ ((IData)(0xfU) << (0xfU & VL_SHIFTL_III(4,32,32, 
                                                           (3U 
                                                            & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                                               >> 0xdU)), 2U)))) 
                & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n)) 
               | (0xffffU & ((0xfU & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[2U] 
                                      >> 0x18U)) << 
                             (0xfU & VL_SHIFTL_III(4,32,32, 
                                                   (3U 
                                                    & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                                       >> 0xdU)), 2U)))));
    }
    if (((IData)(vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
         & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U] 
            >> 0x13U))) {
        if ((0x40000U & vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U])) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (((~ ((IData)(0xfU) << (0xfU & VL_SHIFTL_III(4,32,32, 
                                                               (3U 
                                                                & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                                                   >> 0xdU)), 2U)))) 
                    & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n)) 
                   | (0xffffU & ((0xfU & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U] 
                                          >> 0xeU)) 
                                 << (0xfU & VL_SHIFTL_III(4,32,32, 
                                                          (3U 
                                                           & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                                              >> 0xdU)), 2U)))));
        }
    }
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push 
        = ((IData)(vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
           & (IData)((0xc0000U == (0xc0000U & vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U]))));
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____VdfgRegularize_h5c3bd567_0_0 
        = ((IData)(vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
           & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
              >> 0xaU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
        = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps;
    if (((IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn 
                  >> 0x23U)) & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__is_single_warp))) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wspawn_wid))) 
               & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (((IData)(vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
         & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[2U] 
            >> 0x1cU))) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                         >> 0xdU)))) 
               & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (((IData)(vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
         & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[1U] 
            >> 0x13U))) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                         >> 0xdU)))) 
               & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r) {
        if ((1U & (IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d 
                           >> 0x26U)))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n 
                = (((~ ((IData)(0xfU) << (0xfU & VL_SHIFTL_III(4,32,32, 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d 
                                                                           >> 0x23U))), 2U)))) 
                    & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__thread_masks_n)) 
                   | (0xffffU & ((0xfU & (IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d 
                                                  >> 0x1fU))) 
                                 << (0xfU & VL_SHIFTL_III(4,32,32, 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d 
                                                                      >> 0x23U))), 2U)))));
        }
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__pipe_reg__DOT__g_depth1__DOT__g_partial_reset__DOT__value_d 
                                                 >> 0x23U))))) 
               & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (((IData)(vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__warp_ctl_if.valid) 
         & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
            >> 7U))) {
        if ((1U & (~ (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                      >> 2U)))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs_n 
                = (((~ ((IData)(3U) << (3U & VL_SHIFTL_III(2,32,32, 
                                                           (1U 
                                                            & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                               >> 6U)), 1U)))) 
                    & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs_n)) 
                   | (0xfU & ((((~ (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                    >> 5U)) & ((3U 
                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs) 
                                                   >> 
                                                   (3U 
                                                    & VL_SHIFTL_III(2,32,32, 
                                                                    (1U 
                                                                     & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                                        >> 6U)), 1U)))) 
                                               == (3U 
                                                   & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                      >> 3U))))
                                ? 0U : (3U & ((IData)(1U) 
                                              + ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs) 
                                                 >> 
                                                 (3U 
                                                  & VL_SHIFTL_III(2,32,32, 
                                                                  (1U 
                                                                   & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                                      >> 6U)), 1U)))))) 
                              << (3U & VL_SHIFTL_III(2,32,32, 
                                                     (1U 
                                                      & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                         >> 6U)), 1U)))));
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks_n 
                = (((~ ((IData)(0xfU) << (7U & VL_SHIFTL_III(3,32,32, 
                                                             (1U 
                                                              & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                                 >> 6U)), 2U)))) 
                    & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks_n)) 
                   | (0xffU & ((((~ (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                     >> 5U)) & ((3U 
                                                 & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs) 
                                                    >> 
                                                    (3U 
                                                     & VL_SHIFTL_III(2,32,32, 
                                                                     (1U 
                                                                      & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                                         >> 6U)), 1U)))) 
                                                == 
                                                (3U 
                                                 & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                    >> 3U))))
                                 ? 0U : (IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__curr_barrier_mask_p1)) 
                               << (7U & VL_SHIFTL_III(3,32,32, 
                                                      (1U 
                                                       & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                          >> 6U)), 2U)))));
        }
        if ((4U & vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U])) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
                = ((~ ((IData)(1U) << (3U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                             >> 0xdU)))) 
                   & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
        } else if (((~ (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                        >> 5U)) & ((3U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_ctrs) 
                                          >> (3U & 
                                              VL_SHIFTL_III(2,32,32, 
                                                            (1U 
                                                             & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                                >> 6U)), 1U)))) 
                                   == (3U & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                             >> 3U))))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
                = ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n) 
                   & (~ ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__barrier_masks) 
                         >> (7U & VL_SHIFTL_III(3,32,32, 
                                                (1U 
                                                 & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__wctl_unit__DOT____Vcellout__rsp_buf__data_out[0U] 
                                                    >> 6U)), 2U)))));
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
                = ((~ ((IData)(1U) << (3U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                             >> 0xdU)))) 
                   & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
        }
    }
    if ((1U & (IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_depth1__DOT__g_no_reset__DOT__value 
                       >> 0x22U)))) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (IData)((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__g_alus__BRA__0__KET____DOT__alu_int__DOT__branch_reg__DOT__g_depth1__DOT__g_no_reset__DOT__value 
                                                 >> 0x20U))))) 
               & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__fetch_fire) 
         & (~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__decode__DOT__is_wstall)))) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__fetch_if.data[2U] 
                                         >> 3U)))) 
               & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (((((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__csr_req_valid) 
           & (~ ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__csr_unit__DOT__rsp_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state) 
                 >> 1U))) & vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0U]) 
         & (3U >= (0xfffU & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xcU] 
                             >> 0x11U))))) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((~ ((IData)(1U) << (3U & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__dispatch_unit__DOT__g_blocks__BRA__0__KET____DOT__execute_data_w[0xeU] 
                                         >> 0x18U)))) 
               & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n));
    }
    if (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__out_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__fire_in) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n 
            = ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__stalled_warps_n) 
               | (0xfU & ((IData)(1U) << vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__wid_select__DOT__g_lzc__DOT__find_first__DOT__d_n
                          [0U])));
    }
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__push 
        = ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push) 
           & (0U == (0x6000U & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U])));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__push 
        = ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push) 
           & (0x2000U == (0x6000U & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U])));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__push 
        = ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push) 
           & (0x4000U == (0x6000U & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U])));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__push 
        = ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_push) 
           & (0x6000U == (0x6000U & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U])));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__pipe_reg__data_in 
        = (((QData)((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____VdfgRegularize_h5c3bd567_0_0)) 
            << 0x27U) | (((QData)((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__sjoin_is_dvg)) 
                          << 0x26U) | (((QData)((IData)(
                                                        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_set
                                                        [
                                                        (3U 
                                                         & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                                            >> 0xdU))])) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         (3U 
                                                          & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                                             >> 0xdU)))) 
                                         << 0x23U) 
                                        | vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_data
                                        [(3U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U] 
                                                >> 0xdU))]))));
    Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop 
        = ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____VdfgRegularize_h5c3bd567_0_0) 
           & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__sjoin_is_dvg));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__0__KET____DOT__ipdom_stack__pop 
        = ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop) 
           & (0U == (0x6000U & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U])));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__1__KET____DOT__ipdom_stack__pop 
        = ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop) 
           & (0x2000U == (0x6000U & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U])));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__2__KET____DOT__ipdom_stack__pop 
        = ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop) 
           & (0x4000U == (0x6000U & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U])));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT____Vcellinp__g_ipdom_stacks__BRA__3__KET____DOT__ipdom_stack__pop 
        = ((IData)(Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__schedule__DOT__split_join__DOT__ipdom_pop) 
           & (0x6000U == (0x6000U & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__execute__DOT__sfu_unit__DOT__pe_commit_if__BRA__0__KET__.data[5U])));
}
