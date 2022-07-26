#include <linux/bitops.h>

#define SC8551_BAT_OVP_REG			0x00
#define	SC8551_BAT_OVP_DIS_BIT			BIT(7)
#define SC8551_BAT_OVP_MASK			GENMASK(5, 0)
#define SC8551_BAT_OVP_SHIFT			0
#define SC8551_BAT_OVP_BASE			3500
#define SC8551_BAT_OVP_LSB			25

#define SC8551_BAT_OCP_REG			0x02
#define SC8551_BAT_OCP_DIS_BIT			BIT(7)
#define SC8551_BAT_OCP_MASK			GENMASK(6, 0)
#define SC8551_BAT_OCP_SHIFT			0
#define SC8551_BAT_OCP_BASE			2000
#define SC8551_BAT_OCP_LSB			100

#define SC8551_AC_PROTECT_REG			0x05
#define SC8551_VAC_OVP_STAT_BIT			BIT(7)
#define SC8551_VAC_OVP_FLAG_BIT			BIT(6)
#define SC8551_VAC_OVP_MASK_BIT			BIT(5)
#define SC8551_VDROP_OVP_THRESHOLD_BIT		BIT(4)
#define SC8551_VDROP_DEGLITCH_BIT		BIT(3)
#define SC8551_VAC_OVP_MASK			GENMASK(2, 0)
#define SC8551_VAC_OVP_SHIFT			0
#define SC8551_VAC_OVP_BASE			11000
#define SC8551_VAC_OVP_LSB			1000

#define SC8551_BUS_OVP_REG			0x06
#define SC8551_VBUS_PD_EN_BIT			BIT(7)
#define SC8551_BUS_OVP_MASK			GENMASK(6, 0)
#define SC8551_BUS_OVP_SHIFT			0
#define SC8551_BUS_OVP_BASE			6000
#define SC8551_BUS_OVP_LSB			50

#define SC8551_BUS_OCP_UCP_REG			0x08
#define SC8551_BUS_OCP_DIS_BIT			BIT(7)
#define SC8551_BUS_UCP_RAISE_FLAG_BIT		BIT(6)
#define SC8551_BUS_UCP_RAISE_MASK_BIT		BIT(5)
#define SC8551_BUS_UCP_FALL_FLAG_BIT		BIT(4)
#define SC8551_BUS_OCP_MASK			GENMASK(3, 0)
#define SC8551_BUS_OCP_SHIFT			0
#define SC8551_BUS_OCP_BASE			1000
#define SC8551_BUS_OCP_LSB			250

#define SC8551_CONVERTER_STATE_REG		0x0A
#define SC8551_TSHUT_FLAG_BIT			BIT(7)
#define SC8551_TSHUT_STAT_BIT			BIT(6)
#define SC8551_VBUS_ERRORLO_STAT_BIT		BIT(5)
#define SC8551_VBUS_ERRORHI_STAT_BIT		BIT(4)
#define SC8551_SS_TIMEOUT_FLAG_BIT		BIT(3)
#define SC8551_CP_SWITCHING_STAT_BIT		BIT(2)
#define SC8551_CONV_OCP_FLAG_BIT		BIT(1)
#define SC8551_PIN_DIAG_FAIL_FLAG_BIT		BIT(0)

#define SC8551_CTRL_REG				0x0B
#define SC8551_RESET_REG_BIT			BIT(7)
#define SC8551_FSW_MASK				GENMASK(6, 4)
#define SC8551_FSW_SHIFT			4
#define SC8551_FSW_BASE				300
#define SC8551_FSW_LSB				50
#define SC8551_WD_TIMEOUT_DIS_BIT               BIT(2)

#define SC8551_CHG_CTRL_REG			0x0C
#define SC8551_ENABLE_CHG_BIT			BIT(7)
#define SC8551_WORK_MODE_MASK			GENMASK(6, 5)
#define SC8551_WORK_MODE_SHIFT			5

#define SC8551_INT_STAT_REG			0x0D

#define SC8551_INT_FLAG_REG			0x0E

#define SC8551_INT_MASK_REG			0x0F

