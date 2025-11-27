// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "VVortex__pch.h"
#include "VVortex__Syms.h"
#include "VVortex___024root.h"

VL_ATTR_COLD void VVortex___024root___stl_sequent__TOP__4(VVortex___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex___024root___stl_sequent__TOP__4\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_41;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_57;
    VlWide<4>/*127:0*/ __Vtemp_61;
    VlWide<4>/*127:0*/ __Vtemp_65;
    VlWide<5>/*159:0*/ __Vtemp_69;
    VlWide<5>/*159:0*/ __Vtemp_73;
    VlWide<5>/*159:0*/ __Vtemp_77;
    VlWide<5>/*159:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_89;
    VlWide<18>/*575:0*/ __Vtemp_101;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((1U & 
                                               ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                 ? 
                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                 [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                 >> 8U)
                                                 : 
                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                  ? 
                                                 (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                  >> 4U)
                                                  : 
                                                 (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                  >> 0x1aU)))))) 
                              << 0x3fU) | (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                 ? 
                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                 [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                 >> 7U)
                                                                 : 
                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                  ? 
                                                                 (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                                  >> 3U)
                                                                  : 
                                                                 (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                  >> 0x19U)))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                    ? 
                                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                    [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                    >> 6U)
                                                                    : 
                                                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                     ? 
                                                                    (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                                     >> 2U)
                                                                     : 
                                                                    (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                     >> 0x18U)))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                       ? 
                                                                      (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                       [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                       >> 5U)
                                                                       : 
                                                                      ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                        ? 
                                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                                        >> 1U)
                                                                        : 
                                                                       (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                        >> 0x17U)))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                          ? 
                                                                         (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                          [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                          >> 4U)
                                                                          : 
                                                                         ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                           ? 
                                                                          vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U]
                                                                           : 
                                                                          (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                           >> 0x16U)))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                             ? 
                                                                            (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                             [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                             >> 3U)
                                                                             : 
                                                                            ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                              ? 
                                                                             (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                              >> 0x1fU)
                                                                              : 
                                                                             (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                              >> 0x15U)))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                ? 
                                                                               (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                                >> 2U)
                                                                                : 
                                                                               ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0x14U)))))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0x13U)))))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U]
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0x12U)))))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0x11U)))))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0x10U)))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xfU)))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xeU)))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xdU)))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xcU)))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xbU)))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xaU)))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 9U)))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 8U)))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 7U)))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 6U)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 5U)))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 4U)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 3U)))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 2U)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 1U)))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U]))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1fU)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1eU)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1dU)))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1cU)))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1bU)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1aU))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x19U))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x18U))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x17U))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U]
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x16U))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__write_table) 
                                                                                >> (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r))
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[5U] 
                                                                                >> 0x12U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3fffc00U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U] 
                                                                                >> 4U))
                                                                                 : 
                                                                                ((vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 6U))) 
                                                                                << 0xaU)) 
                                                                                | ((0x300U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U] 
                                                                                >> 0x14U))
                                                                                 : 
                                                                                ((vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                                                >> 0x16U))) 
                                                                                << 8U)) 
                                                                                | ((((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val) 
                                                                                && (1U 
                                                                                & vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U])) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____VdfgRegularize_h0dbd6671_0_8)
                                                                                 ? 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__flush_unit__DOT__state_r))
                                                                                 ? 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__flush_uuid_r) 
                                                                                << 2U)
                                                                                 : 0U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0x10U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0x10U] 
                                                                                >> 4U))
                                                                                 : 
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U]))) 
                                                                                << 4U)) 
                                                                                | (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)((1U 
                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                    [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                    >> 8U)
                                                    : 
                                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                     ? 
                                                    (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                     >> 4U)
                                                     : 
                                                    (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                     >> 0x1aU)))))) 
                               << 0x3fU) | (((QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                  ? 
                                                                 (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                  [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                  >> 7U)
                                                                  : 
                                                                 ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                   ? 
                                                                  (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                                   >> 3U)
                                                                   : 
                                                                  (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                   >> 0x19U)))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                     ? 
                                                                    (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                     [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                     >> 6U)
                                                                     : 
                                                                    ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                      ? 
                                                                     (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                                      >> 2U)
                                                                      : 
                                                                     (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                      >> 0x18U)))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                        ? 
                                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                        [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                        >> 5U)
                                                                        : 
                                                                       ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                         ? 
                                                                        (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                                         >> 1U)
                                                                         : 
                                                                        (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                         >> 0x17U)))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                           ? 
                                                                          (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                           >> 4U)
                                                                           : 
                                                                          ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                            ? 
                                                                           vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U]
                                                                            : 
                                                                           (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                            >> 0x16U)))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                              ? 
                                                                             (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                              [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                              >> 3U)
                                                                              : 
                                                                             ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                               ? 
                                                                              (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                               >> 0x1fU)
                                                                               : 
                                                                              (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                               >> 0x15U)))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0x14U)))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0x13U)))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U]
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0x12U)))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0x11U)))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0x10U)))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xfU)))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xeU)))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xdU)))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xcU)))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xbU)))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 0xaU)))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 9U)))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 8U)))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 7U)))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 6U)))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 5U)))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 4U)))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 3U)))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 2U)))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                                                >> 1U)))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U]))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1fU)))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1eU)))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1dU)))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1cU)))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1bU)))))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x1aU))) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x19U))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x18U))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x17U))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0U]
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 0x16U))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__write_table) 
                                                                                >> (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r))
                                                                                 : 
                                                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[5U] 
                                                                                >> 0x12U)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x3fffc00U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U] 
                                                                                >> 4U))
                                                                                 : 
                                                                                ((vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                                                >> 6U))) 
                                                                                << 0xaU)) 
                                                                                | ((0x300U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U] 
                                                                                >> 0x14U))
                                                                                 : 
                                                                                ((vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                                                << 0xaU) 
                                                                                | (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                                                >> 0x16U))) 
                                                                                << 8U)) 
                                                                                | ((((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val) 
                                                                                && (1U 
                                                                                & vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U])) 
                                                                                << 7U) 
                                                                                | ((0x70U 
                                                                                & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____VdfgRegularize_h0dbd6671_0_8)
                                                                                 ? 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__flush_unit__DOT__state_r))
                                                                                 ? 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__flush_uuid_r) 
                                                                                << 2U)
                                                                                 : 0U)
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                                                 ? 
                                                                                ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][0U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                                 ? 
                                                                                ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0x10U] 
                                                                                << 0x1cU) 
                                                                                | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0x10U] 
                                                                                >> 4U))
                                                                                 : 
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U]))) 
                                                                                << 4U)) 
                                                                                | (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r))))))))))))))))))))))))))))))))))))))))))))) 
                             >> 0x20U));
    __Vtemp_5[2U] = ((8U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                              ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                 [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                 >> 0xcU) : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                              ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                 >> 8U)
                                              : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                 >> 0x1eU))) 
                            << 3U)) | ((4U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                ? (
                                                   vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                   [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                   >> 0xbU)
                                                : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                    >> 7U)
                                                    : 
                                                   (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                    >> 0x1dU))) 
                                              << 2U)) 
                                       | ((2U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                   ? 
                                                  (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                   [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                   >> 0xaU)
                                                   : 
                                                  ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                    >> 6U)
                                                    : 
                                                   (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                    >> 0x1cU))) 
                                                 << 1U)) 
                                          | (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                    [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                    >> 9U)
                                                    : 
                                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                     ? 
                                                    (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                     >> 5U)
                                                     : 
                                                    (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                     >> 0x1bU)))))));
    __Vtemp_9[2U] = ((0x80U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                 ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                    [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                    >> 0x10U) : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                  ? 
                                                 (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                  >> 0xcU)
                                                  : 
                                                 (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                  >> 2U))) 
                               << 7U)) | ((0x40U & 
                                           (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                              ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                 [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                 >> 0xfU)
                                              : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                  ? 
                                                 (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                  >> 0xbU)
                                                  : 
                                                 (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                  >> 1U))) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                   ? 
                                                  (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                   [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                   >> 0xeU)
                                                   : 
                                                  ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                    >> 0xaU)
                                                    : 
                                                   vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U])) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                      ? 
                                                     (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                      [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                      >> 0xdU)
                                                      : 
                                                     ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                       ? 
                                                      (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                       >> 9U)
                                                       : 
                                                      (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[1U] 
                                                       >> 0x1fU))) 
                                                    << 4U)) 
                                                | __Vtemp_5[2U]))));
    __Vtemp_13[2U] = ((0x800U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                   ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                      [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                      >> 0x14U) : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                    >> 6U))) 
                                 << 0xbU)) | ((0x400U 
                                               & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                    [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                    >> 0x13U)
                                                    : 
                                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                     ? 
                                                    (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                     >> 5U))) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                       ? 
                                                      (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                       [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                       >> 0x12U)
                                                       : 
                                                      ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                        ? 
                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                        >> 0xeU)
                                                        : 
                                                       (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                        >> 4U))) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                          ? 
                                                         (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                          [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                          >> 0x11U)
                                                          : 
                                                         ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                           ? 
                                                          (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                           >> 0xdU)
                                                           : 
                                                          (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                           >> 3U))) 
                                                        << 8U)) 
                                                    | __Vtemp_9[2U]))));
    __Vtemp_17[2U] = ((0x8000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                    ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                       [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                       >> 0x18U) : 
                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                     ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                        >> 0x14U) : 
                                    (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                     >> 0xaU))) << 0xfU)) 
                      | ((0x4000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                       ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                          [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                          >> 0x17U)
                                       : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                           ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                              >> 0x13U)
                                           : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                              >> 9U))) 
                                     << 0xeU)) | ((0x2000U 
                                                   & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                        ? 
                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                        [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                        >> 0x16U)
                                                        : 
                                                       ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                         ? 
                                                        (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                         >> 0x12U)
                                                         : 
                                                        (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                         >> 8U))) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                           ? 
                                                          (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                           >> 0x15U)
                                                           : 
                                                          ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                            ? 
                                                           (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                            >> 0x11U)
                                                            : 
                                                           (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                            >> 7U))) 
                                                         << 0xcU)) 
                                                     | __Vtemp_13[2U]))));
    __Vtemp_21[2U] = ((0x80000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                     ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                        [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                        >> 0x1cU) : 
                                    ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                      ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                         >> 0x18U) : 
                                     (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                      >> 0xeU))) << 0x13U)) 
                      | ((0x40000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                        ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                           >> 0x1bU)
                                        : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                            ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                               >> 0xdU))) 
                                      << 0x12U)) | 
                         ((0x20000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                         ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                            [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                            >> 0x1aU)
                                         : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                             ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                >> 0x16U)
                                             : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                >> 0xcU))) 
                                       << 0x11U)) | 
                          ((0x10000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                          ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                             [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                             >> 0x19U)
                                          : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                              ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                 >> 0x15U)
                                              : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                 >> 0xbU))) 
                                        << 0x10U)) 
                           | __Vtemp_17[2U]))));
    __Vtemp_25[2U] = ((0x800000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                      ? vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                     [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U]
                                      : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                          ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                             >> 0x1cU)
                                          : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                             >> 0x12U))) 
                                    << 0x17U)) | ((0x400000U 
                                                   & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                        ? 
                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                        [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                        >> 0x1fU)
                                                        : 
                                                       ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                         ? 
                                                        (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                         >> 0x1bU)
                                                         : 
                                                        (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                         >> 0x11U))) 
                                                      << 0x16U)) 
                                                  | ((0x200000U 
                                                      & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                           ? 
                                                          (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                           >> 0x1eU)
                                                           : 
                                                          ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                            ? 
                                                           (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                            >> 0x1aU)
                                                            : 
                                                           (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                            >> 0x10U))) 
                                                         << 0x15U)) 
                                                     | ((0x100000U 
                                                         & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                              ? 
                                                             (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                              [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][1U] 
                                                              >> 0x1dU)
                                                              : 
                                                             ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                               ? 
                                                              (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                               >> 0x19U)
                                                               : 
                                                              (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                               >> 0xfU))) 
                                                            << 0x14U)) 
                                                        | __Vtemp_21[2U]))));
    __Vtemp_29[2U] = ((0x8000000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                       ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                          [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                          >> 4U) : 
                                      ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                        ? vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U]
                                        : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                           >> 0x16U))) 
                                     << 0x1bU)) | (
                                                   (0x4000000U 
                                                    & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                         ? 
                                                        (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                         [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                         >> 3U)
                                                         : 
                                                        ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                          ? 
                                                         (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                          >> 0x15U))) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                            ? 
                                                           (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                            [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                            >> 2U)
                                                            : 
                                                           ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                             ? 
                                                            (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                             >> 0x1eU)
                                                             : 
                                                            (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                             >> 0x14U))) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                               ? 
                                                              (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                               [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                               >> 1U)
                                                               : 
                                                              ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                ? 
                                                               (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[1U] 
                                                                >> 0x1dU)
                                                                : 
                                                               (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                                >> 0x13U))) 
                                                             << 0x18U)) 
                                                         | __Vtemp_25[2U]))));
    __Vtemp_33[2U] = ((((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                         ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                            [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                            >> 8U) : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                       ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                          >> 4U) : 
                                      (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                       >> 0x1aU))) 
                       << 0x1fU) | ((0x40000000U & 
                                     (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                        ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                           >> 7U) : 
                                       ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                         ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                            >> 3U) : 
                                        (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                         >> 0x19U))) 
                                      << 0x1eU)) | 
                                    ((0x20000000U & 
                                      (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                         ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                            [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                            >> 6U) : 
                                        ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                          ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                             >> 2U)
                                          : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                             >> 0x18U))) 
                                       << 0x1dU)) | 
                                     ((0x10000000U 
                                       & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                            ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                               [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                               >> 5U)
                                            : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                ? (
                                                   vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                   >> 1U)
                                                : (
                                                   vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                   >> 0x17U))) 
                                          << 0x1cU)) 
                                      | __Vtemp_29[2U]))));
    __Vtemp_37[3U] = ((8U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                               ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                  [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                  >> 0xcU) : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                               ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                  >> 8U)
                                               : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                  >> 0x1eU))) 
                             << 3U)) | ((4U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                 ? 
                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                 [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                 >> 0xbU)
                                                 : 
                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                  ? 
                                                 (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                  >> 7U)
                                                  : 
                                                 (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                  >> 0x1dU))) 
                                               << 2U)) 
                                        | ((2U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                    [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                    >> 0xaU)
                                                    : 
                                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                     ? 
                                                    (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                     >> 6U)
                                                     : 
                                                    (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                     >> 0x1cU))) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                ? (
                                                   vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                   [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                   >> 9U)
                                                : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                    >> 5U)
                                                    : 
                                                   (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                    >> 0x1bU)))))));
    __Vtemp_41[3U] = ((0x80U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                  ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                     [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                     >> 0x10U) : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                   ? 
                                                  (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                   >> 0xcU)
                                                   : 
                                                  (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                   >> 2U))) 
                                << 7U)) | ((0x40U & 
                                            (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                               ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                  [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                  >> 0xfU)
                                               : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                   ? 
                                                  (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                   >> 0xbU)
                                                   : 
                                                  (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                   >> 1U))) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                    [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                    >> 0xeU)
                                                    : 
                                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                     ? 
                                                    (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                     >> 0xaU)
                                                     : 
                                                    vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U])) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                       ? 
                                                      (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                       [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                       >> 0xdU)
                                                       : 
                                                      ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                        ? 
                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                        >> 9U)
                                                        : 
                                                       (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[2U] 
                                                        >> 0x1fU))) 
                                                     << 4U)) 
                                                 | __Vtemp_37[3U]))));
    __Vtemp_45[3U] = ((0x800U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                   ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                      [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                      >> 0x14U) : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                    >> 6U))) 
                                 << 0xbU)) | ((0x400U 
                                               & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                    [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                    >> 0x13U)
                                                    : 
                                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                     ? 
                                                    (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                     >> 5U))) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                       ? 
                                                      (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                       [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                       >> 0x12U)
                                                       : 
                                                      ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                        ? 
                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                        >> 0xeU)
                                                        : 
                                                       (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                        >> 4U))) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                          ? 
                                                         (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                          [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                          >> 0x11U)
                                                          : 
                                                         ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                           ? 
                                                          (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                           >> 0xdU)
                                                           : 
                                                          (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                           >> 3U))) 
                                                        << 8U)) 
                                                    | __Vtemp_41[3U]))));
    __Vtemp_49[3U] = ((0x8000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                    ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                       [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                       >> 0x18U) : 
                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                     ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                        >> 0x14U) : 
                                    (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                     >> 0xaU))) << 0xfU)) 
                      | ((0x4000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                       ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                          [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                          >> 0x17U)
                                       : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                           ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                              >> 0x13U)
                                           : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                              >> 9U))) 
                                     << 0xeU)) | ((0x2000U 
                                                   & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                        ? 
                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                        [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                        >> 0x16U)
                                                        : 
                                                       ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                         ? 
                                                        (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                         >> 0x12U)
                                                         : 
                                                        (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                         >> 8U))) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                           ? 
                                                          (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                           >> 0x15U)
                                                           : 
                                                          ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                            ? 
                                                           (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                            >> 0x11U)
                                                            : 
                                                           (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                            >> 7U))) 
                                                         << 0xcU)) 
                                                     | __Vtemp_45[3U]))));
    __Vtemp_53[3U] = ((0x80000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                     ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                        [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                        >> 0x1cU) : 
                                    ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                      ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                         >> 0x18U) : 
                                     (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                      >> 0xeU))) << 0x13U)) 
                      | ((0x40000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                        ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                           >> 0x1bU)
                                        : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                            ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                               >> 0xdU))) 
                                      << 0x12U)) | 
                         ((0x20000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                         ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                            [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                            >> 0x1aU)
                                         : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                             ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                >> 0x16U)
                                             : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                >> 0xcU))) 
                                       << 0x11U)) | 
                          ((0x10000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                          ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                             [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                             >> 0x19U)
                                          : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                              ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                 >> 0x15U)
                                              : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                 >> 0xbU))) 
                                        << 0x10U)) 
                           | __Vtemp_49[3U]))));
    __Vtemp_57[3U] = ((0x800000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                      ? vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                     [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U]
                                      : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                          ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                             >> 0x1cU)
                                          : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                             >> 0x12U))) 
                                    << 0x17U)) | ((0x400000U 
                                                   & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                        ? 
                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                        [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                        >> 0x1fU)
                                                        : 
                                                       ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                         ? 
                                                        (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                         >> 0x1bU)
                                                         : 
                                                        (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                         >> 0x11U))) 
                                                      << 0x16U)) 
                                                  | ((0x200000U 
                                                      & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                           ? 
                                                          (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                           >> 0x1eU)
                                                           : 
                                                          ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                            ? 
                                                           (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                            >> 0x1aU)
                                                            : 
                                                           (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                            >> 0x10U))) 
                                                         << 0x15U)) 
                                                     | ((0x100000U 
                                                         & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                              ? 
                                                             (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                              [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][2U] 
                                                              >> 0x1dU)
                                                              : 
                                                             ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                               ? 
                                                              (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                               >> 0x19U)
                                                               : 
                                                              (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                               >> 0xfU))) 
                                                            << 0x14U)) 
                                                        | __Vtemp_53[3U]))));
    __Vtemp_61[3U] = ((0x8000000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                       ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                          [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                          >> 4U) : 
                                      ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                        ? vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U]
                                        : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                           >> 0x16U))) 
                                     << 0x1bU)) | (
                                                   (0x4000000U 
                                                    & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                         ? 
                                                        (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                         [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                         >> 3U)
                                                         : 
                                                        ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                          ? 
                                                         (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                          >> 0x1fU)
                                                          : 
                                                         (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                          >> 0x15U))) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                            ? 
                                                           (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                            [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                            >> 2U)
                                                            : 
                                                           ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                             ? 
                                                            (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                             >> 0x1eU)
                                                             : 
                                                            (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                             >> 0x14U))) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                               ? 
                                                              (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                               [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                               >> 1U)
                                                               : 
                                                              ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                                ? 
                                                               (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[2U] 
                                                                >> 0x1dU)
                                                                : 
                                                               (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                                >> 0x13U))) 
                                                             << 0x18U)) 
                                                         | __Vtemp_57[3U]))));
    __Vtemp_65[3U] = ((((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                         ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                            [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                            >> 8U) : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                       ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                          >> 4U) : 
                                      (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                       >> 0x1aU))) 
                       << 0x1fU) | ((0x40000000U & 
                                     (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                        ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                           >> 7U) : 
                                       ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                         ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                            >> 3U) : 
                                        (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                         >> 0x19U))) 
                                      << 0x1eU)) | 
                                    ((0x20000000U & 
                                      (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                         ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                            [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                            >> 6U) : 
                                        ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                          ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                             >> 2U)
                                          : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                             >> 0x18U))) 
                                       << 0x1dU)) | 
                                     ((0x10000000U 
                                       & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                            ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                               [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                               >> 5U)
                                            : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                ? (
                                                   vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                   >> 1U)
                                                : (
                                                   vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                   >> 0x17U))) 
                                          << 0x1cU)) 
                                      | __Vtemp_61[3U]))));
    __Vtemp_69[4U] = ((8U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                               ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                  [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                  >> 0xcU) : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                               ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                  >> 8U)
                                               : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                  >> 0x1eU))) 
                             << 3U)) | ((4U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                 ? 
                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                 [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                 >> 0xbU)
                                                 : 
                                                ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                  ? 
                                                 (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                  >> 7U)
                                                  : 
                                                 (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                  >> 0x1dU))) 
                                               << 2U)) 
                                        | ((2U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                    [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                    >> 0xaU)
                                                    : 
                                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                     ? 
                                                    (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                     >> 6U)
                                                     : 
                                                    (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                     >> 0x1cU))) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                ? (
                                                   vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                   [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                   >> 9U)
                                                : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                    >> 5U)
                                                    : 
                                                   (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                    >> 0x1bU)))))));
    __Vtemp_73[4U] = ((0x80U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                  ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                     [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                     >> 0x10U) : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                   ? 
                                                  (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                   >> 0xcU)
                                                   : 
                                                  (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                   >> 2U))) 
                                << 7U)) | ((0x40U & 
                                            (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                               ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                  [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                  >> 0xfU)
                                               : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                   ? 
                                                  (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                   >> 0xbU)
                                                   : 
                                                  (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                   >> 1U))) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                    [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                    >> 0xeU)
                                                    : 
                                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                     ? 
                                                    (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                     >> 0xaU)
                                                     : 
                                                    vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U])) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                       ? 
                                                      (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                       [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                       >> 0xdU)
                                                       : 
                                                      ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                        ? 
                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                        >> 9U)
                                                        : 
                                                       (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[3U] 
                                                        >> 0x1fU))) 
                                                     << 4U)) 
                                                 | __Vtemp_69[4U]))));
    __Vtemp_77[4U] = ((0x800U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                   ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                      [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                      >> 0x14U) : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                    >> 6U))) 
                                 << 0xbU)) | ((0x400U 
                                               & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                    [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                    >> 0x13U)
                                                    : 
                                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                     ? 
                                                    (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                     >> 0xfU)
                                                     : 
                                                    (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                     >> 5U))) 
                                                  << 0xaU)) 
                                              | ((0x200U 
                                                  & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                       ? 
                                                      (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                       [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                       >> 0x12U)
                                                       : 
                                                      ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                        ? 
                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                        >> 0xeU)
                                                        : 
                                                       (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                        >> 4U))) 
                                                     << 9U)) 
                                                 | ((0x100U 
                                                     & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                          ? 
                                                         (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                          [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                          >> 0x11U)
                                                          : 
                                                         ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                           ? 
                                                          (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                           >> 0xdU)
                                                           : 
                                                          (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                           >> 3U))) 
                                                        << 8U)) 
                                                    | __Vtemp_73[4U]))));
    __Vtemp_81[4U] = ((0x8000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                    ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                       [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                       >> 0x18U) : 
                                   ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                     ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                        >> 0x14U) : 
                                    (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                     >> 0xaU))) << 0xfU)) 
                      | ((0x4000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                       ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                          [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                          >> 0x17U)
                                       : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                           ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                              >> 0x13U)
                                           : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                              >> 9U))) 
                                     << 0xeU)) | ((0x2000U 
                                                   & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                        ? 
                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                        [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                        >> 0x16U)
                                                        : 
                                                       ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                         ? 
                                                        (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                         >> 0x12U)
                                                         : 
                                                        (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                         >> 8U))) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                           ? 
                                                          (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                           >> 0x15U)
                                                           : 
                                                          ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                            ? 
                                                           (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                            >> 0x11U)
                                                            : 
                                                           (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                            >> 7U))) 
                                                         << 0xcU)) 
                                                     | __Vtemp_77[4U]))));
    __Vtemp_85[4U] = ((0x80000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                     ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                        [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                        >> 0x1cU) : 
                                    ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                      ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                         >> 0x18U) : 
                                     (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                      >> 0xeU))) << 0x13U)) 
                      | ((0x40000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                        ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                           >> 0x1bU)
                                        : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                            ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                               >> 0x17U)
                                            : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                               >> 0xdU))) 
                                      << 0x12U)) | 
                         ((0x20000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                         ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                            [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                            >> 0x1aU)
                                         : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                             ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                >> 0x16U)
                                             : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                >> 0xcU))) 
                                       << 0x11U)) | 
                          ((0x10000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                          ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                             [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                             >> 0x19U)
                                          : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                              ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                 >> 0x15U)
                                              : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                 >> 0xbU))) 
                                        << 0x10U)) 
                           | __Vtemp_81[4U]))));
    __Vtemp_89[4U] = ((0x800000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                      ? vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                     [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U]
                                      : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                          ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                             >> 0x1cU)
                                          : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                             >> 0x12U))) 
                                    << 0x17U)) | ((0x400000U 
                                                   & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                        ? 
                                                       (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                        [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                        >> 0x1fU)
                                                        : 
                                                       ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                         ? 
                                                        (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                         >> 0x1bU)
                                                         : 
                                                        (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                         >> 0x11U))) 
                                                      << 0x16U)) 
                                                  | ((0x200000U 
                                                      & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                           ? 
                                                          (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                           [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                           >> 0x1eU)
                                                           : 
                                                          ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                            ? 
                                                           (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                            >> 0x1aU)
                                                            : 
                                                           (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                            >> 0x10U))) 
                                                         << 0x15U)) 
                                                     | ((0x100000U 
                                                         & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                              ? 
                                                             (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                              [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][3U] 
                                                              >> 0x1dU)
                                                              : 
                                                             ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                               ? 
                                                              (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                               >> 0x19U)
                                                               : 
                                                              (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                               >> 0xfU))) 
                                                            << 0x14U)) 
                                                        | __Vtemp_85[4U]))));
    __Vtemp_101[0x11U] = (0x80000U | (((1U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__flush_unit__DOT__state_r)) 
                                       << 0x19U) | 
                                      (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__replay_enable) 
                                        << 0x18U) | 
                                       (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__fill_enable) 
                                         << 0x17U) 
                                        | (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__flush_enable) 
                                            << 0x16U) 
                                           | ((0xffe00000U 
                                               & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__creq_grant) 
                                                   << 0x15U) 
                                                  & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__per_bank_core_req_valid) 
                                                     << 0x12U))) 
                                              | ((0x100000U 
                                                  & ((vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[0U] 
                                                      & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__per_bank_core_req_valid)) 
                                                     << 0x11U)) 
                                                 | (0x7ffffU 
                                                    & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____VdfgRegularize_h0dbd6671_0_8)
                                                         ? (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__flush_unit__DOT__counter_r)
                                                         : 
                                                        ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                          ? 
                                                         vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__addr_table
                                                         [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r]
                                                          : 
                                                         ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                           ? 
                                                          vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__addr_table
                                                          [
                                                          (0xfU 
                                                           & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0x10U] 
                                                              >> 2U))]
                                                           : 
                                                          ((vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[5U] 
                                                            << 6U) 
                                                           | (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                              >> 0x1aU))))) 
                                                       >> 5U)))))))));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[0U] 
        = __Vtemp_2[0U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[1U] 
        = __Vtemp_2[1U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[2U] 
        = __Vtemp_33[2U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[3U] 
        = __Vtemp_65[3U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[4U] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[4U] 
            << 0x1bU) | ((0x4000000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                          ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                             [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U] 
                                             >> 3U)
                                          : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                              ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                 >> 0x1fU)
                                              : (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                 >> 0x15U))) 
                                        << 0x1aU)) 
                         | ((0x2000000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                             ? (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U] 
                                                >> 2U)
                                             : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                 ? 
                                                (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                 >> 0x1eU)
                                                 : 
                                                (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                 >> 0x14U))) 
                                           << 0x19U)) 
                            | ((0x1000000U & (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                                                ? (
                                                   vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__entries__DOT__g_no_out_reg__DOT__ram
                                                   [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r][4U] 
                                                   >> 1U)
                                                : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                                                    ? 
                                                   (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[3U] 
                                                    >> 0x1dU)
                                                    : 
                                                   (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                                    >> 0x13U))) 
                                              << 0x18U)) 
                               | __Vtemp_89[4U]))));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[5U] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[4U] 
            >> 5U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[5U] 
                      << 0x1bU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[6U] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[5U] 
            >> 5U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[6U] 
                      << 0x1bU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[7U] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[6U] 
            >> 5U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[7U] 
                      << 0x1bU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[8U] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[7U] 
            >> 5U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[8U] 
                      << 0x1bU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[9U] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[8U] 
            >> 5U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[9U] 
                      << 0x1bU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[0xaU] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[9U] 
            >> 5U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xaU] 
                      << 0x1bU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[0xbU] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xaU] 
            >> 5U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xbU] 
                      << 0x1bU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[0xcU] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xbU] 
            >> 5U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xcU] 
                      << 0x1bU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[0xdU] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xcU] 
            >> 5U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xdU] 
                      << 0x1bU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[0xeU] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xdU] 
            >> 5U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xeU] 
                      << 0x1bU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[0xfU] 
        = ((vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xeU] 
            >> 5U) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xfU] 
                      << 0x1bU));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[0x10U] 
        = ((((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____VdfgRegularize_h0dbd6671_0_8)
              ? (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__flush_unit__DOT__counter_r)
              : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_val)
                  ? vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__addr_table
                 [vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__dequeue_id_r]
                  : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__curr_bank_mem_rsp_valid)
                      ? vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__cache_mshr__DOT__addr_table
                     [(0xfU & (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0x10U] 
                               >> 2U))] : ((vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[5U] 
                                            << 6U) 
                                           | (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_core_arb__BRA__0__KET____DOT__arb_core_bus_tmp_if__BRA__0__KET__.req_data[4U] 
                                              >> 0x1aU))))) 
            << 0x1bU) | (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT____Vcellinp__mem_rsp_queue__data_in[0xfU] 
                         >> 5U));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT____Vcellinp__pipe_reg0__data_in[0x11U] 
        = ((((1U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__flush_unit__DOT__state_r)) 
             | ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__replay_fire) 
                | ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__mem_rsp_fire) 
                   | (((3U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__flush_unit__DOT__state_r)) 
                       & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__flush_ready)) 
                      | (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__core_req_fire))))) 
            << 0x1aU) | __Vtemp_101[0x11U]);
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__state_n 
        = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__state;
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__flush_done_n 
        = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__flush_done;
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__lock_released_n 
        = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__lock_released;
    if ((0U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__state))) {
        if (vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__flush_req_mask) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__state_n = 2U;
        }
    } else if ((1U != (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__state))) {
        if ((2U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__state))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__state_n = 3U;
        } else if ((3U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__state))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__flush_done_n 
                = ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__flush_done) 
                   | (((5U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__3__KET____DOT__bank__DOT__flush_unit__DOT__state_r)) 
                       << 3U) | (((5U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__2__KET____DOT__bank__DOT__flush_unit__DOT__state_r)) 
                                  << 2U) | (((5U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__1__KET____DOT__bank__DOT__flush_unit__DOT__state_r)) 
                                             << 1U) 
                                            | (5U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__g_banks__BRA__0__KET____DOT__bank__DOT__flush_unit__DOT__state_r))))));
            if ((0xfU == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__flush_done_n))) {
                vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__state_n = 4U;
                vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__flush_done_n = 0U;
                vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__lock_released_n 
                    = vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__flush_req_mask;
            }
        } else if ((4U == (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__state))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__lock_released_n 
                = ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__lock_released) 
                   & (~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_ready)));
            if ((1U & (~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__lock_released_n)))) {
                vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__state_n = 0U;
            }
        }
    }
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__state_n 
        = (1U & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r) 
                 >> 5U));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_valid_n 
        = (1U & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r));
    if ((0x20U & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r))) {
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__state_n = 0U;
        vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_valid_n = 1U;
    } else {
        if (((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__pipe_reg__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r) 
             & ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_req_nc_valids)
                 ? (((~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__mem_req_buf__DOT__g_eb1__DOT__pipe_buffer__DOT__g_register__DOT__g_pipe_regs__BRA__0__KET____DOT__pipe_register__DOT__g_depth1__DOT__g_partial_reset__DOT__value_r)) 
                     & (~ ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__mem_req_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_no_out_reg__DOT__fifo_state) 
                           >> 1U))) & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_bypass__DOT__cache_bypass__DOT__core_req_nc_valids))
                 : ((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__core_req_ready) 
                    & (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__dcache__DOT__g_cache_wrap__BRA__0__KET____DOT__cache_wrap__DOT__g_cache__DOT__cache__DOT__flush_unit__DOT__g_core_bus_out_req__BRA__0__KET____DOT__input_enable))))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_valid_n = 0U;
        }
        if ((((IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_lmem_switches__BRA__0__KET____DOT__lmem_switch__DOT__req_global_buf__DOT__g_eb2__DOT__stream_buffer__DOT__g_out_reg__DOT__valid_out_r) 
              & (~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__out_req_valid_n))) 
             & (~ (IData)(vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__req_ibuf__DOT__allocator__DOT__full_r)))) {
            vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__state_n = 1U;
        }
    }
}

