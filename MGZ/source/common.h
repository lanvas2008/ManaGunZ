#ifndef __COMMON_H__
#define __COMMON_H__

#define NEW_POKE_SYSCALL     813
#define SYSCALL_PTR(n)       ((SYSCALL_TABLE) + ( 8 * (n) ))
#define MAP_BASE             0x80000000007FAE00ULL
#define MAP_ADDR             0xE8


#define SYSCALL_TABLE_421C         0x800000000035BCA8ULL
#define HV_START_OFFSET_421C       0x6B3197
#define OFFSET_FIX_421C            0x057020
#define OFFSET_2_FIX_421C          0x05AA58
#define OFFSET_FIX_2B17_421C       0x257224
#define OFFSET_FIX_LIC_421C        0x056CEC
#define OFFSET_FIX_3C_421C         0x296268
#define OPEN_HOOK_421C             0x80000000002C2558ULL
#define BASE_ADDR_421C             0x80000000002D0C98ULL
#define LV2MOUNTADDR_421C          0x800000000045807CULL
#define LV2MOUNTADDR_ESIZE_421C    0x110
#define LV2MOUNTADDR_CSIZE_421C    0x100
#define FW_DATE_OFFSET_421C        0x80000000002F3EB0ULL
#define FW_DATE_1_421C             0x323031322F30362FULL
#define FW_DATE_2_421C             0x32392032313A3031ULL
#define OFFSET_1_IDPS_421C         0x80000000003D9230ULL
#define OFFSET_2_IDPS_421C         0x8000000000477E9CULL

#define SYSCALL_TABLE_421D         0x800000000037A1B0ULL
#define HV_START_OFFSET_421D       0x6B3197
#define OFFSET_FIX_421D            0x05A938
#define OFFSET_2_FIX_421D          0x05E370
#define OFFSET_FIX_2B17_421D       0x25D640
#define OFFSET_FIX_LIC_421D        0x05A604
#define OFFSET_FIX_3C_421D         0x29C8C4
#define OPEN_HOOK_421D             0x80000000002D9718ULL
#define BASE_ADDR_421D             0x80000000002EB418ULL
#define LV2MOUNTADDR_421D          0x800000000047007CULL
#define LV2MOUNTADDR_ESIZE_421D    0x110
#define LV2MOUNTADDR_CSIZE_421D    0x100
#define FW_DATE_OFFSET_421D        0x800000000030ECA0ULL
#define FW_DATE_1_421D             0x323031322F30362FULL
#define FW_DATE_2_421D             0x32392032313A3031ULL
#define OFFSET_1_IDPS_421D         0x80000000003F7A30ULL
#define OFFSET_2_IDPS_421D         0x800000000048FE9CULL

#define SYSCALL_TABLE_430C         0x800000000035DBE0ULL
#define HV_START_OFFSET_430C       0x6B2B2A
#define OFFSET_FIX_430C            0x057170
#define OFFSET_2_FIX_430C          0x05ABA8
#define OFFSET_FIX_2B17_430C       0x2587D0
#define OFFSET_FIX_LIC_430C        0x056E3C
#define OFFSET_FIX_3C_430C         0x2979DC
#define OPEN_HOOK_430C             0x80000000002C3CD4ULL
#define BASE_ADDR_430C             0x80000000002D2418ULL
#define LV2MOUNTADDR_430C          0x8000000000458098ULL
#define LV2MOUNTADDR_ESIZE_430C    0x118
#define LV2MOUNTADDR_CSIZE_430C    0x108
#define FW_DATE_OFFSET_430C        0x80000000002F5A58ULL
#define FW_DATE_1_430C             0x323031322F31302FULL
#define FW_DATE_2_430C             0x31372031383A3030ULL
#define OFFSET_1_IDPS_430C         0x80000000003DB1B0ULL
#define OFFSET_2_IDPS_430C         0x8000000000476F3CULL

#define SYSCALL_TABLE_430D         0x800000000037C068ULL
#define HV_START_OFFSET_430D       0x6B3197
#define OFFSET_FIX_430D            0x05AA88
#define OFFSET_2_FIX_430D          0x05E4C0
#define OFFSET_FIX_2B17_430D       0x25EBEC
#define OFFSET_FIX_LIC_430D        0x05A754
#define OFFSET_FIX_3C_430D         0x29E038
#define OPEN_HOOK_430D             0x80000000002DAE4CULL
#define BASE_ADDR_430D             0x80000000002ECB48ULL
#define LV2MOUNTADDR_430D          0x8000000000478098ULL
#define LV2MOUNTADDR_ESIZE_430D    0x118
#define LV2MOUNTADDR_CSIZE_430D    0x108
#define FW_DATE_OFFSET_430D        0x80000000003107F8ULL
#define FW_DATE_1_430D             0x323031322F31302FULL
#define FW_DATE_2_430D             0x31372031373A3539ULL
#define OFFSET_1_IDPS_430D         0x80000000003F9930ULL
#define OFFSET_2_IDPS_430D         0x8000000000496F3CULL

