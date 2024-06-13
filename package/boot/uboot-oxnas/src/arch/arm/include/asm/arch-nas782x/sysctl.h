#ifndef _NAS782X_SYSCTL_H
#define _NAS782X_SYSCTL_H

#if !(defined(__KERNEL_STRICT_NAMES) || defined(__ASSEMBLY__))
#include <asm/types.h>
#endif /* !(__KERNEL_STRICT_NAMES || __ASSEMBLY__) */

#include <asm/arch/hardware.h>

/**
 * System block reset and clock control
 */
#define SYS_CTRL_PCI_STAT		(SYS_CONTROL_BASE + 0x20)
#define SYS_CTRL_CLK_SET_CTRL		(SYS_CONTROL_BASE + 0x2C)
#define SYS_CTRL_CLK_CLR_CTRL		(SYS_CONTROL_BASE + 0x30)
#define SYS_CTRL_RST_SET_CTRL		(SYS_CONTROL_BASE + 0x34)
#define SYS_CTRL_RST_CLR_CTRL		(SYS_CONTROL_BASE + 0x38)
#define SYS_CTRL_PLLSYS_CTRL		(SYS_CONTROL_BASE + 0x48)
#define SYS_CTRL_PLLSYS_KEY_CTRL	(SYS_CONTROL_BASE + 0x6C)
#define SYS_CTRL_GMAC_CTRL		(SYS_CONTROL_BASE + 0x78)

/* Scratch registers */
#define SYS_CTRL_SCRATCHWORD0		(SYS_CONTROL_BASE + 0xc4)
#define SYS_CTRL_SCRATCHWORD1		(SYS_CONTROL_BASE + 0xc8)
#define SYS_CTRL_SCRATCHWORD2		(SYS_CONTROL_BASE + 0xcc)
#define SYS_CTRL_SCRATCHWORD3		(SYS_CONTROL_BASE + 0xd0)

#define SYS_CTRL_PLLA_CTRL0		(SYS_CONTROL_BASE + 0x1F0)
#define SYS_CTRL_PLLA_CTRL1		(SYS_CONTROL_BASE + 0x1F4)
#define SYS_CTRL_PLLA_CTRL2		(SYS_CONTROL_BASE + 0x1F8)
#define SYS_CTRL_PLLA_CTRL3		(SYS_CONTROL_BASE + 0x1FC)

#define SYS_CTRL_GMAC_AUTOSPEED		3
#define SYS_CTRL_GMAC_RGMII		2
#define SYS_CTRL_GMAC_SIMPLE_MUX	1
#define SYS_CTRL_GMAC_CKEN_GTX		0

#define SYS_CTRL_CKCTRL_CTRL_ADDR	(SYS_CONTROL_BASE + 0x64)

#define SYS_CTRL_CKCTRL_PCI_DIV_BIT	0
#define SYS_CTRL_CKCTRL_SLOW_BIT	8


#define SYS_CTRL_USBHSMPH_CTRL		(SYS_CONTROL_BASE + 0x40)
#define SYS_CTRL_USBHSMPH_STAT		(SYS_CONTROL_BASE + 0x44)
#define SYS_CTRL_REF300_DIV		(SYS_CONTROL_BASE + 0xF8)
#define SYS_CTRL_USBHSPHY_CTRL		(SYS_CONTROL_BASE + 0x84)
#define SYS_CTRL_USB_CTRL		(SYS_CONTROL_BASE + 0x90)

/* System control multi-function pin function selection */
#define SYS_CTRL_SECONDARY_SEL		(SYS_CONTROL_BASE + 0x14)
#define SYS_CTRL_TERTIARY_SEL		(SYS_CONTROL_BASE + 0x8c)
#define SYS_CTRL_QUATERNARY_SEL		(SYS_CONTROL_BASE + 0x94)
#define SYS_CTRL_DEBUG_SEL		(SYS_CONTROL_BASE + 0x9c)
#define SYS_CTRL_ALTERNATIVE_SEL	(SYS_CONTROL_BASE + 0xa4)
#define SYS_CTRL_PULLUP_SEL		(SYS_CONTROL_BASE + 0xac)