VL_ATTR_COLD void VVortex___024root___stl_comb__TOP__64(VVortex___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex___024root___stl_comb__TOP__64\n"); );
    // Body
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__0__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__1__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__2__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[1U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[1U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[2U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[2U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[3U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[3U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[4U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[4U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[5U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[5U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[6U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[6U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[7U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[7U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[8U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[8U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[9U] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[9U];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xaU] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xaU];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xbU] 
        = vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xbU];
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xcU] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         << 0x19U) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                           >> 7U)))) 
            << 9U) | ((0x100U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                 << 2U)) | ((0xfcU 
                                             & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU] 
                                                << 2U)) 
                                            | vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT__last_tid_select__DOT__d_n
                                            [0U])));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xdU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            << 0x12U) | ((0x3c000U & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU] 
                                      << 2U)) | (((IData)(
                                                          (0x1fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                               << 0x19U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                 >> 7U)))) 
                                                  >> 0x17U) 
                                                 | ((IData)(
                                                            ((0x1fffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                                  << 0x19U) 
                                                                 | ((QData)((IData)(
                                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xcU])) 
                                                                    >> 7U))) 
                                                             >> 0x20U)) 
                                                    << 9U))));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__dispatch__DOT____Vcellinp__g_buffers__BRA__3__KET____DOT__buffer__data_in[0xeU] 
        = (((IData)((0x3fffffffffULL & (((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                         >> 0x12U)))) 
            >> 0xeU) | ((IData)(((0x3fffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xeU])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__issue__DOT__g_issue_slices__BRA__0__KET____DOT__issue_slice__DOT__operands_if.data[0xdU])) 
                                                >> 0x12U))) 
                                 >> 0x20U)) << 0x12U));
}