#define SYSCALL_TABLE_431C         0x800000000035DBE0ULL
#define HV_START_OFFSET_431C       0x6B2B2A
#define OFFSET_FIX_431C            0x057174
#define OFFSET_2_FIX_431C          0x05ABAC
#define OFFSET_FIX_2B17_431C       0x2587D8
#define OFFSET_FIX_LIC_431C        0x056E40
#define OFFSET_FIX_3C_431C         0x2979E4
#define OPEN_HOOK_431C             0x80000000002C3CE0ULL
#define BASE_ADDR_431C             0x80000000002D2428ULL
#define LV2MOUNTADDR_431C          0x8000000000458098ULL
#define LV2MOUNTADDR_ESIZE_431C    0x118
#define LV2MOUNTADDR_CSIZE_431C    0x108
#define FW_DATE_OFFSET_431C        0x80000000002F5A68ULL
#define FW_DATE_1_431C             0x323031322F31302FULL
#define FW_DATE_2_431C             0x32352032323A3238ULL
#define OFFSET_1_IDPS_431C         0x80000000003DB1B0ULL
#define OFFSET_2_IDPS_431C         0x8000000000476F3CULL

#define SYSCALL_TABLE_440C         0x800000000035E260ULL
#define HV_START_OFFSET_440C       0x370AA8
#define OFFSET_FIX_440C            0x0560BC
#define OFFSET_2_FIX_440C          0x059AF4
#define OFFSET_FIX_2B17_440C       0x257880
#define OFFSET_FIX_LIC_440C        0x055D88
#define OFFSET_FIX_3C_440C         0x296DEC
#define OPEN_HOOK_440C             0x80000000002C4284ULL
#define BASE_ADDR_440C             0x80000000002D29A8ULL
#define LV2MOUNTADDR_440C          0x8000000000458098ULL
#define LV2MOUNTADDR_ESIZE_440C    0x118
#define LV2MOUNTADDR_CSIZE_440C    0x108
#define FW_DATE_OFFSET_440C        0x80000000002F5FF8ULL
#define FW_DATE_1_440C             0x323031332F30332FULL
#define FW_DATE_2_440C             0x31352030303A3034ULL
#define OFFSET_1_IDPS_440C         0x80000000003DB830ULL
#define OFFSET_2_IDPS_440C         0x8000000000476F3CULL

#define SYSCALL_TABLE_441C         0x800000000035E260ULL
#define HV_START_OFFSET_441C       0x6B3197
#define OFFSET_FIX_441C            0x0560C0
#define OFFSET_2_FIX_441C          0x059AF8
#define OFFSET_FIX_2B17_441C       0x257888
#define OFFSET_FIX_LIC_441C        0x055D8C
#define OFFSET_FIX_3C_441C         0x296DF4
#define OPEN_HOOK_441C             0x80000000002C4290ULL
#define BASE_ADDR_441C             0x80000000002D29B8ULL
#define LV2MOUNTADDR_441C          0x8000000000458098ULL
#define LV2MOUNTADDR_ESIZE_441C    0x118
#define LV2MOUNTADDR_CSIZE_441C    0x108
#define FW_DATE_OFFSET_441C        0x80000000002F6008ULL
#define FW_DATE_1_441C             0x323031332F30342FULL
#define FW_DATE_2_441C             0x31372032303A3535ULL
#define OFFSET_1_IDPS_441C         0x80000000003DB830ULL
#define OFFSET_2_IDPS_441C         0x8000000000476F3CULL

#define SYSCALL_TABLE_441D         0x800000000037C9E8ULL
#define HV_START_OFFSET_441D       0x6B3197
#define OFFSET_FIX_441D            0x0599D8
#define OFFSET_2_FIX_441D          0x05D410
#define OFFSET_FIX_2B17_441D       0x25DCA4
#define OFFSET_FIX_LIC_441D        0x0596A4
#define OFFSET_FIX_3C_441D         0x29D450
#define OPEN_HOOK_441D             0x80000000002DB73CULL
#define BASE_ADDR_441D             0x80000000002ED418ULL
#define LV2MOUNTADDR_441D          0x8000000000478098ULL
#define LV2MOUNTADDR_ESIZE_441D    0x118
#define LV2MOUNTADDR_CSIZE_441D    0x108
#define FW_DATE_OFFSET_441D        0x80000000003110D8ULL
#define FW_DATE_1_441D             0x323031332F30342FULL
#define FW_DATE_2_441D             0x31372032303A3534ULL
#define OFFSET_1_IDPS_441D         0x80000000003FA2B0ULL
#define OFFSET_2_IDPS_441D         0x8000000000496F3CULL

