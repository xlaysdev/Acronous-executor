/* FUN_180102640 @ 180102640 */

undefined ** FUN_180102640(undefined8 param_1,undefined **param_2,undefined **param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined **ppuVar4;
  
  if (param_3 != (undefined **)0x0) {
    do {
      ppuVar4 = param_2;
      uVar3 = FUN_1801e4c30(param_1,param_2,param_3);
      if ((uVar3 & 1) == 0) {
        if (ppuVar4 == (undefined **)0x0) {
          return &PTR_s_failed_to_write_whole_buffer_180239930;
        }
        if (param_3 < ppuVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(ppuVar4,param_3,param_3,&PTR_s_C__Users_burne__rustup_toolchain_1802399b8);
        }
        param_2 = (undefined **)((longlong)param_2 + (longlong)ppuVar4);
        param_3 = (undefined **)((longlong)param_3 - (longlong)ppuVar4);
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
          thunk_FUN_1801d3330((longlong)ppuVar4 - 1,0x18,8);
          break;
        case 2:
          goto switchD_1801026b7_caseD_2;
        case 3:
          if ((int)((ulonglong)ppuVar4 >> 0x20) != 0x23) {
            return ppuVar4;
          }
        }
      }
    } while (param_3 != (undefined **)0x0);
  }
  ppuVar4 = (undefined **)0x0;
switchD_1801026b7_caseD_2:
  return ppuVar4;
}