/* Secure control multi-function pin function selection */
#define SEC_CTRL_SECONDARY_SEL		(SEC_CONTROL_BASE + 0x14)
#define SEC_CTRL_TERTIARY_SEL		(SEC_CONTROL_BASE + 0x8c)
#define SEC_CTRL_QUATERNARY_SEL		(SEC_CONTROL_BASE + 0x94)
#define SEC_CTRL_DEBUG_SEL		(SEC_CONTROL_BASE + 0x9c)
#define SEC_CTRL_ALTERNATIVE_SEL	(SEC_CONTROL_BASE + 0xa4)
#define SEC_CTRL_PULLUP_SEL		(SEC_CONTROL_BASE + 0xac)

#define SEC_CTRL_COPRO_CTRL		(SEC_CONTROL_BASE + 0x68)
#define SEC_CTRL_SECURE_CTRL		(SEC_CONTROL_BASE + 0x98)
#define SEC_CTRL_LEON_DEBUG		(SEC_CONTROL_BASE + 0xF0)
#define SEC_CTRL_PLLB_DIV_CTRL		(SEC_CONTROL_BASE + 0xF8)
#define SEC_CTRL_PLLB_CTRL0		(SEC_CONTROL_BASE + 0x1F0)
#define SEC_CTRL_PLLB_CTRL1		(SEC_CONTROL_BASE + 0x1F4)
#define SEC_CTRL_PLLB_CTRL8		(SEC_CONTROL_BASE + 0x1F4)

#define REF300_DIV_INT_SHIFT		8
#define REF300_DIV_FRAC_SHIFT		0
#define REF300_DIV_INT(val)		((val) << REF300_DIV_INT_SHIFT)
#define REF300_DIV_FRAC(val)		((val) << REF300_DIV_FRAC_SHIFT)

#define USBHSPHY_SUSPENDM_MANUAL_ENABLE		16
#define USBHSPHY_SUSPENDM_MANUAL_STATE		15
#define USBHSPHY_ATE_ESET			14
#define USBHSPHY_TEST_DIN			6
#define USBHSPHY_TEST_ADD			2
#define USBHSPHY_TEST_DOUT_SEL			1
#define USBHSPHY_TEST_CLK			0

#define USB_CTRL_USBAPHY_CKSEL_SHIFT	5
#define USB_CLK_XTAL0_XTAL1		(0 << USB_CTRL_USBAPHY_CKSEL_SHIFT)
#define USB_CLK_XTAL0			(1 << USB_CTRL_USBAPHY_CKSEL_SHIFT)
#define USB_CLK_INTERNAL		(2 << USB_CTRL_USBAPHY_CKSEL_SHIFT)

#define USBAMUX_DEVICE			BIT(4)

#define USBPHY_REFCLKDIV_SHIFT		2
#define USB_PHY_REF_12MHZ		(0 << USBPHY_REFCLKDIV_SHIFT)
#define USB_PHY_REF_24MHZ		(1 << USBPHY_REFCLKDIV_SHIFT)
#define USB_PHY_REF_48MHZ		(2 << USBPHY_REFCLKDIV_SHIFT)

#define USB_CTRL_USB_CKO_SEL_BIT	0

#define USB_INT_CLK_XTAL 		0
#define USB_INT_CLK_REF300		2
#define USB_INT_CLK_PLLB		3

#define SYS_CTRL_GMAC_AUTOSPEED		3
#define SYS_CTRL_GMAC_RGMII		2
#define SYS_CTRL_GMAC_SIMPLE_MUX	1
#define SYS_CTRL_GMAC_CKEN_GTX		0


#define PLLB_ENSAT			3
#define PLLB_OUTDIV			4
#define PLLB_REFDIV			8
#define PLLB_DIV_INT_SHIFT		8
#define PLLB_DIV_FRAC_SHIFT		0
#define PLLB_DIV_INT(val)		((val) << PLLB_DIV_INT_SHIFT)
#define PLLB_DIV_FRAC(val)		((val) << PLLB_DIV_FRAC_SHIFT)

#ifndef __KERNEL_STRICT_NAMES
#ifndef __ASSEMBLY__

#endif /* __ASSEMBLY__ */
#endif /* __KERNEL_STRICT_NAMES */

#endif /* _NAS782X_SYSCTL_H */