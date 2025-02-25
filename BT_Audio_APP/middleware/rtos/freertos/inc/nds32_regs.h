/*
 *  Copyright (C) 2008 Andes Technology, Inc.
 */

/**
* @addtogroup FreeRTOS
* @{
* @defgroup nds32_regs nds32_regs.h
* @{
*/


#ifndef __NDS32_REGS_H__
#define __NDS32_REGS_H__
#if 1
#ifndef __ASSEMBLER__
#define DEFINE_GET_SYS_REG(reg)						\
inline static unsigned long GET_##reg(void){				\
	unsigned long val;						\
	__asm__ volatile ("mfsr %0, $"#reg :"=&r" (val) ::"memory");	\
	return val;							\
}

#define DEFINE_PUT_SYS_REG(reg)						\
inline static void SET_##reg(unsigned long val){			\
	__asm__ volatile ("\n\tmtsr %0, $"#reg				\
			  "\n\tdsb" ::"r" (val) :"memory");		\
}

#define DEFINE_PUT_SYS_REG_i(reg)					\
inline static void SET_##reg(unsigned long val){			\
	__asm__ volatile ("\n\tmtsr %0, $"#reg				\
			  "\n\tisb" ::"r" (val) :"memory");		\
}
#define DEFINE_SYS_REG_OP(reg)			\
DEFINE_GET_SYS_REG(reg);			\
DEFINE_PUT_SYS_REG(reg);

#define DEFINE_SYS_REG_OP_i(reg)	\
DEFINE_GET_SYS_REG(reg);		\
DEFINE_PUT_SYS_REG_i(reg);

DEFINE_SYS_REG_OP(CPU_VER);
DEFINE_SYS_REG_OP(ICM_CFG);
DEFINE_SYS_REG_OP(DCM_CFG);
DEFINE_SYS_REG_OP(MMU_CFG);
DEFINE_SYS_REG_OP(MSC_CFG);
DEFINE_SYS_REG_OP(CORE_ID);
DEFINE_SYS_REG_OP(FUCOP_EXIST);

DEFINE_SYS_REG_OP_i(PSW);
DEFINE_SYS_REG_OP(IPSW);
DEFINE_SYS_REG_OP(P_IPSW);
DEFINE_SYS_REG_OP(IVB);
DEFINE_SYS_REG_OP(EVA);
DEFINE_SYS_REG_OP(P_EVA);
DEFINE_SYS_REG_OP(ITYPE);
DEFINE_SYS_REG_OP(P_ITYPE);
DEFINE_SYS_REG_OP(MERR);
DEFINE_SYS_REG_OP(IPC);
DEFINE_SYS_REG_OP(P_IPC);
DEFINE_SYS_REG_OP(OIPC);
DEFINE_SYS_REG_OP(P_P0);
DEFINE_SYS_REG_OP(P_P1);
DEFINE_SYS_REG_OP(INT_MASK);
DEFINE_SYS_REG_OP(INT_PEND);

DEFINE_SYS_REG_OP(MMU_CTL);
DEFINE_SYS_REG_OP(L1_PPTB);
DEFINE_SYS_REG_OP(TLB_VPN);
DEFINE_SYS_REG_OP(TLB_DATA);
DEFINE_SYS_REG_OP(TLB_MISC);
DEFINE_SYS_REG_OP(VLPT_IDX);
DEFINE_SYS_REG_OP(ILMB);
DEFINE_SYS_REG_OP(DLMB);
DEFINE_SYS_REG_OP(CACHE_CTL);
DEFINE_SYS_REG_OP(HSMP_SADDR);
DEFINE_SYS_REG_OP(HSMP_EADDR);

DEFINE_SYS_REG_OP(EDM_CFG);
DEFINE_SYS_REG_OP(EDMSW);
DEFINE_SYS_REG_OP(EDM_CTL);
DEFINE_SYS_REG_OP(EDM_DTR);
DEFINE_SYS_REG_OP(BPMTC);
DEFINE_SYS_REG_OP(DIMBR);
DEFINE_SYS_REG_OP(TECR0);
DEFINE_SYS_REG_OP(TECR1);