VL_ATTR_COLD void VVortex___024root___stl_comb__TOP__81(VVortex___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex___024root___stl_comb__TOP__81\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0xfffffffU 
                                               & ((vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[6U] 
                                                   << 2U) 
                                                  | (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[5U] 
                                                     >> 0x1eU))))) 
                              << 0x1cU) | (QData)((IData)(
                                                          (0xfffffffU 
                                                           & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[5U])))));
    __Vtemp_2[1U] = ((0xff000000U & ((vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[7U] 
                                      << 0x1cU) | (0xf000000U 
                                                   & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[6U] 
                                                      >> 4U)))) 
                     | (IData)(((((QData)((IData)((0xfffffffU 
                                                   & ((vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[6U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[5U] 
                                                         >> 0x1eU))))) 
                                  << 0x1cU) | (QData)((IData)(
                                                              (0xfffffffU 
                                                               & vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[5U])))) 
                                >> 0x20U)));
    __Vtemp_2[2U] = ((0xfff00000U & ((vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[8U] 
                                      << 0x1aU) | (0x3f00000U 
                                                   & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[7U] 
                                                      >> 6U)))) 
                     | (0xfffffU & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[7U] 
                                    >> 4U)));
    __Vtemp_2[3U] = (0xffffU & (vlSymsp->TOP__Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__lsu_dcache_if__BRA__0__KET__.req_data[8U] 
                                >> 6U));
    vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__seed_addr_n 
        = (0xfffffffU & ((0x6fU >= (0x7fU & ((IData)(0x1cU) 
                                             * vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U])))
                          ? (((0U == (0x1fU & ((IData)(0x1cU) 
                                               * vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                               [0U])))
                               ? 0U : (__Vtemp_2[(((IData)(0x1bU) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x1cU) 
                                                       * 
                                                       vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                       [0U]))) 
                                                  >> 5U)] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 * 
                                                 vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                 [0U]))))) 
                             | (__Vtemp_2[(3U & (((IData)(0x1cU) 
                                                  * 
                                                  vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                                  [0U]) 
                                                 >> 5U))] 
                                >> (0x1fU & ((IData)(0x1cU) 
                                             * vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT__g_seed_gen__BRA__0__KET____DOT__priority_encoder__DOT__g_model1__DOT__lzc__DOT__g_lzc__DOT__find_first__DOT__d_n
                                             [0U]))))
                          : vlSelf->Vortex__DOT__g_clusters__BRA__0__KET____DOT__cluster__DOT__g_sockets__BRA__0__KET____DOT__socket__DOT__g_cores__BRA__0__KET____DOT__core__DOT__mem_unit__DOT__g_enabled__DOT__g_coalescers__BRA__0__KET____DOT__mem_coalescer__DOT____Vxrand_h39f4912a__0));
}
