/* FUN_18002c8c0 @ 18002c8c0 */

undefined ** FUN_18002c8c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined **ppuVar4;
  char *pcVar5;
  undefined **ppuVar6;
  
  ppuVar6 = (undefined **)0x3d;
  pcVar5 = "fatal r";
  do {
    ppuVar4 = (undefined **)pcVar5;
    uVar3 = FUN_1801e4c30(param_1,pcVar5,ppuVar6);
    if ((uVar3 & 1) == 0) {
      if (ppuVar4 == (undefined **)0x0) {
        return &PTR_s_failed_to_write_whole_buffer_180205d08;
      }
      if (ppuVar6 < ppuVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(ppuVar4,ppuVar6,ppuVar6,&PTR_s_C__Users_burne__rustup_toolchain_180205d20);
      }
      pcVar5 = (char *)((longlong)pcVar5 + (longlong)ppuVar4);
      ppuVar6 = (undefined **)((longlong)ppuVar6 - (longlong)ppuVar4);
    }
    else {
      switch((uint)ppuVar4 & 3) {
      case 0:
        if (*(char *)(ppuVar4 + 2) != '#') {
          return ppuVar4;
        }
        break;
      case 1:
        if (*(char *)((longlong)ppuVar4 + 0xf) != '#') {
          return ppuVar4;
        }
        uVar1 = *(undefined8 *)((longlong)ppuVar4 - 1);
        puVar2 = *(undefined8 **)((longlong)ppuVar4 + 7);
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)(uVar1);
        }
        if (puVar2[1] != 0) {
          thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
        }
        thunk_FUN_1801d3330((char *)((longlong)ppuVar4 - 1),0x18,8);
        break;
      case 2:
        goto switchD_18002c937_caseD_2;
      case 3:
        if ((int)((ulonglong)ppuVar4 >> 0x20) != 0x23) {
          return ppuVar4;
        }
      }
    }
  } while (ppuVar6 != (undefined **)0x0);
  ppuVar4 = (undefined **)0x0;
switchD_18002c937_caseD_2:
  return ppuVar4;
}