#define SYSCALL_TABLE_446C         0x800000000035E860ULL
#define HV_START_OFFSET_446C       0x6B3197
#define OFFSET_FIX_446C            0x0560C0
#define OFFSET_2_FIX_446C          0x059AF8
#define OFFSET_FIX_2B17_446C       0x257DA8
#define OFFSET_FIX_LIC_446C        0x055D8C
#define OFFSET_FIX_3C_446C         0x297314
#define OPEN_HOOK_446C             0x80000000002C47B0ULL
#define BASE_ADDR_446C             0x80000000002D2ED8ULL
#define LV2MOUNTADDR_446C          0x8000000000458098ULL
#define LV2MOUNTADDR_ESIZE_446C    0x118
#define LV2MOUNTADDR_CSIZE_446C    0x108
#define FW_DATE_OFFSET_446C        0x80000000002F6528ULL
#define FW_DATE_1_446C             0x323031332F30362FULL
#define FW_DATE_2_446C             0x31392032333A3534ULL
#define OFFSET_1_IDPS_446C         0x80000000003DBE30ULL
#define OFFSET_2_IDPS_446C         0x8000000000476F3CULL

#define SYSCALL_TABLE_446D         0x800000000037CFE8ULL
#define HV_START_OFFSET_446D       0x6B3197
#define OFFSET_FIX_446D            0x0599D8
#define OFFSET_2_FIX_446D          0x05D410
#define OFFSET_FIX_2B17_446D       0x25E1C4
#define OFFSET_FIX_LIC_446D        0x0596A4
#define OFFSET_FIX_3C_446D         0x29D970
#define OPEN_HOOK_446D             0x80000000002DBC5CULL
#define BASE_ADDR_446D             0x80000000002ED938ULL
#define LV2MOUNTADDR_446D          0x8000000000478098ULL
#define LV2MOUNTADDR_ESIZE_446D    0x118
#define LV2MOUNTADDR_CSIZE_446D    0x108
#define FW_DATE_OFFSET_446D        0x80000000003115F8ULL
#define FW_DATE_1_446D             0x323031332F30362FULL
#define FW_DATE_2_446D             0x31392032333A3534ULL
#define OFFSET_1_IDPS_446D         0x80000000003FA8B0ULL
#define OFFSET_2_IDPS_446D         0x8000000000496F3CULL

#define SYSCALL_TABLE_450C         0x800000000035F0D0ULL
#define HV_START_OFFSET_450C       0x78950F
#define OFFSET_FIX_450C            0x0560BC
#define OFFSET_2_FIX_450C          0x059AF4
#define OFFSET_FIX_2B17_450C       0x22FF38
#define OFFSET_FIX_LIC_450C        0x055D88
#define OFFSET_FIX_3C_450C         0x26F620
#define OPEN_HOOK_450C             0x800000000029DD20ULL
#define BASE_ADDR_450C             0x80000000002D4CB8ULL
#define LV2MOUNTADDR_450C          0x8000000000471F98ULL
#define LV2MOUNTADDR_ESIZE_450C    0x118
#define LV2MOUNTADDR_CSIZE_450C    0x108
#define FW_DATE_OFFSET_450C        0x80000000002F84A8ULL
#define FW_DATE_1_450C             0x323031332F30392FULL
#define FW_DATE_2_450C             0x31332032303A3337ULL
#define OFFSET_1_IDPS_450C         0x80000000003DE230ULL
#define OFFSET_2_IDPS_450C         0x800000000046CF0CULL

