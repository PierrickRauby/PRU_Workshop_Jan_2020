/**
 *  @Component:   TSC
 *
 *  @Filename:    tsc_adc_ss_cred.h
 *
 ============================================================================ */
/*
* Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
*/
/*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*    Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/
#ifndef _HW_TSC_ADC_SS_H_
#define _HW_TSC_ADC_SS_H_
#ifdef __cplusplus
extern "C" {
#endif
/***********************************************************************\
 * Register arrays Definition
\***********************************************************************/
/***********************************************************************\
 * Bundle arrays Definition
\***********************************************************************/
/***********************************************************************\
 * Bundles Definition
\***********************************************************************/
/*************************************************************************\
 * Registers Definition
\*************************************************************************/
#define TSC_ADC_SS_REVISION   (0x0)
#define TSC_ADC_SS_SYSCONFIG   (0x10)
#define TSC_ADC_SS_IRQ_EOI   (0x20)
#define TSC_ADC_SS_IRQSTATUS_RAW   (0x24)
#define TSC_ADC_SS_IRQSTATUS   (0x28)
#define TSC_ADC_SS_IRQENABLE_SET   (0x2c)
#define TSC_ADC_SS_IRQENABLE_CLR   (0x30)
#define TSC_ADC_SS_IRQWAKEUP   (0x34)
#define TSC_ADC_SS_DMAENABLE_SET   (0x38)
#define TSC_ADC_SS_DMAENABLE_CLR   (0x3c)
#define TSC_ADC_SS_CTRL   (0x40)
#define TSC_ADC_SS_ADCSTAT   (0x44)
#define TSC_ADC_SS_ADCRANGE   (0x48)
#define TSC_ADC_SS_ADC_CLKDIV   (0x4c)
#define TSC_ADC_SS_ADC_MISC   (0x50)
#define TSC_ADC_SS_STEPENABLE   (0x54)
#define TSC_ADC_SS_IDLECONFIG   (0x58)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG   (0x5c)
#define TSC_ADC_SS_TS_CHARGE_DELAY   (0x60)
#define TSC_ADC_SS_STEPCONFIG(n)   (0x64 + ((n) * 0x8))
#define TSC_ADC_SS_STEPDELAY(n)    (0x68 + ((n) * 0x8))
#define TSC_ADC_SS_FIFOCOUNT(n)   (0xe4 + (n * 0xc))
#define TSC_ADC_SS_FIFOTHRESHOLD(n)   (0xe8 + (n * 0xc))
#define TSC_ADC_SS_DMAREQ(n)   (0xec + (n * 0xc))
#define TSC_ADC_SS_FIFODATA(n)   (0x100 + (n * 0x100))
/**************************************************************************\ 
 * Field Definition Macros
\**************************************************************************/
/* REVISION */
#define TSC_ADC_SS_REVISION_CUSTOM   (0x000000C0u)
#define TSC_ADC_SS_REVISION_CUSTOM_SHIFT   (0x00000006u)
#define TSC_ADC_SS_REVISION_FUNC   (0x0FFF0000u)
#define TSC_ADC_SS_REVISION_FUNC_SHIFT   (0x00000010u)
#define TSC_ADC_SS_REVISION_R_RTL   (0x0000F800u)
#define TSC_ADC_SS_REVISION_R_RTL_SHIFT   (0x0000000Bu)
#define TSC_ADC_SS_REVISION_SCHEME   (0xC0000000u)
#define TSC_ADC_SS_REVISION_SCHEME_SHIFT   (0x0000001Eu)
#define TSC_ADC_SS_REVISION_X_MAJOR   (0x00000700u)
#define TSC_ADC_SS_REVISION_X_MAJOR_SHIFT   (0x00000008u)
#define TSC_ADC_SS_REVISION_Y_MINOR   (0x0000003Fu)
#define TSC_ADC_SS_REVISION_Y_MINOR_SHIFT   (0x00000000u)
/* SYSCONFIG */
#define TSC_ADC_SS_SYSCONFIG_IDLEMODE   (0x0000000Cu)
#define TSC_ADC_SS_SYSCONFIG_IDLEMODE_SHIFT   (0x00000002u)
#define TSC_ADC_SS_SYSCONFIG_IDLEMODE_FORCE   (0x0)
#define TSC_ADC_SS_SYSCONFIG_IDLEMODE_NO_IDLE (0x1)
#define TSC_ADC_SS_SYSCONFIG_IDLEMODE_SMART_IDLE (0x2)
#define TSC_ADC_SS_SYSCONFIG_IDLEMODE_SMART_IDLE_WAKEUP (0x3)
/* IRQ_EOI */
#define TSC_ADC_SS_IRQ_EOI_LINE_NUMBER   (0x00000001u)
#define TSC_ADC_SS_IRQ_EOI_LINE_NUMBER_SHIFT   (0x00000000u)
/* IRQSTATUS_RAW */
#define TSC_ADC_SS_IRQSTATUS_RAW_END_OF_SEQUENCE   (0x00000002u)
#define TSC_ADC_SS_IRQSTATUS_RAW_END_OF_SEQUENCE_SHIFT   (0x00000001u)
#define TSC_ADC_SS_IRQSTATUS_RAW_END_OF_SEQUENCE_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_END_OF_SEQUENCE_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_RAW_END_OF_SEQUENCE_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_OVERRUN   (0x00000008u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_OVERRUN_SHIFT   (0x00000003u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_OVERRUN_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_OVERRUN_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_OVERRUN_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_THRESHOLD   (0x00000004u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_THRESHOLD_SHIFT   (0x00000002u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_THRESHOLD_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_THRESHOLD_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_THRESHOLD_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_UNDERFLOW   (0x00000010u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_UNDERFLOW_SHIFT   (0x00000004u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_UNDERFLOW_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_UNDERFLOW_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO0_UNDERFLOW_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_OVERRUN   (0x00000040u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_OVERRUN_SHIFT   (0x00000006u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_OVERRUN_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_OVERRUN_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_OVERRUN_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_THRESHOLD   (0x00000020u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_THRESHOLD_SHIFT   (0x00000005u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_THRESHOLD_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_THRESHOLD_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_THRESHOLD_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_UNDERFLOW   (0x00000080u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_UNDERFLOW_SHIFT   (0x00000007u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_UNDERFLOW_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_UNDERFLOW_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_RAW_FIFO1_UNDERFLOW_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_HW_PEN_EVENT   (0x00000001u)
#define TSC_ADC_SS_IRQSTATUS_RAW_HW_PEN_EVENT_SHIFT   (0x00000000u)
#define TSC_ADC_SS_IRQSTATUS_RAW_OUT_OF_RANGE   (0x00000100u)
#define TSC_ADC_SS_IRQSTATUS_RAW_OUT_OF_RANGE_SHIFT   (0x00000008u)
#define TSC_ADC_SS_IRQSTATUS_RAW_OUT_OF_RANGE_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_OUT_OF_RANGE_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_RAW_OUT_OF_RANGE_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_PEN_IRQ   (0x00000400u)
#define TSC_ADC_SS_IRQSTATUS_RAW_PEN_IRQ_SHIFT   (0x0000000Au)
#define TSC_ADC_SS_IRQSTATUS_RAW_PEN_IRQ_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_PEN_IRQ_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_RAW_PEN_IRQ_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_PEN_UP_EVENT   (0x00000200u)
#define TSC_ADC_SS_IRQSTATUS_RAW_PEN_UP_EVENT_SHIFT   (0x00000009u)
#define TSC_ADC_SS_IRQSTATUS_RAW_PEN_UP_EVENT_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_RAW_PEN_UP_EVENT_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_RAW_PEN_UP_EVENT_SETEVENT   (0x1u)
/* IRQSTATUS */
#define TSC_ADC_SS_IRQSTATUS_END_OF_SEQUENCE   (0x00000002u)
#define TSC_ADC_SS_IRQSTATUS_END_OF_SEQUENCE_SHIFT   (0x00000001u)
#define TSC_ADC_SS_IRQSTATUS_END_OF_SEQUENCE_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_END_OF_SEQUENCE_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_END_OF_SEQUENCE_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_OVERRUN   (0x00000008u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_OVERRUN_SHIFT   (0x00000003u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_OVERRUN_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_OVERRUN_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_OVERRUN_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_THRESHOLD   (0x00000004u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_THRESHOLD_SHIFT   (0x00000002u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_THRESHOLD_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_THRESHOLD_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_THRESHOLD_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_UNDERFLOW   (0x00000010u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_UNDERFLOW_SHIFT   (0x00000004u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_UNDERFLOW_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_UNDERFLOW_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_FIFO0_UNDERFLOW_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_OVERRUN   (0x00000040u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_OVERRUN_SHIFT   (0x00000006u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_OVERRUN_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_OVERRUN_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_OVERRUN_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_THRESHOLD   (0x00000020u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_THRESHOLD_SHIFT   (0x00000005u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_THRESHOLD_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_THRESHOLD_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_THRESHOLD_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_UNDERFLOW   (0x00000080u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_UNDERFLOW_SHIFT   (0x00000007u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_UNDERFLOW_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_UNDERFLOW_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_FIFO1_UNDERFLOW_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_HW_PEN_EVENT   (0x00000001u)
#define TSC_ADC_SS_IRQSTATUS_HW_PEN_EVENT_SHIFT   (0x00000000u)
#define TSC_ADC_SS_IRQSTATUS_OUT_OF_RANGE   (0x00000100u)
#define TSC_ADC_SS_IRQSTATUS_OUT_OF_RANGE_SHIFT   (0x00000008u)
#define TSC_ADC_SS_IRQSTATUS_OUT_OF_RANGE_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_OUT_OF_RANGE_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_OUT_OF_RANGE_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_PEN_IRQ   (0x00000400u)
#define TSC_ADC_SS_IRQSTATUS_PEN_IRQ_SHIFT   (0x0000000Au)
#define TSC_ADC_SS_IRQSTATUS_PEN_IRQ_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_PEN_IRQ_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_PEN_IRQ_SETEVENT   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_PEN_UP_EVENT   (0x00000200u)
#define TSC_ADC_SS_IRQSTATUS_PEN_UP_EVENT_SHIFT   (0x00000009u)
#define TSC_ADC_SS_IRQSTATUS_PEN_UP_EVENT_EVENTPENDING   (0x1u)
#define TSC_ADC_SS_IRQSTATUS_PEN_UP_EVENT_NOEVENTPEND   (0x0u)
#define TSC_ADC_SS_IRQSTATUS_PEN_UP_EVENT_SETEVENT   (0x1u)
/* IRQENABLE_SET */
#define TSC_ADC_SS_IRQENABLE_SET_END_OF_SEQUENCE   (0x00000002u)
#define TSC_ADC_SS_IRQENABLE_SET_END_OF_SEQUENCE_SHIFT   (0x00000001u)
#define TSC_ADC_SS_IRQENABLE_SET_END_OF_SEQUENCE_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_SET_END_OF_SEQUENCE_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_END_OF_SEQUENCE_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_OVERRUN   (0x00000008u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_OVERRUN_SHIFT   (0x00000003u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_OVERRUN_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_OVERRUN_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_OVERRUN_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_THRESHOLD   (0x00000004u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_THRESHOLD_SHIFT   (0x00000002u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_UNDERFLOW   (0x00000010u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_UNDERFLOW_SHIFT   (0x00000004u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_UNDERFLOW_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_UNDERFLOW_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO0_UNDERFLOW_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_OVERRUN   (0x00000040u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_OVERRUN_SHIFT   (0x00000006u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_OVERRUN_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_OVERRUN_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_OVERRUN_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_THRESHOLD   (0x00000020u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_THRESHOLD_SHIFT   (0x00000005u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_THRESHOLD_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_THRESHOLD_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_THRESHOLD_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_UNDERFLOW   (0x00000080u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_UNDERFLOW_SHIFT   (0x00000007u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_UNDERFLOW_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_UNDERFLOW_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_FIFO1_UNDERFLOW_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_HW_PEN_EVENT_ASYNC   (0x00000001u)
#define TSC_ADC_SS_IRQENABLE_SET_HW_PEN_EVENT_ASYNC_SHIFT   (0x00000000u)
#define TSC_ADC_SS_IRQENABLE_SET_HW_PEN_EVENT_ASYNC_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_SET_HW_PEN_EVENT_ASYNC_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_HW_PEN_EVENT_ASYNC_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_HW_PEN_EVENT_SYNC   (0x00000400u)
#define TSC_ADC_SS_IRQENABLE_SET_HW_PEN_EVENT_SYNC_SHIFT   (0x0000000Au)
#define TSC_ADC_SS_IRQENABLE_SET_HW_PEN_EVENT_SYNC_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_SET_HW_PEN_EVENT_SYNC_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_HW_PEN_EVENT_SYNC_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_OUT_OF_RANGE   (0x00000100u)
#define TSC_ADC_SS_IRQENABLE_SET_OUT_OF_RANGE_SHIFT   (0x00000008u)
#define TSC_ADC_SS_IRQENABLE_SET_OUT_OF_RANGE_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_SET_OUT_OF_RANGE_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_OUT_OF_RANGE_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_PEN_UP_EVENT   (0x00000200u)
#define TSC_ADC_SS_IRQENABLE_SET_PEN_UP_EVENT_SHIFT   (0x00000009u)
#define TSC_ADC_SS_IRQENABLE_SET_PEN_UP_EVENT_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_SET_PEN_UP_EVENT_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_SET_PEN_UP_EVENT_ENABLED   (0x1u)
/* IRQENABLE_CLR */
#define TSC_ADC_SS_IRQENABLE_CLR_END_OF_SEQUENCE   (0x00000002u)
#define TSC_ADC_SS_IRQENABLE_CLR_END_OF_SEQUENCE_SHIFT   (0x00000001u)
#define TSC_ADC_SS_IRQENABLE_CLR_END_OF_SEQUENCE_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_CLR_END_OF_SEQUENCE_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_END_OF_SEQUENCE_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_OVERRUN   (0x00000008u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_OVERRUN_SHIFT   (0x00000003u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_OVERRUN_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_OVERRUN_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_OVERRUN_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_THRESHOLD   (0x00000004u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_THRESHOLD_SHIFT   (0x00000002u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_UNDERFLOW   (0x00000010u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_UNDERFLOW_SHIFT   (0x00000004u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_UNDERFLOW_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_UNDERFLOW_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO0_UNDERFLOW_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_OVERRUN   (0x00000040u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_OVERRUN_SHIFT   (0x00000006u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_OVERRUN_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_OVERRUN_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_OVERRUN_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_THRESHOLD   (0x00000020u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_THRESHOLD_SHIFT   (0x00000005u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_THRESHOLD_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_THRESHOLD_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_THRESHOLD_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_UNDERFLOW   (0x00000080u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_UNDERFLOW_SHIFT   (0x00000007u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_UNDERFLOW_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_UNDERFLOW_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_FIFO1_UNDERFLOW_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_HW_PEN_EVENT_ASYNC   (0x00000001u)
#define TSC_ADC_SS_IRQENABLE_CLR_HW_PEN_EVENT_ASYNC_SHIFT   (0x00000000u)
#define TSC_ADC_SS_IRQENABLE_CLR_HW_PEN_EVENT_ASYNC_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_CLR_HW_PEN_EVENT_ASYNC_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_HW_PEN_EVENT_ASYNC_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_HW_PEN_EVENT_SYNC   (0x00000400u)
#define TSC_ADC_SS_IRQENABLE_CLR_HW_PEN_EVENT_SYNC_SHIFT   (0x0000000Au)
#define TSC_ADC_SS_IRQENABLE_CLR_HW_PEN_EVENT_SYNC_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_CLR_HW_PEN_EVENT_SYNC_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_HW_PEN_EVENT_SYNC_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_OUT_OF_RANGE   (0x00000100u)
#define TSC_ADC_SS_IRQENABLE_CLR_OUT_OF_RANGE_SHIFT   (0x00000008u)
#define TSC_ADC_SS_IRQENABLE_CLR_OUT_OF_RANGE_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_CLR_OUT_OF_RANGE_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_OUT_OF_RANGE_ENABLED   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_PEN_UP_EVENT   (0x00000200u)
#define TSC_ADC_SS_IRQENABLE_CLR_PEN_UP_EVENT_SHIFT   (0x00000009u)
#define TSC_ADC_SS_IRQENABLE_CLR_PEN_UP_EVENT_DISABLED   (0x0u)
#define TSC_ADC_SS_IRQENABLE_CLR_PEN_UP_EVENT_ENABLE   (0x1u)
#define TSC_ADC_SS_IRQENABLE_CLR_PEN_UP_EVENT_ENABLED   (0x1u)
/* IRQWAKEUP */
#define TSC_ADC_SS_IRQWAKEUP_WAKEEN0   (0x00000001u)
#define TSC_ADC_SS_IRQWAKEUP_WAKEEN0_SHIFT   (0x00000000u)
/* DMAENABLE_SET */
#define TSC_ADC_SS_DMAENABLE_SET_ENABLE0   (0x00000001u)
#define TSC_ADC_SS_DMAENABLE_SET_ENABLE0_SHIFT   (0x00000000u)
#define TSC_ADC_SS_DMAENABLE_SET_ENABLE1   (0x00000002u)
#define TSC_ADC_SS_DMAENABLE_SET_ENABLE1_SHIFT   (0x00000001u)
/* DMAENABLE_CLR */
#define TSC_ADC_SS_DMAENABLE_CLR_ENABLE0   (0x00000001u)
#define TSC_ADC_SS_DMAENABLE_CLR_ENABLE0_SHIFT   (0x00000000u)
#define TSC_ADC_SS_DMAENABLE_CLR_ENABLE1   (0x00000002u)
#define TSC_ADC_SS_DMAENABLE_CLR_ENABLE1_SHIFT   (0x00000001u)
/* CTRL */
#define TSC_ADC_SS_CTRL_ADC_BIAS_SELECT   (0x00000008u)
#define TSC_ADC_SS_CTRL_ADC_BIAS_SELECT_SHIFT   (0x00000003u)
#define TSC_ADC_SS_CTRL_ADC_BIAS_SELECT_EXTERNAL   (0x1u)
#define TSC_ADC_SS_CTRL_ADC_BIAS_SELECT_INTERNAL   (0x0u)
#define TSC_ADC_SS_CTRL_AFE_PEN_CTRL   (0x00000060u)
#define TSC_ADC_SS_CTRL_AFE_PEN_CTRL_SHIFT   (0x00000005u)
#define TSC_ADC_SS_CTRL_ENABLE   (0x00000001u)
#define TSC_ADC_SS_CTRL_ENABLE_SHIFT   (0x00000000u)
#define TSC_ADC_SS_CTRL_ENABLE_DISABLE   (0x0u)
#define TSC_ADC_SS_CTRL_ENABLE_ENABLE   (0x1u)
#define TSC_ADC_SS_CTRL_HW_EVENT_MAPPING   (0x00000100u)
#define TSC_ADC_SS_CTRL_HW_EVENT_MAPPING_SHIFT   (0x00000008u)
#define TSC_ADC_SS_CTRL_HW_EVENT_MAPPING_HWEVENTINPUT   (0x1u)
#define TSC_ADC_SS_CTRL_HW_EVENT_MAPPING_PENTOUCHIRQ   (0x0u)
#define TSC_ADC_SS_CTRL_HW_PREEMPT   (0x00000200u)
#define TSC_ADC_SS_CTRL_HW_PREEMPT_SHIFT   (0x00000009u)
#define TSC_ADC_SS_CTRL_HW_PREEMPT_NOPREEMPT   (0x0u)
#define TSC_ADC_SS_CTRL_HW_PREEMPT_PREEMPT   (0x1u)
#define TSC_ADC_SS_CTRL_POWER_DOWN   (0x00000010u)
#define TSC_ADC_SS_CTRL_POWER_DOWN_SHIFT   (0x00000004u)
#define TSC_ADC_SS_CTRL_POWER_DOWN_AFEPOWERDOWN   (0x1u)
#define TSC_ADC_SS_CTRL_POWER_DOWN_AFEPOWERUP   (0x0u)
#define TSC_ADC_SS_CTRL_STEPCONFIG_WRITEPROTECT_N   (0x00000004u)
#define TSC_ADC_SS_CTRL_STEPCONFIG_WRITEPROTECT_N_SHIFT   (0x00000002u)
#define TSC_ADC_SS_CTRL_STEPCONFIG_WRITEPROTECT_N_NOTPROTECTED   (0x1u)
#define TSC_ADC_SS_CTRL_STEPCONFIG_WRITEPROTECT_N_PROTECTED   (0x0u)
#define TSC_ADC_SS_CTRL_STERP_ID_TAG   (0x00000002u)
#define TSC_ADC_SS_CTRL_STERP_ID_TAG_SHIFT   (0x00000001u)
#define TSC_ADC_SS_CTRL_STERP_ID_TAG_CHANNELID   (0x1u)
#define TSC_ADC_SS_CTRL_STERP_ID_TAG_WRZERO   (0x0u)
#define TSC_ADC_SS_CTRL_TOUCH_SCREEN_ENABLE   (0x00000080u)
#define TSC_ADC_SS_CTRL_TOUCH_SCREEN_ENABLE_SHIFT   (0x00000007u)
#define TSC_ADC_SS_CTRL_TOUCH_SCREEN_ENABLE_DISABLED   (0x0u)
#define TSC_ADC_SS_CTRL_TOUCH_SCREEN_ENABLE_ENABLED   (0x1u)
/* ADCSTAT */
#define TSC_ADC_SS_ADCSTAT_FSM_BUSY   (0x00000020u)
#define TSC_ADC_SS_ADCSTAT_FSM_BUSY_SHIFT   (0x00000005u)
#define TSC_ADC_SS_ADCSTAT_FSM_BUSY_BUSY   (0x1u)
#define TSC_ADC_SS_ADCSTAT_FSM_BUSY_IDLE   (0x0u)
#define TSC_ADC_SS_ADCSTAT_PEN_IRQ0   (0x00000040u)
#define TSC_ADC_SS_ADCSTAT_PEN_IRQ0_SHIFT   (0x00000006u)
#define TSC_ADC_SS_ADCSTAT_PEN_IRQ1   (0x00000080u)
#define TSC_ADC_SS_ADCSTAT_PEN_IRQ1_SHIFT   (0x00000007u)
#define TSC_ADC_SS_ADCSTAT_STEPID   (0x0000001Fu)
#define TSC_ADC_SS_ADCSTAT_STEPID_SHIFT   (0x00000000u)
#define TSC_ADC_SS_ADCSTAT_STEPID_CHARGE   (0x11u)
#define TSC_ADC_SS_ADCSTAT_STEPID_IDLE   (0x10u)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP1   (0x0u)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP10   (0x9u)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP11   (0xAu)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP12   (0xBu)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP13   (0xCu)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP14   (0xDu)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP15   (0xEu)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP16   (0xFu)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP2   (0x1u)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP3   (0x2u)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP4   (0x3u)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP5   (0x4u)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP6   (0x5u)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP7   (0x6u)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP8   (0x7u)
#define TSC_ADC_SS_ADCSTAT_STEPID_STEP9   (0x8u)
/* ADCRANGE */
#define TSC_ADC_SS_ADCRANGE_HIGH_RANGE_DATA   (0x0FFF0000u)
#define TSC_ADC_SS_ADCRANGE_HIGH_RANGE_DATA_SHIFT   (0x00000010u)
#define TSC_ADC_SS_ADCRANGE_LOW_RANGE_DATA   (0x00000FFFu)
#define TSC_ADC_SS_ADCRANGE_LOW_RANGE_DATA_SHIFT   (0x00000000u)
/* ADC_CLKDIV */
#define TSC_ADC_SS_ADC_CLKDIV_ADC_CLK_DIV   (0x00007FFFu)
#define TSC_ADC_SS_ADC_CLKDIV_ADC_CLK_DIV_SHIFT   (0x00000000u)
/* ADC_MISC */
#define TSC_ADC_SS_ADC_MISC_AFE_SPARE_INPUT   (0x0000000Fu)
#define TSC_ADC_SS_ADC_MISC_AFE_SPARE_INPUT_SHIFT   (0x00000000u)
#define TSC_ADC_SS_ADC_MISC_AFE_SPARE_OUTPUT   (0x000000F0u)
#define TSC_ADC_SS_ADC_MISC_AFE_SPARE_OUTPUT_SHIFT   (0x00000004u)
/* STEPENABLE */
#define TSC_ADC_SS_STEPENABLE_STEP1   (0x00000002u)
#define TSC_ADC_SS_STEPENABLE_STEP1_SHIFT   (0x00000001u)
#define TSC_ADC_SS_STEPENABLE_STEP10   (0x00000400u)
#define TSC_ADC_SS_STEPENABLE_STEP10_SHIFT   (0x0000000Au)
#define TSC_ADC_SS_STEPENABLE_STEP11   (0x00000800u)
#define TSC_ADC_SS_STEPENABLE_STEP11_SHIFT   (0x0000000Bu)
#define TSC_ADC_SS_STEPENABLE_STEP12   (0x00001000u)
#define TSC_ADC_SS_STEPENABLE_STEP12_SHIFT   (0x0000000Cu)
#define TSC_ADC_SS_STEPENABLE_STEP13   (0x00002000u)
#define TSC_ADC_SS_STEPENABLE_STEP13_SHIFT   (0x0000000Du)
#define TSC_ADC_SS_STEPENABLE_STEP14   (0x00004000u)
#define TSC_ADC_SS_STEPENABLE_STEP14_SHIFT   (0x0000000Eu)
#define TSC_ADC_SS_STEPENABLE_STEP15   (0x00008000u)
#define TSC_ADC_SS_STEPENABLE_STEP15_SHIFT   (0x0000000Fu)
#define TSC_ADC_SS_STEPENABLE_STEP16   (0x00010000u)
#define TSC_ADC_SS_STEPENABLE_STEP16_SHIFT   (0x00000010u)
#define TSC_ADC_SS_STEPENABLE_STEP2   (0x00000004u)
#define TSC_ADC_SS_STEPENABLE_STEP2_SHIFT   (0x00000002u)
#define TSC_ADC_SS_STEPENABLE_STEP3   (0x00000008u)
#define TSC_ADC_SS_STEPENABLE_STEP3_SHIFT   (0x00000003u)
#define TSC_ADC_SS_STEPENABLE_STEP4   (0x00000010u)
#define TSC_ADC_SS_STEPENABLE_STEP4_SHIFT   (0x00000004u)
#define TSC_ADC_SS_STEPENABLE_STEP5   (0x00000020u)
#define TSC_ADC_SS_STEPENABLE_STEP5_SHIFT   (0x00000005u)
#define TSC_ADC_SS_STEPENABLE_STEP6   (0x00000040u)
#define TSC_ADC_SS_STEPENABLE_STEP6_SHIFT   (0x00000006u)
#define TSC_ADC_SS_STEPENABLE_STEP7   (0x00000080u)
#define TSC_ADC_SS_STEPENABLE_STEP7_SHIFT   (0x00000007u)
#define TSC_ADC_SS_STEPENABLE_STEP8   (0x00000100u)
#define TSC_ADC_SS_STEPENABLE_STEP8_SHIFT   (0x00000008u)
#define TSC_ADC_SS_STEPENABLE_STEP9   (0x00000200u)
#define TSC_ADC_SS_STEPENABLE_STEP9_SHIFT   (0x00000009u)
#define TSC_ADC_SS_STEPENABLE_TS_CHARGE   (0x00000001u)
#define TSC_ADC_SS_STEPENABLE_TS_CHARGE_SHIFT   (0x00000000u)
/* IDLECONFIG */
#define TSC_ADC_SS_IDLECONFIG_DIFF_CNTRL   (0x02000000u)
#define TSC_ADC_SS_IDLECONFIG_DIFF_CNTRL_SHIFT   (0x00000019u)
#define TSC_ADC_SS_IDLECONFIG_DIFF_CNTRL_DIFFERENTIAL   (0x1u)
#define TSC_ADC_SS_IDLECONFIG_DIFF_CNTRL_SINGLE   (0x0u)
#define TSC_ADC_SS_IDLECONFIG_SEL_INM_SWM   (0x00078000u)
#define TSC_ADC_SS_IDLECONFIG_SEL_INM_SWM_SHIFT   (0x0000000Fu)
#define TSC_ADC_SS_IDLECONFIG_SEL_INM_SWM_CHANNEL_1   (0x000u)
#define TSC_ADC_SS_IDLECONFIG_SEL_INM_SWM_CHANNEL_8   (0x0111u)
#define TSC_ADC_SS_IDLECONFIG_SEL_INP_SWC   (0x00780000u)
#define TSC_ADC_SS_IDLECONFIG_SEL_INP_SWC_SHIFT   (0x00000013u)
#define TSC_ADC_SS_IDLECONFIG_SEL_INP_SWC_CHANNEL_1   (0x000u)
#define TSC_ADC_SS_IDLECONFIG_SEL_INP_SWC_CHANNEL_8   (0x0111u)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFM_SWC   (0x01800000u)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFM_SWC_SHIFT   (0x00000017u)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFM_SWC_ADCREFM   (0x3u)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFM_SWC_VSSA   (0x0u)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFM_SWC_XNUR   (0x1u)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFM_SWC_YNLR   (0x2u)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFP_SWC   (0x00007000u)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFP_SWC_SHIFT   (0x0000000Cu)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFP_SWC_ADCREFP   (0x3u)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFP_SWC_VDDA   (0x0u)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFP_SWC_XPUL   (0x1u)
#define TSC_ADC_SS_IDLECONFIG_SEL_RFP_SWC_YPLL   (0x2u)
#define TSC_ADC_SS_IDLECONFIG_WPNSW_SWC   (0x00000800u)
#define TSC_ADC_SS_IDLECONFIG_WPNSW_SWC_SHIFT   (0x0000000Bu)
#define TSC_ADC_SS_IDLECONFIG_XNNSW_SWC   (0x00000040u)
#define TSC_ADC_SS_IDLECONFIG_XNNSW_SWC_SHIFT   (0x00000006u)
#define TSC_ADC_SS_IDLECONFIG_XNPSW_SWC   (0x00000200u)
#define TSC_ADC_SS_IDLECONFIG_XNPSW_SWC_SHIFT   (0x00000009u)
#define TSC_ADC_SS_IDLECONFIG_XPPSW_SWC   (0x00000020u)
#define TSC_ADC_SS_IDLECONFIG_XPPSW_SWC_SHIFT   (0x00000005u)
#define TSC_ADC_SS_IDLECONFIG_YNNSW_SWC   (0x00000100u)
#define TSC_ADC_SS_IDLECONFIG_YNNSW_SWC_SHIFT   (0x00000008u)
#define TSC_ADC_SS_IDLECONFIG_YPNSW_SWC   (0x00000400u)
#define TSC_ADC_SS_IDLECONFIG_YPNSW_SWC_SHIFT   (0x0000000Au)
#define TSC_ADC_SS_IDLECONFIG_YPPSW_SWC   (0x00000080u)
#define TSC_ADC_SS_IDLECONFIG_YPPSW_SWC_SHIFT   (0x00000007u)
/* TS_CHARGE_STEPCONFIG */
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_DIFF_CNTRL   (0x02000000u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_DIFF_CNTRL_SHIFT   (0x00000019u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_DIFF_CNTRL_DIFFERENTIAL   (0x1u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_DIFF_CNTRL_SINGLE   (0x0u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_INM_SWM   (0x00078000u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_INM_SWM_SHIFT   (0x0000000Fu)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_INM_SWM_CHANNEL_1   (0x000u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_INM_SWM_CHANNEL_8   (0x0111u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_INP_SWC   (0x00780000u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_INP_SWC_SHIFT   (0x00000013u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_INP_SWC_CHANNEL_1   (0x000u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_INP_SWC_CHANNEL_8   (0x0111u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFM_SWC   (0x01800000u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFM_SWC_SHIFT   (0x00000017u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFM_SWC_ADCREFM   (0x3u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFM_SWC_VSSA   (0x0u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFM_SWC_XNUR   (0x1u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFM_SWC_YNLR   (0x2u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFP_SWC   (0x00007000u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFP_SWC_SHIFT   (0x0000000Cu)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFP_SWC_ADCREFP   (0x3u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFP_SWC_VDDA   (0x0u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFP_SWC_XPUL   (0x1u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_SEL_RFP_SWC_YPLL   (0x2u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_WPNSW_SWC   (0x00000800u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_WPNSW_SWC_SHIFT   (0x0000000Bu)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_XNNSW_SWC   (0x00000040u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_XNNSW_SWC_SHIFT   (0x00000006u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_XNPSW_SWC   (0x00000200u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_XNPSW_SWC_SHIFT   (0x00000009u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_XPPSW_SWC   (0x00000020u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_XPPSW_SWC_SHIFT   (0x00000005u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_YNNSW_SWC   (0x00000100u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_YNNSW_SWC_SHIFT   (0x00000008u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_YPNSW_SWC   (0x00000400u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_YPNSW_SWC_SHIFT   (0x0000000Au)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_YPPSW_SWC   (0x00000080u)
#define TSC_ADC_SS_TS_CHARGE_STEPCONFIG_YPPSW_SWC_SHIFT   (0x00000007u)
/* TS_CHARGE_DELAY */
#define TSC_ADC_SS_TS_CHARGE_DELAY_OPEN_DELAY   (0x0003FFFFu)
#define TSC_ADC_SS_TS_CHARGE_DELAY_OPEN_DELAY_SHIFT   (0x00000000u)
/* TSC_ADC_SS_STEPCONFIG */
#define  TSC_ADC_SS_STEPCONFIG_AVERAGING   (0x0000001Cu)
#define  TSC_ADC_SS_STEPCONFIG_AVERAGING_SHIFT   (0x00000002u)
#define  TSC_ADC_SS_STEPCONFIG_AVERAGING_16SAMPLESAVG   (0x4u)
#define  TSC_ADC_SS_STEPCONFIG_AVERAGING_2SAMPLESAVG   (0x1u)
#define  TSC_ADC_SS_STEPCONFIG_AVERAGING_4SAMPLESAVG   (0x2u)
#define  TSC_ADC_SS_STEPCONFIG_AVERAGING_8SAMPLESAVG   (0x3u)
#define  TSC_ADC_SS_STEPCONFIG_AVERAGING_NOAVG   (0x0u)
#define  TSC_ADC_SS_STEPCONFIG_DIFF_CNTRL   (0x02000000u)
#define  TSC_ADC_SS_STEPCONFIG_DIFF_CNTRL_SHIFT   (0x00000019u)
#define  TSC_ADC_SS_STEPCONFIG_FIFO_SELECT   (0x04000000u)
#define  TSC_ADC_SS_STEPCONFIG_FIFO_SELECT_SHIFT   (0x0000001Au)
#define  TSC_ADC_SS_STEPCONFIG_FIFO_SELECT_FIFO_0   (0x0u)
#define  TSC_ADC_SS_STEPCONFIG_FIFO_SELECT_FIFO_1   (0x1u)
#define  TSC_ADC_SS_STEPCONFIG_MODE   (0x00000003u)
#define  TSC_ADC_SS_STEPCONFIG_MODE_SHIFT   (0x00000000u)
#define  TSC_ADC_SS_STEPCONFIG_MODE_HW_SYNC_CONTINUOUS   (0x3u)
#define  TSC_ADC_SS_STEPCONFIG_MODE_HW_SYNC_ONESHOT   (0x2u)
#define  TSC_ADC_SS_STEPCONFIG_MODE_SW_EN_CONTINUOUS   (0x1u)
#define  TSC_ADC_SS_STEPCONFIG_MODE_SW_EN_ONESHOT   (0x0u)
#define  TSC_ADC_SS_STEPCONFIG_RANGE_CHECK   (0x08000000u)
#define  TSC_ADC_SS_STEPCONFIG_RANGE_CHECK_SHIFT   (0x0000001Bu)
#define  TSC_ADC_SS_STEPCONFIG_RANGE_CHECK_DISABLE   (0x0u)
#define  TSC_ADC_SS_STEPCONFIG_RANGE_CHECK_ENABLE   (0x1u)
#define  TSC_ADC_SS_STEPCONFIG_SEL_INM_SWM   (0x00078000u)
#define  TSC_ADC_SS_STEPCONFIG_SEL_INM_SWM_SHIFT   (0x0000000Fu)
#define  TSC_ADC_SS_STEPCONFIG_SEL_INP_SWC   (0x00780000u)
#define  TSC_ADC_SS_STEPCONFIG_SEL_INP_SWC_SHIFT   (0x00000013u)
#define  TSC_ADC_SS_STEPCONFIG_SEL_RFM_SWC   (0x01800000u)
#define  TSC_ADC_SS_STEPCONFIG_SEL_RFM_SWC_SHIFT   (0x00000017u)
#define  TSC_ADC_SS_STEPCONFIG_SEL_RFP_SWC   (0x00007000u)
#define  TSC_ADC_SS_STEPCONFIG_SEL_RFP_SWC_SHIFT   (0x0000000Cu)
#define  TSC_ADC_SS_STEPCONFIG_WPNSW_SWC   (0x00000800u)
#define  TSC_ADC_SS_STEPCONFIG_WPNSW_SWC_SHIFT   (0x0000000Bu)
#define  TSC_ADC_SS_STEPCONFIG_XNNSW_SWC   (0x00000040u)
#define  TSC_ADC_SS_STEPCONFIG_XNNSW_SWC_SHIFT   (0x00000006u)
#define  TSC_ADC_SS_STEPCONFIG_XNPSW_SWC   (0x00000200u)
#define  TSC_ADC_SS_STEPCONFIG_XNPSW_SWC_SHIFT   (0x00000009u)
#define  TSC_ADC_SS_STEPCONFIG_XPPSW_SWC   (0x00000020u)
#define  TSC_ADC_SS_STEPCONFIG_XPPSW_SWC_SHIFT   (0x00000005u)
#define  TSC_ADC_SS_STEPCONFIG_YNNSW_SWC   (0x00000100u)
#define  TSC_ADC_SS_STEPCONFIG_YNNSW_SWC_SHIFT   (0x00000008u)
#define  TSC_ADC_SS_STEPCONFIG_YPNSW_SWC   (0x00000400u)
#define  TSC_ADC_SS_STEPCONFIG_YPNSW_SWC_SHIFT   (0x0000000Au)
#define  TSC_ADC_SS_STEPCONFIG_YPPSW_SWC   (0x00000080u)
#define  TSC_ADC_SS_STEPCONFIG_YPPSW_SWC_SHIFT   (0x00000007u)
/* TSC_ADC_SS_STEPDELAY */
#define  TSC_ADC_SS_STEPDELAY_OPEN_DELAY   (0x0003FFFFu)
#define  TSC_ADC_SS_STEPDELAY_OPEN_DELAY_SHIFT   (0x00000000u)
#define  TSC_ADC_SS_STEPDELAY_SAMPLE_DELAY   (0xFF000000u)
#define  TSC_ADC_SS_STEPDELAY_SAMPLE_DELAY_SHIFT   (0x00000018u)
/* FIFO0COUNT */
#define TSC_ADC_SS_FIFO0COUNT_WORDS_IN_FIFO0   (0x0000007Fu)
#define TSC_ADC_SS_FIFO0COUNT_WORDS_IN_FIFO0_SHIFT   (0x00000000u)
/* FIFO0THRESHOLD */
#define TSC_ADC_SS_FIFO0THRESHOLD_FIFO0_THRESHOLD_LEVEL   (0x0000003Fu)
#define TSC_ADC_SS_FIFO0THRESHOLD_FIFO0_THRESHOLD_LEVEL_SHIFT   (0x00000000u)
/* DMA0REQ */
#define TSC_ADC_SS_DMA0REQ_DMA_REQUEST_LEVEL   (0x0000003Fu)
#define TSC_ADC_SS_DMA0REQ_DMA_REQUEST_LEVEL_SHIFT   (0x00000000u)
/* FIFO1COUNT */
#define TSC_ADC_SS_FIFO1COUNT_WORDS_IN_FIFO1   (0x0000007Fu)
#define TSC_ADC_SS_FIFO1COUNT_WORDS_IN_FIFO1_SHIFT   (0x00000000u)
/* FIFO1THRESHOLD */
#define TSC_ADC_SS_FIFO1THRESHOLD_FIFO1_THRESHOLD_LEVEL   (0x0000003Fu)
#define TSC_ADC_SS_FIFO1THRESHOLD_FIFO1_THRESHOLD_LEVEL_SHIFT   (0x00000000u)
/* DMA1REQ */
#define TSC_ADC_SS_DMA1REQ_DMA_REQUEST_LEVEL   (0x0000003Fu)
#define TSC_ADC_SS_DMA1REQ_DMA_REQUEST_LEVEL_SHIFT   (0x00000000u)
/* FIFO0DATA */
#define TSC_ADC_SS_FIFODATA_ADCCHLNID   (0x000F0000u)
#define TSC_ADC_SS_FIFODATA_ADCCHLNID_SHIFT   (0x00000010u)
#define TSC_ADC_SS_FIFODATA_ADC_DATA   (0x00000FFFu)
#define TSC_ADC_SS_FIFODATA_ADC_DATA_SHIFT   (0x00000000u)
#ifdef __cplusplus
}
#endif
#endif
