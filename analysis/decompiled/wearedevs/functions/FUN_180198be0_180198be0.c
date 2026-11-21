/* FUN_180198be0 @ 180198be0 */

void FUN_180198be0(longlong param_1,char param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  uVar6 = uVar2 - param_3;
  if (uVar2 < param_3 || uVar6 == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if ((param_3 != 0) && (*(char *)(lVar3 + param_3) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018d0(lVar3,uVar2,param_3,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_1802673a0);
  }
  uVar1 = lVar3 + param_3;
  uVar4 = uVar6;
  do {
    uVar5 = uVar1;
    uVar4 = FUN_1801f3060(0x2f,uVar1,uVar4);
    if ((uVar4 & 1) == 0) break;
    if ((uVar5 < uVar6) && (*(char *)(uVar1 + uVar5) == '/')) {
      uVar6 = uVar5 + param_3 + 1;
      if (param_2 == '\0') {
        if ((uVar6 < uVar2) && (*(char *)(lVar3 + uVar6) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(lVar3,uVar2,uVar6,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_1802673d0);
        }
        if (((uVar2 - uVar6 == 2) && ((byte)((*(byte *)(lVar3 + uVar6) & 0xdf) + 0xbf) < 0x1a)) &&
           (*(char *)(lVar3 + 1 + uVar6) == ':')) {
          return;
        }
      }
      if ((uVar6 < uVar2) && (*(char *)(lVar3 + uVar6) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0(&DAT_180267494,0x30,&PTR_s_C__Users_burne__cargo_registry_s_1802673e8);
      }
      *(ulonglong *)(param_1 + 0x10) = uVar6;
      return;
    }
    uVar4 = uVar5;
  } while (uVar5 <= uVar6);
                    /* WARNING: Subroutine does not return */
  FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802673b8);
}


