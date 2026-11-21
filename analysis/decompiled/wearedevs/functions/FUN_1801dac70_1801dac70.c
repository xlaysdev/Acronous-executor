/* FUN_1801dac70 @ 1801dac70 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1801dac70(undefined8 *param_1,uint param_2)

{
  code cVar1;
  code cVar2;
  uint uVar3;
  DWORD DVar4;
  HMODULE lpSource;
  uint **ppuVar5;
  undefined *puVar6;
  code *pcVar7;
  code *pcVar8;
  uint uVar9;
  byte bVar10;
  WCHAR local_1078 [2048];
  code *local_78;
  uint *local_70;
  code *local_68;
  uint **local_60;
  code *local_58;
  uint *local_50;
  code *local_48;
  uint *local_40;
  uint local_34 [3];
  
  local_34[1] = 0xfffffffe;
  local_34[2] = 0xffffffff;
  lpSource = (HMODULE)0x0;
  local_34[0] = param_2;
  memset(local_1078,0,0x1000);
  DVar4 = 0x1200;
  if ((param_2 & 0x10000000) != 0) {
    lpSource = GetModuleHandleW(L"NTDLL.DLL");
    if (lpSource == (HMODULE)0x0) {
      lpSource = (HMODULE)0x0;
      DVar4 = 0x1200;
    }
    else {
      param_2 = param_2 & 0xefffffff;
      DVar4 = 0x1a00;
      local_34[0] = param_2;
    }
  }
  DVar4 = FormatMessageW(DVar4,lpSource,param_2,0,local_1078,0x800,(va_list *)0x0);
  if (DVar4 == 0) {
    DVar4 = GetLastError();
    local_50 = (uint *)CONCAT44(local_50._4_4_,DVar4);
    local_70 = local_34;
    local_68 = FUN_1801ee530;
    local_60 = &local_50;
    local_58 = FUN_1801ee530;
    puVar6 = &DAT_18028f8c0;
    ppuVar5 = &local_70;
  }
  else {
    if (0x800 < DVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,DVar4,0x800,&PTR_s_library_std_src_sys_pal_windows__18028f8a8);
    }
    FUN_1801ecf20(&local_70,local_1078);
    if (!SBORROW8(0,(longlong)local_70)) {
      if (local_60 != (uint **)0x0) {
        pcVar7 = local_68 + (longlong)local_60;
        do {
          uVar9 = (uint)(char)pcVar7[-1];
          if ((int)uVar9 < 0) {
            cVar1 = pcVar7[-2];
            if ((char)cVar1 < -0x40) {
              cVar2 = pcVar7[-3];
              if ((char)cVar2 < -0x40) {
                pcVar8 = pcVar7 + -4;
                uVar9 = (byte)cVar2 & 0x3f | ((byte)pcVar7[-4] & 7) << 6;
              }
              else {
                pcVar8 = pcVar7 + -3;
                uVar9 = (byte)cVar2 & 0xf;
              }
              uVar9 = (byte)cVar1 & 0x3f | uVar9 << 6;
            }
            else {
              pcVar8 = pcVar7 + -2;
              uVar9 = (byte)cVar1 & 0x1f;
            }
            uVar9 = (uint)((byte)pcVar7[-1] & 0x3f) | uVar9 << 6;
          }
          else {
            pcVar8 = pcVar7 + -1;
          }
          if ((4 < uVar9 - 9) && (uVar9 != 0x20)) {
            if (0x7f < uVar9) {
              uVar3 = uVar9 >> 8;
              if (uVar3 < 0x20) {
                if (uVar3 == 0) {
                  bVar10 = PTR_DAT_1802fd658[(ulonglong)uVar9 & 0xff];
                }
                else {
                  if (uVar3 != 0x16) goto LAB_1801daf2b;
                  bVar10 = uVar9 == 0x1680;
                }
              }
              else if (uVar3 == 0x20) {
                bVar10 = (byte)PTR_DAT_1802fd658[(ulonglong)uVar9 & 0xff] >> 1;
              }
              else {
                if (uVar3 != 0x30) goto LAB_1801daf2b;
                bVar10 = uVar9 == 0x3000;
              }
              if ((bVar10 & 1) != 0) goto LAB_1801dae10;
            }
LAB_1801daf2b:
            ppuVar5 = (uint **)(pcVar7 + -(longlong)local_68);
            if (local_60 < ppuVar5) {
              ppuVar5 = local_60;
            }
            else if ((ppuVar5 < local_60 && ppuVar5 != (uint **)0x0) &&
                    ((char)local_68[(longlong)ppuVar5] < -0x40)) {
              local_78 = local_68;
              local_40 = local_70;
                    /* WARNING: Subroutine does not return */
              FUN_180201ec0(&DAT_180290d90,0x30,&PTR_s_library_std_src_sys_pal_windows__18028f858);
            }
            goto LAB_1801daf12;
          }
LAB_1801dae10:
          pcVar7 = pcVar8;
        } while (local_68 != pcVar8);
      }
      ppuVar5 = (uint **)0x0;
LAB_1801daf12:
      *param_1 = local_70;
      param_1[1] = local_68;
      param_1[2] = ppuVar5;
      return;
    }
    local_50 = local_34;
    local_48 = FUN_1801ee530;
    puVar6 = &DAT_18028f870;
    ppuVar5 = &local_50;
  }
  FUN_1801ec780(param_1,puVar6,ppuVar5);
  return;
}