#define SYSCALL_TABLE_450D         0x8000000000383658ULL
#define HV_START_OFFSET_450D       0x370AA8
#define OFFSET_FIX_450D            0x059A8C
#define OFFSET_2_FIX_450D          0x05D4C4
#define OFFSET_FIX_2B17_450D       0x236414
#define OFFSET_FIX_LIC_450D        0x059758
#define OFFSET_FIX_3C_450D         0x275D3C
#define OPEN_HOOK_450D             0x80000000002B81E8ULL
#define BASE_ADDR_450D             0x80000000002F4778ULL
#define LV2MOUNTADDR_450D          0x800000000049B6A8ULL
#define LV2MOUNTADDR_ESIZE_450D    0x118
#define LV2MOUNTADDR_CSIZE_450D    0x108
#define FW_DATE_OFFSET_450D        0x8000000000318888ULL
#define FW_DATE_1_450D             0x323031332F30392FULL
#define FW_DATE_2_450D             0x31332032303A3336ULL
#define OFFSET_1_IDPS_450D         0x8000000000402AB0ULL
#define OFFSET_2_IDPS_450D         0x8000000000494F0CULL

#define SYSCALL_TABLE_453C         0x800000000035F300ULL
#define HV_START_OFFSET_453C       0x7BE118
#define OFFSET_FIX_453C            0x0560C0
#define OFFSET_2_FIX_453C          0x059AF8
#define OFFSET_FIX_2B17_453C       0x23010C
#define OFFSET_FIX_LIC_453C        0x055D8C
#define OFFSET_FIX_3C_453C         0x26F7F4
#define OPEN_HOOK_453C             0x800000000029DEF8ULL
#define BASE_ADDR_453C             0x80000000002D4E48ULL
#define LV2MOUNTADDR_453C          0x8000000000471F98ULL
#define LV2MOUNTADDR_ESIZE_453C    0x118
#define LV2MOUNTADDR_CSIZE_453C    0x108
#define FW_DATE_OFFSET_453C        0x80000000002F85E0ULL
#define FW_DATE_1_453C             0x323031332F31312FULL
#define FW_DATE_2_453C             0x32352032323A3033ULL
#define OFFSET_1_IDPS_453C         0x80000000003DE430ULL
#define OFFSET_2_IDPS_453C         0x800000000046CF0CULL

#define SYSCALL_TABLE_453D         0x8000000000385108ULL
#define HV_START_OFFSET_453D       0x6B3197
#define OFFSET_FIX_453D            0x059A90
#define OFFSET_2_FIX_453D          0x05D4C8
#define OFFSET_FIX_2B17_453D       0x2365E8
#define OFFSET_FIX_LIC_453D        0x05975C
#define OFFSET_FIX_3C_453D         0x275F10
#define OPEN_HOOK_453D             0x80000000002B83C0ULL
#define BASE_ADDR_453D             0x80000000002F5F88ULL
#define LV2MOUNTADDR_453D          0x800000000049B6A8ULL
#define LV2MOUNTADDR_ESIZE_453D    0x118
#define LV2MOUNTADDR_CSIZE_453D    0x108
#define FW_DATE_OFFSET_453D        0x800000000031A040ULL
#define FW_DATE_1_453D             0x323031332F31312FULL
#define FW_DATE_2_453D             0x32352032323A3033ULL
#define OFFSET_1_IDPS_453D         0x80000000004045B0ULL
#define OFFSET_2_IDPS_453D         0x8000000000494F0CULL

#define SYSCALL_TABLE_455C         0x8000000000362680ULL
#define HV_START_OFFSET_455C       0x6B3581
#define OFFSET_FIX_455C            0x056380
#define OFFSET_2_FIX_455C          0x05A2F0
#define OFFSET_FIX_2B17_455C       0x231648
#define OFFSET_FIX_LIC_455C        0x056024
#define OFFSET_FIX_3C_455C         0x271040
#define OPEN_HOOK_455C             0x800000000029F748ULL
#define BASE_ADDR_455C             0x80000000002D7660ULL
#define LV2MOUNTADDR_455C          0x8000000000479F98ULL
#define LV2MOUNTADDR_ESIZE_455C    0x118
#define LV2MOUNTADDR_CSIZE_455C    0x108
#define FW_DATE_OFFSET_455C        0x80000000002FB690ULL
#define FW_DATE_1_455C             0x323031342F30312FULL
#define FW_DATE_2_455C             0x32382031383A3337ULL
#define OFFSET_1_IDPS_455C         0x80000000003E17B0ULL
#define OFFSET_2_IDPS_455C         0x8000000000474F1CULL