#define SC8551_FLT_STAT0_REG			0x10
#define SC8551_BAT_OVP_STAT_BIT			BIT(7)
#define SC8551_BAT_OCP_STAT_BIT			BIT(6)
#define SC8551_BUS_OVP_STAT_BIT			BIT(5)
#define SC8551_BUS_OCP_STAT_BIT			BIT(4)

#define SC8551_FLT_STAT1_REG			0x11
#define SC8551_BAT_OVP_FLAG_BIT			BIT(7)
#define SC8551_BAT_OCP_FLAG_BIT			BIT(6)
#define SC8551_BUS_OVP_FLAG_BIT			BIT(5)
#define SC8551_BUS_OCP_FLAG_BIT			BIT(4)

#define SC8551_FLT_MASK_REG			0x12
#define SC8551_BAT_OVP_MASK_BIT			BIT(7)
#define SC8551_BAT_OCP_MASK_BIT			BIT(6)
#define SC8551_BUS_OVP_MASK_BIT			BIT(5)
#define SC8551_BUS_OCP_MASK_BIT			BIT(4)

#define SC8551_PART_INFO_REG			0x13
#define SC8551A_DEVICE_ID			0X51

#define SC8551_ADC_CTRL_REG			0x14
#define SC8551_ENABLE_ADC_BIT			BIT(7)
#define SC8551_DISABLE_IBUS_ADC_BIT		BIT(0)

#define SC8551_ADC_FN_DISABLE_REG		0x15
#define SC8551_DISABLE_VBUS_ADC_BIT		BIT(7)
#define SC8551_DISABLE_VAC_ADC_BIT		BIT(6)
#define SC8551_DISABLE_VOUT_ADC_BIT		BIT(5)
#define SC8551_DISABLE_VBAT_ADC_BIT		BIT(4)
#define SC8551_DISABLE_IBAT_ADC_BIT		BIT(3)
#define SC8551_DISABLE_TDIE_ADC_BIT		BIT(0)

#define SC8551_ADC_IBUS_REG			0X16
#define SC8551_ADC_IBUS_MASK			GENMASK(11, 0)
#define SC8551_ADC_IBUS_LSB			15625
#define SC8551_ADC_IBUS_RATE			10000

#define SC8551_ADC_VBUS_REG			0X18
#define SC8551_ADC_VBUS_MASK			GENMASK(11, 0)
#define SC8551_ADC_VBUS_LSB			375
#define SC8551_ADC_VBUS_RATE			100

#define SC8551_ADC_VAC_REG			0X1A
#define SC8551_ADC_VAC_MASK			GENMASK(11, 0)
#define SC8551_ADC_VAC_LSB			5
#define SC8551_ADC_VAC_RATE			1

#define SC8551_ADC_VOUT_REG			0X1C
#define SC8551_ADC_VOUT_MASK			GENMASK(11, 0)
#define SC8551_ADC_VOUT_LSB			125
#define SC8551_ADC_VOUT_RATE			100

#define SC8551_ADC_VBAT_REG			0X1E
#define SC8551_ADC_VBAT_MASK			GENMASK(11, 0)
#define SC8551_ADC_VBAT_LSB			125
#define SC8551_ADC_VBAT_RATE			100

#define SC8551_ADC_IBAT_REG			0X20
#define SC8551_ADC_IBAT_MASK			GENMASK(11, 0)
#define SC8551_ADC_IBAT_LSB			3125
#define SC8551_ADC_IBAT_RATE			1000

#define SC8551_ADC_TDIE_REG			0X26
#define SC8551_ADC_TDIE_MASK			GENMASK(8, 0)
#define SC8551_ADC_TDIE_LSB			5
#define SC8551_ADC_TDIE_RATE			1

#define SC8551_REG_CTRL_REG			0X2B

#define SC8551_REG_THRESHOLD_REG		0X2C

#define SC8551_REG_FLAG_MASK_REG		0X2D

#define SC8551_DEGLITCH_REG			0X2E

#define SC8551_PMID2OUT_OVP_UVP_REG		0X2F

#define SC8551_IBUS_REGULATION_REG		0X30

#define SC8551_BYPASS_REG			0X31
#define SC8551_ENABLE_BYPASS_BIT		BIT(0)