DEFINE_SYS_REG_OP(BPC0);
DEFINE_SYS_REG_OP(BPA0);
DEFINE_SYS_REG_OP(BPAM0);
DEFINE_SYS_REG_OP(BPV0);
DEFINE_SYS_REG_OP(BPCID0);
DEFINE_SYS_REG_OP(BPC1);
DEFINE_SYS_REG_OP(BPA1);
DEFINE_SYS_REG_OP(BPAM1);
DEFINE_SYS_REG_OP(BPV1);
DEFINE_SYS_REG_OP(BPCID1);
DEFINE_SYS_REG_OP(BPC2);
DEFINE_SYS_REG_OP(BPA2);
DEFINE_SYS_REG_OP(BPAM2);
DEFINE_SYS_REG_OP(BPV2);
DEFINE_SYS_REG_OP(BPCID2);
DEFINE_SYS_REG_OP(BPC3);
DEFINE_SYS_REG_OP(BPA3);
DEFINE_SYS_REG_OP(BPAM3);
DEFINE_SYS_REG_OP(BPV3);
DEFINE_SYS_REG_OP(BPCID3);
DEFINE_SYS_REG_OP(BPC4);
DEFINE_SYS_REG_OP(BPA4);
DEFINE_SYS_REG_OP(BPAM4);
DEFINE_SYS_REG_OP(BPV4);
DEFINE_SYS_REG_OP(BPCID4);
DEFINE_SYS_REG_OP(BPC5);
DEFINE_SYS_REG_OP(BPA5);
DEFINE_SYS_REG_OP(BPAM5);
DEFINE_SYS_REG_OP(BPV5);
DEFINE_SYS_REG_OP(BPCID5);
DEFINE_SYS_REG_OP(BPC6);
DEFINE_SYS_REG_OP(BPA6);
DEFINE_SYS_REG_OP(BPAM6);
DEFINE_SYS_REG_OP(BPV6);
DEFINE_SYS_REG_OP(BPCID6);
DEFINE_SYS_REG_OP(BPC7);
DEFINE_SYS_REG_OP(BPA7);
DEFINE_SYS_REG_OP(BPAM7);
DEFINE_SYS_REG_OP(BPV7);
DEFINE_SYS_REG_OP(BPCID7);

DEFINE_SYS_REG_OP(PFMC0);
DEFINE_SYS_REG_OP(PFMC1);
DEFINE_SYS_REG_OP(PFMC2);
DEFINE_SYS_REG_OP(PFM_CTL);

DEFINE_SYS_REG_OP(SDZ_CTL);
DEFINE_SYS_REG_OP(N12MISC_CTL);
DEFINE_SYS_REG_OP(PRUSR_ACC_CTL);

DEFINE_SYS_REG_OP(DMA_CFG);
DEFINE_SYS_REG_OP(DMA_GCSW);
DEFINE_SYS_REG_OP(DMA_CHNSEL);
DEFINE_SYS_REG_OP(DMA_ACT);
DEFINE_SYS_REG_OP(DMA_SETUP);
DEFINE_SYS_REG_OP(DMA_ISADDR);
DEFINE_SYS_REG_OP(DMA_ESADDR);
DEFINE_SYS_REG_OP(DMA_TCNT);
DEFINE_SYS_REG_OP(DMA_STATUS);
DEFINE_SYS_REG_OP(DMA_2DSET);
DEFINE_SYS_REG_OP(DMA_2DSCTL);

DEFINE_SYS_REG_OP(FPCSR);
DEFINE_SYS_REG_OP(FPCFG);
DEFINE_SYS_REG_OP(FUCOP_CTL);

#endif /* !__ASSEMBLER__ */

#endif

#endif /* __NDS32_REGS_H__ */