#define SYSCALL_TABLE_455D         0x8000000000388488ULL
#define HV_START_OFFSET_455D       0x6B3581
#define OFFSET_FIX_455D            0x059D50
#define OFFSET_2_FIX_455D          0x05DCC0
#define OFFSET_FIX_2B17_455D       0x237B24
#define OFFSET_FIX_LIC_455D        0x0599F4
#define OFFSET_FIX_3C_455D         0x27775C
#define OPEN_HOOK_455D             0x80000000002B9C14ULL
#define BASE_ADDR_455D             0x80000000002F8730ULL
#define LV2MOUNTADDR_455D          0x800000000049B6A8ULL
#define LV2MOUNTADDR_ESIZE_455D    0x118
#define LV2MOUNTADDR_CSIZE_455D    0x108
#define FW_DATE_OFFSET_455D        0x800000000031D080ULL
#define FW_DATE_1_455D             0x323031342F30312FULL
#define FW_DATE_2_455D             0x32382031383A3336ULL
#define OFFSET_1_IDPS_455D         0x8000000000407930ULL
#define OFFSET_2_IDPS_455D         0x8000000000494F1CULL

#define SYSCALL_TABLE_460C         0x8000000000363A18ULL
#define HV_START_OFFSET_460C       0x370F28
#define OFFSET_FIX_460C            0x056588
#define OFFSET_2_FIX_460C          0x05A658
#define OFFSET_FIX_2B17_460C       0x2302E8
#define OFFSET_FIX_LIC_460C        0x05622C
#define OFFSET_FIX_3C_460C         0x26FDD8
#define OPEN_HOOK_460C             0x80000000002A02BCULL
#define BASE_ADDR_460C             0x80000000002D88D0ULL
#define LV2MOUNTADDR_460C          0x8000000000479FA0ULL
#define LV2MOUNTADDR_ESIZE_460C    0x118
#define LV2MOUNTADDR_CSIZE_460C    0x108
#define FW_DATE_OFFSET_460C        0x80000000002FC928ULL
#define FW_DATE_1_460C             0x323031342F30362FULL
#define FW_DATE_2_460C             0x30392032303A3332ULL
#define OFFSET_1_IDPS_460C         0x80000000003E2BB0ULL
#define OFFSET_2_IDPS_460C         0x8000000000474F1CULL

#define SYSCALL_TABLE_465C         0x8000000000363A18ULL
#define HV_START_OFFSET_465C       0x7BF478
#define OFFSET_FIX_465C            0x05658C
#define OFFSET_2_FIX_465C          0x05A65C
#define OFFSET_FIX_2B17_465C       0x2302F0
#define OFFSET_FIX_LIC_465C        0x056230
#define OFFSET_FIX_3C_465C         0x26FDE0
#define OPEN_HOOK_465C             0x80000000002A02C8ULL
#define BASE_ADDR_465C             0x80000000002D88E0ULL
#define LV2MOUNTADDR_465C          0x8000000000479FA0ULL
#define LV2MOUNTADDR_ESIZE_465C    0x118
#define LV2MOUNTADDR_CSIZE_465C    0x108
#define FW_DATE_OFFSET_465C        0x80000000002FC938ULL
#define FW_DATE_1_465C             0x323031342F30382FULL
#define FW_DATE_2_465C             0x31332031313A3232ULL
#define OFFSET_1_IDPS_465C         0x80000000003E2BB0ULL
#define OFFSET_2_IDPS_465C         0x8000000000474F1CULL

#define SYSCALL_TABLE_465D         0x800000000038A120ULL
#define HV_START_OFFSET_465D       0x6B33C3
#define OFFSET_FIX_465D            0x059F5C
#define OFFSET_2_FIX_465D          0x05E02C
#define OFFSET_FIX_2B17_465D       0x2367CC
#define OFFSET_FIX_LIC_465D        0x059C00
#define OFFSET_FIX_3C_465D         0x2764FC
#define OPEN_HOOK_465D             0x80000000002BB010ULL
#define BASE_ADDR_465D             0x80000000002FA230ULL
#define LV2MOUNTADDR_465D          0x80000000004A36D0ULL
#define LV2MOUNTADDR_ESIZE_465D    0x118
#define LV2MOUNTADDR_CSIZE_465D    0x108
#define FW_DATE_OFFSET_465D        0x800000000031EBA8ULL
#define FW_DATE_1_465D             0x323031342F30382FULL
#define FW_DATE_2_465D             0x31332031313A3232ULL
#define OFFSET_1_IDPS_465D         0x80000000004095B0ULL
#define OFFSET_2_IDPS_465D         0x800000000049CF1CULL

#define SYSCALL_TABLE_470C         0x8000000000363B60ULL
#define HV_START_OFFSET_470C       0x7BF4F8
#define OFFSET_FIX_470C            0x056588
#define OFFSET_2_FIX_470C          0x05A6E0
#define OFFSET_FIX_2B17_470C       0x2275EC
#define OFFSET_FIX_LIC_470C        0x05622C
#define OFFSET_FIX_3C_470C         0x2670DC
#define OPEN_HOOK_470C             0x80000000002975C0ULL
#define BASE_ADDR_470C             0x80000000002D8A70ULL
#define LV2MOUNTADDR_470C          0x8000000000479FC0ULL
#define LV2MOUNTADDR_ESIZE_470C    0x118
#define LV2MOUNTADDR_CSIZE_470C    0x108
#define FW_DATE_OFFSET_470C        0x80000000002FCAC8ULL
#define FW_DATE_1_470C             0x323031352F30322FULL
#define FW_DATE_2_470C             0x30342032313A3038ULL
#define OFFSET_1_IDPS_470C         0x80000000003E2DB0ULL
#define OFFSET_2_IDPS_470C         0x8000000000474AF4ULL

#define SYSCALL_TABLE_470D         0x800000000038A368ULL
#define HV_START_OFFSET_470D       0x6B3197
#define OFFSET_FIX_470D            0x059F58
#define OFFSET_2_FIX_470D          0x05E0B0
#define OFFSET_FIX_2B17_470D       0x22DAC8
#define OFFSET_FIX_LIC_470D        0x059BFC
#define OFFSET_FIX_3C_470D         0x26D7F8
#define OPEN_HOOK_470D             0x80000000002B2480ULL
#define BASE_ADDR_470D             0x80000000002FA540ULL
#define LV2MOUNTADDR_470D          0x80000000004A3678ULL
#define LV2MOUNTADDR_ESIZE_470D    0x118
#define LV2MOUNTADDR_CSIZE_470D    0x108
#define FW_DATE_OFFSET_470D        0x800000000031EEB8ULL
#define FW_DATE_1_470D             0x323031352F30322FULL
#define FW_DATE_2_470D             0x30342032313A3037ULL
#define OFFSET_1_IDPS_470D         0x80000000004098B0ULL
#define OFFSET_2_IDPS_470D         0x800000000049CAF4ULL

#define SYSCALL_TABLE_475C         0x8000000000363BE0ULL
#define HV_START_OFFSET_475C       0x370F28
#define OFFSET_FIX_475C            0x05658C
#define OFFSET_2_FIX_475C          0x05A6E4
#define OFFSET_FIX_2B17_475C       0x2275F4
#define OFFSET_FIX_LIC_475C        0x056230
#define OFFSET_FIX_3C_475C         0x267150
#define OPEN_HOOK_475C             0x8000000000297638ULL
#define BASE_ADDR_475C             0x80000000002D8AF0ULL
#define LV2MOUNTADDR_475C          0x8000000000479FC0ULL
#define LV2MOUNTADDR_ESIZE_475C    0x118
#define LV2MOUNTADDR_CSIZE_475C    0x108
#define FW_DATE_OFFSET_475C        0x80000000002FCB68ULL
#define FW_DATE_1_475C             0x323031352F30342FULL
#define FW_DATE_2_475C             0x32312031313A3536ULL
#define OFFSET_1_IDPS_475C         0x80000000003E2E30ULL
#define OFFSET_2_IDPS_475C         0x8000000000474AF4ULL

#define SYSCALL_TABLE_475D         0x800000000038A3E8ULL
#define HV_START_OFFSET_475D       0x370F28
#define OFFSET_FIX_475D            0x059F5C
#define OFFSET_2_FIX_475D          0x05E0B4
#define OFFSET_FIX_2B17_475D       0x22DAD0
#define OFFSET_FIX_LIC_475D        0x059C00
#define OFFSET_FIX_3C_475D         0x26D86C
#define OPEN_HOOK_475D             0x80000000002B24F8ULL
#define BASE_ADDR_475D             0x80000000002FA5B0ULL
#define LV2MOUNTADDR_475D          0x80000000004A3678ULL
#define LV2MOUNTADDR_ESIZE_475D    0x118
#define LV2MOUNTADDR_CSIZE_475D    0x108
#define FW_DATE_OFFSET_475D        0x800000000031EF48ULL
#define FW_DATE_1_475D             0x323031352F30342FULL
#define FW_DATE_2_475D             0x32312031313A3536ULL
#define OFFSET_1_IDPS_475D         0x8000000000409930ULL
#define OFFSET_2_IDPS_475D         0x800000000049CAF4ULL

#define SYSCALL_TABLE_476C         0x8000000000363BE0ULL
#define HV_START_OFFSET_476C       0x370F28
#define OFFSET_FIX_476C            0x05658C
#define OFFSET_2_FIX_476C          0x05A6E4
#define OFFSET_FIX_2B17_476C       0x2275F4
#define OFFSET_FIX_LIC_476C        0x056230
#define OFFSET_FIX_3C_476C         0x267150
#define OPEN_HOOK_476C             0x8000000000297638ULL
#define BASE_ADDR_476C             0x80000000002D8AF0ULL
#define LV2MOUNTADDR_476C          0x8000000000479FC0ULL
#define LV2MOUNTADDR_ESIZE_476C    0x118
#define LV2MOUNTADDR_CSIZE_476C    0x108
#define FW_DATE_OFFSET_476C        0x80000000002FCB68ULL
#define FW_DATE_1_476C             0x323031352F30382FULL
#define FW_DATE_2_476C             0x31312031313A3233ULL
#define OFFSET_1_IDPS_476C         0x80000000003E2E30ULL
#define OFFSET_2_IDPS_476C         0x8000000000474AF4ULL

#define SYSCALL_TABLE_476D         0x800000000038A3E8ULL
#define HV_START_OFFSET_476D       0x370F28
#define OFFSET_FIX_476D            0x059F5C
#define OFFSET_2_FIX_476D          0x05E0B4
#define OFFSET_FIX_2B17_476D       0x22DAD0
#define OFFSET_FIX_LIC_476D        0x059C00
#define OFFSET_FIX_3C_476D         0x26D86C
#define OPEN_HOOK_476D             0x80000000002B24F8ULL
#define BASE_ADDR_476D             0x80000000002FA5B0ULL
#define LV2MOUNTADDR_476D          0x80000000004A3678ULL
#define LV2MOUNTADDR_ESIZE_476D    0x118
#define LV2MOUNTADDR_CSIZE_476D    0x108
#define FW_DATE_OFFSET_476D        0x800000000031EF48ULL
#define FW_DATE_1_476D             0x323031352F30382FULL
#define FW_DATE_2_476D             0x31312031313A3233ULL
#define OFFSET_1_IDPS_476D         0x8000000000409930ULL
#define OFFSET_2_IDPS_476D         0x800000000049CAF4ULL

#define SYSCALL_TABLE_478C         0x8000000000363BE0ULL
#define HV_START_OFFSET_478C       0x370F28
#define OFFSET_FIX_478C            0x05658C
#define OFFSET_2_FIX_478C          0x05A6E4
#define OFFSET_FIX_2B17_478C       0x2275F4
#define OFFSET_FIX_LIC_478C        0x056230
#define OFFSET_FIX_3C_478C         0x267150
#define OPEN_HOOK_478C             0x8000000000297638ULL
#define BASE_ADDR_478C             0x80000000002D8AF0ULL
#define LV2MOUNTADDR_478C          0x8000000000479FC0ULL
#define LV2MOUNTADDR_ESIZE_478C    0x118
#define LV2MOUNTADDR_CSIZE_478C    0x108
#define FW_DATE_OFFSET_478C        0x80000000002FCB68ULL
#define FW_DATE_1_478C             0x323031352F31322FULL
#define FW_DATE_2_478C             0x31362032333A3037ULL
#define OFFSET_1_IDPS_478C         0x80000000003E2E30ULL
#define OFFSET_2_IDPS_478C         0x8000000000474AF4ULL

#define SYSCALL_TABLE_478D         0x80000000003D01B8ULL
#define HV_START_OFFSET_478D       0x370F28
#define OFFSET_FIX_478D            0x059F5C
#define OFFSET_2_FIX_478D          0x05E0B4
#define OFFSET_FIX_2B17_478D       0x22DAD0
#define OFFSET_FIX_LIC_478D        0x059C00
#define OFFSET_FIX_3C_478D         0x26D86C
#define OPEN_HOOK_478D             0x80000000002B24F8ULL
#define BASE_ADDR_478D             0x80000000002FA5B0ULL
#define LV2MOUNTADDR_478D          0x80000000004A3678ULL
#define LV2MOUNTADDR_ESIZE_478D    0x118
#define LV2MOUNTADDR_CSIZE_478D    0x108
#define FW_DATE_OFFSET_478D        0x800000000031EF48ULL
#define FW_DATE_1_478D             0x323031352F31322FULL
#define FW_DATE_2_478D             0x31362032333A3036ULL
#define OFFSET_1_IDPS_478D         0x8000000000409930ULL
#define OFFSET_2_IDPS_478D         0x800000000049CAF4ULL

#define SYSCALL_TABLE_480C         0x8000000000363BE0ULL
#define HV_START_OFFSET_480C       0x6B364E
#define OFFSET_FIX_480C            0x056588
#define OFFSET_2_FIX_480C          0x05A6E0
#define OFFSET_FIX_2B17_480C       0x2275EC
#define OFFSET_FIX_LIC_480C        0x05622C
#define OFFSET_FIX_3C_480C         0x267148
#define OPEN_HOOK_480C             0x800000000029762CULL
#define BASE_ADDR_480C             0x80000000002D8AE0ULL
#define LV2MOUNTADDR_480C          0x8000000000479FC0ULL
#define LV2MOUNTADDR_ESIZE_480C    0x118
#define LV2MOUNTADDR_CSIZE_480C    0x108
#define FW_DATE_OFFSET_480C        0x80000000002FCB58ULL
#define FW_DATE_1_480C             0x323031362F30332FULL
#define FW_DATE_2_480C             0x32342032303A3136ULL
#define OFFSET_1_IDPS_480C         0x80000000003E2E30ULL
#define OFFSET_2_IDPS_480C         0x8000000000474AF4ULL

#define SYSCALL_TABLE_480D         0x800000000038A4E8ULL
#define HV_START_OFFSET_480D       0x6B31E1
#define OFFSET_FIX_480D            0x059F58
#define OFFSET_2_FIX_480D          0x05E0B0
#define OFFSET_FIX_2B17_480D       0x22DAC8
#define OFFSET_FIX_LIC_480D        0x059BFC
#define OFFSET_FIX_3C_480D         0x26D864
#define OPEN_HOOK_480D             0x80000000002B25C4ULL
#define BASE_ADDR_480D             0x80000000002FA680ULL
#define LV2MOUNTADDR_480D          0x80000000004A3678ULL
#define LV2MOUNTADDR_ESIZE_480D    0x118
#define LV2MOUNTADDR_CSIZE_480D    0x108
#define FW_DATE_OFFSET_480D        0x800000000031F018ULL
#define FW_DATE_1_480D             0x323031362F30332FULL
#define FW_DATE_2_480D             0x32342032303A3135ULL
#define OFFSET_1_IDPS_480D         0x8000000000409A30ULL
#define OFFSET_2_IDPS_480D         0x800000000049CAF4ULL

#define SYSCALL_TABLE_481C         0x8000000000363BE0ULL
#define HV_START_OFFSET_481C       0x370F28
#define OFFSET_FIX_481C            0x05658C
#define OFFSET_2_FIX_481C          0x05A6E4
#define OFFSET_FIX_2B17_481C       0x2275F4
#define OFFSET_FIX_LIC_481C        0x056230
#define OFFSET_FIX_3C_481C         0x267150
#define OPEN_HOOK_481C             0x8000000000297638ULL
#define BASE_ADDR_481C             0x80000000002D8AF0ULL
#define LV2MOUNTADDR_481C          0x8000000000479FC0ULL
#define LV2MOUNTADDR_ESIZE_481C    0x118
#define LV2MOUNTADDR_CSIZE_481C    0x108
#define FW_DATE_OFFSET_481C        0x80000000002FCB68ULL
#define FW_DATE_1_481C             0x323031362F31302FULL
#define FW_DATE_2_481C             0x32342031323A3139ULL
#define OFFSET_1_IDPS_481C         0x80000000003E2E30ULL
#define OFFSET_2_IDPS_481C         0x8000000000474AF4ULL

#define SYSCALL_TABLE_481D         0x800000000038A4E8ULL
#define HV_START_OFFSET_481D       0x370F28
#define OFFSET_FIX_481D            0x059F5C
#define OFFSET_2_FIX_481D          0x05E0B4
#define OFFSET_FIX_2B17_481D       0x22DAD0
#define OFFSET_FIX_LIC_481D        0x059C00
#define OFFSET_FIX_3C_481D         0x26D86C
#define OPEN_HOOK_481D             0x80000000002B25D0ULL
#define BASE_ADDR_481D             0x80000000002FA690ULL
#define LV2MOUNTADDR_481D          0x80000000004A3678ULL
#define LV2MOUNTADDR_ESIZE_481D    0x118
#define LV2MOUNTADDR_CSIZE_481D    0x108
#define FW_DATE_OFFSET_481D        0x800000000031F028ULL
#define FW_DATE_1_481D             0x323031362F31302FULL
#define FW_DATE_2_481D             0x32342031323A3139ULL
#define OFFSET_1_IDPS_481D         0x8000000000409A30ULL
#define OFFSET_2_IDPS_481D         0x800000000049CAF4ULL

#endif /* __COMMON_H__ */
